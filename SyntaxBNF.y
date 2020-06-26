
%{
//-----------------------------------------------------------------------------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//-----------------------------------------------------------------------------
//----Compile with -DP_VERBOSE=1 for verbose output.
#ifndef P_VERBOSE
#  define P_VERBOSE 0
#endif
int verbose = P_VERBOSE;

//----Compile with -DP_USERPROC=1 to #include p_user_proc.c. p_user_proc.c 
//----should #define P_ACT, P_BUILD, P_TOKEN, P_PRINT to different procedures 
//----from those below, and supply code.
#ifdef P_USERPROC
#  include "p_user_proc.c"
#else
#  define P_ACT(ss) if(verbose)printf("%7d %s\n",yylineno,ss);
#  define P_BUILD(sym,A,B,C,D,E,F,G,H,I,J) pBuildTree(sym,A,B,C,D,E,F,G,H,I,J)
#  define P_TOKEN(tok,symbolIndex) pToken(tok,symbolIndex)
#  define P_PRINT(ss) if(verbose){printf("\n\n");pPrintTree(ss,0);}
#endif

extern int yylineno;
extern int yychar;
extern char yytext[];

extern int tptp_store_size;
extern char* tptp_lval[];

#define MAX_CHILDREN 12
typedef struct pTreeNode * pTree;
struct pTreeNode {
    char* symbol; 
    int symbolIndex; 
    pTree children[MAX_CHILDREN+1];
};
//-----------------------------------------------------------------------------
int yyerror( char *s ) { 

    fprintf( stderr, "%s in line %d at item \"%s\".\n", s, yylineno, yytext); 
    return(0);
}
//-----------------------------------------------------------------------------
pTree pBuildTree(char* symbol,pTree A,pTree B,pTree C,pTree D,pTree E,pTree F, 
pTree G, pTree H, pTree I, pTree J) { 

    pTree ss = (pTree)calloc(1,sizeof(struct pTreeNode));

    ss->symbol = symbol;
    ss->symbolIndex = -1;
    ss->children[0] = A; 
    ss->children[1] = B; 
    ss->children[2] = C;
    ss->children[3] = D;
    ss->children[4] = E;
    ss->children[5] = F;
    ss->children[6] = G;
    ss->children[7] = H;
    ss->children[8] = I;
    ss->children[9] = J;
    ss->children[10] = NULL;

    return ss; 
}
//-----------------------------------------------------------------------------
pTree pToken(char* token, int symbolIndex) { 

    char pTokenBuf[8240];
    pTree ss;
    char* symbol = tptp_lval[symbolIndex];
    char* safeSym;

    strncpy(pTokenBuf, token, 39);
    strncat(pTokenBuf, symbol, 8193);
    safeSym = strdup(pTokenBuf);
    ss = pBuildTree(safeSym,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);
    ss->symbolIndex = symbolIndex;

    return ss; 
}
//-----------------------------------------------------------------------------
void pPrintComments(int start, int depth) { 

    int d, j;
    char c1[4] = "%", c2[4] = "/*";

    j = start;
    while (tptp_lval[j] != NULL && (tptp_lval[j][0]==c1[0] || 
(tptp_lval[j][0]==c2[0] && tptp_lval[j][1]==c2[1]))) { 
        for (d=0; d<depth-1; d++) {
            printf("| ");
        }
        printf("%1d ",depth % 10);
        printf("%s\n",tptp_lval[j]);
        j = (j+1)%tptp_store_size; 
    }
    return; 
}
//-----------------------------------------------------------------------------
void pPrintTree(pTree ss, int depth) { 

//----pPrintIdx is where to find top-level comments to print before a sentence. 
//----yywrap() gets those after last sentence.
    static int pPrintIdx = 0;
    int i, d;

    if (pPrintIdx >= 0) { 
        pPrintComments(pPrintIdx, 0); 
        pPrintIdx = -1;
    }
    if (ss == NULL) {
        return;
    }
    for (d = 0; d < depth-1; d++) {
        printf("| ");
    }
    printf("%1d ",depth % 10);
    if (ss->children[0] == NULL) {
        printf("%s\n", ss->symbol);
    } else {
        printf("<%s>\n", ss->symbol);
    }
    if (strcmp(ss->symbol, "PERIOD .") == 0) {
        pPrintIdx = (ss->symbolIndex+1) % tptp_store_size;
    }
    if (ss->symbolIndex >= 0) {
        pPrintComments((ss->symbolIndex+1) % tptp_store_size, depth);
    }
    i = 0;
    while(ss->children[i] != NULL) {
        pPrintTree(ss->children[i],depth+1); 
        i++;
    }
    return; 
}
//-----------------------------------------------------------------------------
int yywrap(void) { 

    P_PRINT(NULL); 
    return 1; 
}
//-----------------------------------------------------------------------------
%}

%union {int ival; double dval; char* sval; void* pval;}
%start  TPTP_file
%token <ival> COMMA
%token <ival> EQUALS
%token <ival> EXCLAMATION_EQUALS
%token <ival> LBRKT
%token <ival> LPAREN
%token <ival> PERIOD
%token <ival> RBRKT
%token <ival> RPAREN
%token <ival> TILDE
%token <ival> VLINE
%token <ival> _LIT_cnf
%token <ival> _LIT_include
%token <ival> decimal
%token <ival> decimal_exponent
%token <ival> decimal_fraction
%token <ival> distinct_object
%token <ival> dollar_dollar_word
%token <ival> dollar_word
%token <ival> dot_decimal
%token <ival> exp_integer
%token <ival> integer
%token <ival> lower_word
%token <ival> positive_decimal
%token <ival> rational
%token <ival> real
%token <ival> signed_exp_integer
%token <ival> signed_integer
%token <ival> signed_rational
%token <ival> signed_real
%token <ival> single_quoted
%token <ival> unrecognized
%token <ival> unsigned_exp_integer
%token <ival> unsigned_integer
%token <ival> unsigned_rational
%token <ival> unsigned_real
%token <ival> upper_word
%token <ival> vline
%%

TPTP_file : null {}
                    | TPTP_file TPTP_input {}
                    ;

TPTP_input : annotated_formula {P_PRINT($<pval>$);}
                    | include {P_PRINT($<pval>$);}
                    ;

annotated_formula : cnf_annotated {$<pval>$ = P_BUILD("annotated_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

cnf_annotated : _LIT_cnf LPAREN name COMMA formula_role COMMA cnf_formula annotations RPAREN PERIOD {$<pval>$ = P_BUILD("cnf_annotated", P_TOKEN("_LIT_cnf ", $<ival>1), P_TOKEN("LPAREN ", $<ival>2), $<pval>3, P_TOKEN("COMMA ", $<ival>4), $<pval>5, P_TOKEN("COMMA ", $<ival>6), $<pval>7, $<pval>8, P_TOKEN("RPAREN ", $<ival>9), P_TOKEN("PERIOD ", $<ival>10));}
                    ;

annotations : null {$<pval>$ = P_BUILD("annotations", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

formula_role : lower_word {$<pval>$ = P_BUILD("formula_role", P_TOKEN("lower_word ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_infix_unary : fof_term infix_inequality fof_term {$<pval>$ = P_BUILD("fof_infix_unary", $<pval>1, $<pval>2, $<pval>3,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_atomic_formula : fof_plain_atomic_formula {$<pval>$ = P_BUILD("fof_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_defined_atomic_formula {$<pval>$ = P_BUILD("fof_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_system_atomic_formula {$<pval>$ = P_BUILD("fof_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_plain_atomic_formula : fof_plain_term {$<pval>$ = P_BUILD("fof_plain_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_defined_atomic_formula : fof_defined_plain_formula {$<pval>$ = P_BUILD("fof_defined_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_defined_infix_formula {$<pval>$ = P_BUILD("fof_defined_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_defined_plain_formula : fof_defined_plain_term {$<pval>$ = P_BUILD("fof_defined_plain_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_defined_infix_formula : fof_term defined_infix_pred fof_term {$<pval>$ = P_BUILD("fof_defined_infix_formula", $<pval>1, $<pval>2, $<pval>3,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_system_atomic_formula : fof_system_term {$<pval>$ = P_BUILD("fof_system_atomic_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_plain_term : constant {$<pval>$ = P_BUILD("fof_plain_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | functor LPAREN fof_arguments RPAREN {$<pval>$ = P_BUILD("fof_plain_term", $<pval>1, P_TOKEN("LPAREN ", $<ival>2), $<pval>3, P_TOKEN("RPAREN ", $<ival>4),NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_defined_term : defined_term {$<pval>$ = P_BUILD("fof_defined_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_defined_atomic_term {$<pval>$ = P_BUILD("fof_defined_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_defined_atomic_term : fof_defined_plain_term {$<pval>$ = P_BUILD("fof_defined_atomic_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_defined_plain_term : defined_constant {$<pval>$ = P_BUILD("fof_defined_plain_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | defined_functor LPAREN fof_arguments RPAREN {$<pval>$ = P_BUILD("fof_defined_plain_term", $<pval>1, P_TOKEN("LPAREN ", $<ival>2), $<pval>3, P_TOKEN("RPAREN ", $<ival>4),NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_system_term : system_constant {$<pval>$ = P_BUILD("fof_system_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | system_functor LPAREN fof_arguments RPAREN {$<pval>$ = P_BUILD("fof_system_term", $<pval>1, P_TOKEN("LPAREN ", $<ival>2), $<pval>3, P_TOKEN("RPAREN ", $<ival>4),NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_arguments : fof_term {$<pval>$ = P_BUILD("fof_arguments", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_term COMMA fof_arguments {$<pval>$ = P_BUILD("fof_arguments", $<pval>1, P_TOKEN("COMMA ", $<ival>2), $<pval>3,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_term : fof_function_term {$<pval>$ = P_BUILD("fof_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | variable {$<pval>$ = P_BUILD("fof_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

fof_function_term : fof_plain_term {$<pval>$ = P_BUILD("fof_function_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_defined_term {$<pval>$ = P_BUILD("fof_function_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_system_term {$<pval>$ = P_BUILD("fof_function_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

cnf_formula : disjunction {$<pval>$ = P_BUILD("cnf_formula", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | LPAREN disjunction RPAREN {$<pval>$ = P_BUILD("cnf_formula", P_TOKEN("LPAREN ", $<ival>1), $<pval>2, P_TOKEN("RPAREN ", $<ival>3),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

disjunction : literal {$<pval>$ = P_BUILD("disjunction", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | disjunction VLINE literal {$<pval>$ = P_BUILD("disjunction", $<pval>1, P_TOKEN("VLINE ", $<ival>2), $<pval>3,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

literal : fof_atomic_formula {$<pval>$ = P_BUILD("literal", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | TILDE fof_atomic_formula {$<pval>$ = P_BUILD("literal", P_TOKEN("TILDE ", $<ival>1), $<pval>2,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | fof_infix_unary {$<pval>$ = P_BUILD("literal", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

defined_infix_pred : infix_equality {$<pval>$ = P_BUILD("defined_infix_pred", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

infix_equality : EQUALS {$<pval>$ = P_BUILD("infix_equality", P_TOKEN("EQUALS ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

infix_inequality : EXCLAMATION_EQUALS {$<pval>$ = P_BUILD("infix_inequality", P_TOKEN("EXCLAMATION_EQUALS ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

constant : functor {$<pval>$ = P_BUILD("constant", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

functor : atomic_word {$<pval>$ = P_BUILD("functor", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

system_constant : system_functor {$<pval>$ = P_BUILD("system_constant", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

system_functor : atomic_system_word {$<pval>$ = P_BUILD("system_functor", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

defined_constant : defined_functor {$<pval>$ = P_BUILD("defined_constant", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

defined_functor : atomic_defined_word {$<pval>$ = P_BUILD("defined_functor", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

defined_term : number {$<pval>$ = P_BUILD("defined_term", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | distinct_object {$<pval>$ = P_BUILD("defined_term", P_TOKEN("distinct_object ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

variable : upper_word {$<pval>$ = P_BUILD("variable", P_TOKEN("upper_word ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

include : _LIT_include LPAREN file_name formula_selection RPAREN PERIOD {$<pval>$ = P_BUILD("include", P_TOKEN("_LIT_include ", $<ival>1), P_TOKEN("LPAREN ", $<ival>2), $<pval>3, $<pval>4, P_TOKEN("RPAREN ", $<ival>5), P_TOKEN("PERIOD ", $<ival>6),NULL,NULL,NULL,NULL);}
                    ;

formula_selection : COMMA LBRKT name_list RBRKT {$<pval>$ = P_BUILD("formula_selection", P_TOKEN("COMMA ", $<ival>1), P_TOKEN("LBRKT ", $<ival>2), $<pval>3, P_TOKEN("RBRKT ", $<ival>4),NULL,NULL,NULL,NULL,NULL,NULL);}
                    | null {$<pval>$ = P_BUILD("formula_selection", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

name_list : name {$<pval>$ = P_BUILD("name_list", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | name COMMA name_list {$<pval>$ = P_BUILD("name_list", $<pval>1, P_TOKEN("COMMA ", $<ival>2), $<pval>3,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

name : atomic_word {$<pval>$ = P_BUILD("name", $<pval>1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | integer {$<pval>$ = P_BUILD("name", P_TOKEN("integer ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

atomic_word : lower_word {$<pval>$ = P_BUILD("atomic_word", P_TOKEN("lower_word ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | single_quoted {$<pval>$ = P_BUILD("atomic_word", P_TOKEN("single_quoted ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

atomic_defined_word : dollar_word {$<pval>$ = P_BUILD("atomic_defined_word", P_TOKEN("dollar_word ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

atomic_system_word : dollar_dollar_word {$<pval>$ = P_BUILD("atomic_system_word", P_TOKEN("dollar_dollar_word ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

number : integer {$<pval>$ = P_BUILD("number", P_TOKEN("integer ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | rational {$<pval>$ = P_BUILD("number", P_TOKEN("rational ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    | real {$<pval>$ = P_BUILD("number", P_TOKEN("real ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

file_name : single_quoted {$<pval>$ = P_BUILD("file_name", P_TOKEN("single_quoted ", $<ival>1),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

null : {$<pval>$ = P_BUILD("null",NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
                    ;

