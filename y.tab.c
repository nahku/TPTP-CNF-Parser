/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COMMA = 258,
     EQUALS = 259,
     EXCLAMATION_EQUALS = 260,
     LBRKT = 261,
     LPAREN = 262,
     PERIOD = 263,
     RBRKT = 264,
     RPAREN = 265,
     TILDE = 266,
     VLINE = 267,
     _LIT_cnf = 268,
     _LIT_include = 269,
     decimal = 270,
     decimal_exponent = 271,
     decimal_fraction = 272,
     distinct_object = 273,
     dollar_dollar_word = 274,
     dollar_word = 275,
     dot_decimal = 276,
     exp_integer = 277,
     integer = 278,
     lower_word = 279,
     positive_decimal = 280,
     rational = 281,
     real = 282,
     signed_exp_integer = 283,
     signed_integer = 284,
     signed_rational = 285,
     signed_real = 286,
     single_quoted = 287,
     unrecognized = 288,
     unsigned_exp_integer = 289,
     unsigned_integer = 290,
     unsigned_rational = 291,
     unsigned_real = 292,
     upper_word = 293,
     vline = 294
   };
#endif
/* Tokens.  */
#define COMMA 258
#define EQUALS 259
#define EXCLAMATION_EQUALS 260
#define LBRKT 261
#define LPAREN 262
#define PERIOD 263
#define RBRKT 264
#define RPAREN 265
#define TILDE 266
#define VLINE 267
#define _LIT_cnf 268
#define _LIT_include 269
#define decimal 270
#define decimal_exponent 271
#define decimal_fraction 272
#define distinct_object 273
#define dollar_dollar_word 274
#define dollar_word 275
#define dot_decimal 276
#define exp_integer 277
#define integer 278
#define lower_word 279
#define positive_decimal 280
#define rational 281
#define real 282
#define signed_exp_integer 283
#define signed_integer 284
#define signed_rational 285
#define signed_real 286
#define single_quoted 287
#define unrecognized 288
#define unsigned_exp_integer 289
#define unsigned_integer 290
#define unsigned_rational 291
#define unsigned_real 292
#define upper_word 293
#define vline 294




/* Copy the first part of user declarations.  */
#line 2 "SyntaxBNF.y"

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

int cnf_counter = 0;
int error_flag = 0;


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

//Modified
extern FILE *yyin;

#define MAX_CHILDREN 12
typedef struct pTreeNode * pTree;
struct pTreeNode {
    char* symbol; 
    int symbolIndex; 
    pTree children[MAX_CHILDREN+1];
};
//-----------------------------------------------------------------------------
int main(int argc, char **argv ){
    ++argv, --argc;  /* skip over program name */
    if(argc>0){
        yyin = fopen(argv[0],"r");
    }
    else{
        yyin = stdin;
    }
    yyparse();
    printf("Total count of cnf formulae: %d\n‚",cnf_counter);
    
    if(error_flag == 0){
        return 0;
    }
    else{
        return -1;
    }
}

int yyerror( char *s ) { 

    fprintf( stderr, "%s in line %d at item \"%s\".\n", s, yylineno, yytext);
    error_flag = 1;
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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 148 "SyntaxBNF.y"
{int ival; double dval; char* sval; void* pval;}
/* Line 193 of yacc.c.  */
#line 322 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 335 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   99

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  104

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   294

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    25,    27,
      29,    33,    35,    37,    39,    41,    43,    45,    47,    51,
      53,    55,    60,    62,    64,    66,    68,    73,    75,    80,
      82,    86,    88,    90,    92,    94,    96,    98,   102,   104,
     108,   110,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   146,   151,   153,   155,
     159,   161,   163,   165,   167,   169,   171,   173,   175,   177,
     179
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      41,     0,    -1,    85,    -1,    41,    42,    -1,    43,    -1,
      76,    -1,    44,    -1,    13,     7,    79,     3,    46,     3,
      62,    45,    10,     8,    -1,    85,    -1,    24,    -1,    60,
      67,    60,    -1,    49,    -1,    50,    -1,    53,    -1,    54,
      -1,    51,    -1,    52,    -1,    57,    -1,    60,    65,    60,
      -1,    58,    -1,    68,    -1,    69,     7,    59,    10,    -1,
      74,    -1,    56,    -1,    57,    -1,    72,    -1,    73,     7,
      59,    10,    -1,    70,    -1,    71,     7,    59,    10,    -1,
      60,    -1,    60,     3,    59,    -1,    61,    -1,    75,    -1,
      54,    -1,    55,    -1,    58,    -1,    63,    -1,     7,    63,
      10,    -1,    64,    -1,    63,    12,    64,    -1,    48,    -1,
      11,    48,    -1,    47,    -1,    66,    -1,     4,    -1,     5,
      -1,    69,    -1,    80,    -1,    71,    -1,    82,    -1,    73,
      -1,    81,    -1,    83,    -1,    18,    -1,    38,    -1,    14,
       7,    84,    77,    10,     8,    -1,     3,     6,    78,     9,
      -1,    85,    -1,    79,    -1,    79,     3,    78,    -1,    80,
      -1,    23,    -1,    24,    -1,    32,    -1,    20,    -1,    19,
      -1,    23,    -1,    26,    -1,    27,    -1,    32,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   189,   189,   190,   193,   194,   197,   200,   203,   206,
     209,   212,   213,   214,   217,   220,   221,   224,   227,   230,
     233,   234,   237,   238,   241,   244,   245,   248,   249,   252,
     253,   256,   257,   260,   261,   262,   265,   266,   269,   270,
     273,   274,   275,   278,   281,   284,   287,   290,   293,   296,
     299,   302,   305,   306,   309,   312,   315,   316,   319,   320,
     323,   324,   327,   328,   331,   334,   337,   338,   339,   342,
     345
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMA", "EQUALS", "EXCLAMATION_EQUALS",
  "LBRKT", "LPAREN", "PERIOD", "RBRKT", "RPAREN", "TILDE", "VLINE",
  "_LIT_cnf", "_LIT_include", "decimal", "decimal_exponent",
  "decimal_fraction", "distinct_object", "dollar_dollar_word",
  "dollar_word", "dot_decimal", "exp_integer", "integer", "lower_word",
  "positive_decimal", "rational", "real", "signed_exp_integer",
  "signed_integer", "signed_rational", "signed_real", "single_quoted",
  "unrecognized", "unsigned_exp_integer", "unsigned_integer",
  "unsigned_rational", "unsigned_real", "upper_word", "vline", "$accept",
  "TPTP_file", "TPTP_input", "annotated_formula", "cnf_annotated",
  "annotations", "formula_role", "fof_infix_unary", "fof_atomic_formula",
  "fof_plain_atomic_formula", "fof_defined_atomic_formula",
  "fof_defined_plain_formula", "fof_defined_infix_formula",
  "fof_system_atomic_formula", "fof_plain_term", "fof_defined_term",
  "fof_defined_atomic_term", "fof_defined_plain_term", "fof_system_term",
  "fof_arguments", "fof_term", "fof_function_term", "cnf_formula",
  "disjunction", "literal", "defined_infix_pred", "infix_equality",
  "infix_inequality", "constant", "functor", "system_constant",
  "system_functor", "defined_constant", "defined_functor", "defined_term",
  "variable", "include", "formula_selection", "name_list", "name",
  "atomic_word", "atomic_defined_word", "atomic_system_word", "number",
  "file_name", "null", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    44,    45,    46,
      47,    48,    48,    48,    49,    50,    50,    51,    52,    53,
      54,    54,    55,    55,    56,    57,    57,    58,    58,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    74,    75,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    82,    83,    83,    83,    84,
      85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,    10,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     4,     1,     1,     1,     1,     4,     1,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     4,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      70,     0,     2,     1,     0,     0,     3,     4,     6,     5,
       0,     0,    61,    62,    63,     0,    60,    69,    70,     0,
       0,     0,    57,     9,     0,     0,     0,     0,     0,    58,
      55,     0,     0,    53,    65,    64,    66,    67,    68,    54,
      42,    40,    11,    12,    15,    16,    13,    14,    34,    23,
      17,    19,     0,    31,    70,    36,    38,    20,    46,    27,
      48,    25,    50,    22,    32,    47,    51,    49,    52,    56,
       0,     0,    41,     0,    44,    45,     0,    43,     0,     0,
       8,     0,     0,     0,     0,    59,    37,    33,    24,    35,
      18,    10,     0,    39,     0,    29,     0,     0,     7,    21,
       0,    28,    26,    30
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     6,     7,     8,    79,    24,    40,    41,    42,
      43,    44,    45,    46,    87,    48,    49,    88,    89,    94,
      95,    53,    54,    55,    56,    76,    77,    78,    57,    58,
      59,    60,    61,    62,    63,    64,     9,    21,    28,    29,
      65,    66,    67,    68,    18,     2
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -42
static const yytype_int8 yypact[] =
{
     -42,    34,   -42,   -42,    -3,    11,   -42,   -42,   -42,   -42,
     -13,    -7,   -42,   -42,   -42,    25,   -42,   -42,    41,    22,
      43,    48,   -42,   -42,    59,   -13,    45,    13,    58,    72,
     -42,    50,     3,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,    60,   -42,   -42,
      67,    74,    76,   -42,   -42,    71,   -42,   -42,    77,   -42,
      78,   -42,    79,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
     -13,    44,   -42,    83,   -42,   -42,     3,   -42,     3,    80,
     -42,    50,     3,     3,     3,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,    81,   -42,    82,    88,    84,    85,   -42,   -42,
       3,   -42,   -42,   -42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,    61,   -42,
     -42,   -42,   -42,   -42,   -24,   -42,   -42,   -18,   -15,   -41,
     -26,   -42,   -42,    65,    16,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,    28,    89,
     -10,   -42,   -42,   -42,   -42,   -16
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -36
static const yytype_int8 yytable[] =
{
      16,    52,    22,    47,    10,    52,    73,    47,    47,    50,
      12,    13,    51,    50,    50,    16,    51,    51,    11,    14,
      31,    33,    34,    35,    32,    17,    36,    13,    19,    37,
      38,    33,    34,    35,     3,    14,    36,    13,    80,    37,
      38,    39,    96,    97,    20,    14,    23,     4,     5,    25,
      90,    39,    91,    30,    86,    52,    81,    47,    26,   103,
      16,    32,    27,    50,   -33,   -33,    51,    69,    33,    34,
      35,   -24,   -24,    36,    13,    70,    37,    38,   -35,   -35,
      74,    75,    14,    81,    82,    83,    84,    74,    39,    98,
      92,   100,    99,    72,   101,   102,    71,    93,    85,    15
};

static const yytype_uint8 yycheck[] =
{
      10,    27,    18,    27,     7,    31,    32,    31,    32,    27,
      23,    24,    27,    31,    32,    25,    31,    32,     7,    32,
       7,    18,    19,    20,    11,    32,    23,    24,     3,    26,
      27,    18,    19,    20,     0,    32,    23,    24,    54,    26,
      27,    38,    83,    84,     3,    32,    24,    13,    14,     6,
      76,    38,    78,     8,    10,    81,    12,    81,    10,   100,
      70,    11,     3,    81,     4,     5,    81,     9,    18,    19,
      20,     4,     5,    23,    24,     3,    26,    27,     4,     5,
       4,     5,    32,    12,     7,     7,     7,     4,    38,     8,
      10,     3,    10,    32,    10,    10,    31,    81,    70,    10
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    85,     0,    13,    14,    42,    43,    44,    76,
       7,     7,    23,    24,    32,    79,    80,    32,    84,     3,
       3,    77,    85,    24,    46,     6,    10,     3,    78,    79,
       8,     7,    11,    18,    19,    20,    23,    26,    27,    38,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    60,    61,    62,    63,    64,    68,    69,    70,
      71,    72,    73,    74,    75,    80,    81,    82,    83,     9,
       3,    63,    48,    60,     4,     5,    65,    66,    67,    45,
      85,    12,     7,     7,     7,    78,    10,    54,    57,    58,
      60,    60,    10,    64,    59,    60,    59,    59,     8,    10,
       3,    10,    10,    59
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 189 "SyntaxBNF.y"
    {}
    break;

  case 3:
#line 190 "SyntaxBNF.y"
    {}
    break;

  case 4:
#line 193 "SyntaxBNF.y"
    {P_PRINT((yyval.pval));}
    break;

  case 5:
#line 194 "SyntaxBNF.y"
    {P_PRINT((yyval.pval));}
    break;

  case 6:
#line 197 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("annotated_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 7:
#line 200 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("cnf_annotated", P_TOKEN("_LIT_cnf ", (yyvsp[(1) - (10)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (10)].ival)), (yyvsp[(3) - (10)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (10)].ival)), (yyvsp[(5) - (10)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (10)].ival)), (yyvsp[(7) - (10)].pval), (yyvsp[(8) - (10)].pval), P_TOKEN("RPAREN ", (yyvsp[(9) - (10)].ival)), P_TOKEN("PERIOD ", (yyvsp[(10) - (10)].ival)));}
    break;

  case 8:
#line 203 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("annotations", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 9:
#line 206 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_role", P_TOKEN("lower_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 10:
#line 209 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_infix_unary", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 11:
#line 212 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 12:
#line 213 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 13:
#line 214 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 14:
#line 217 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_plain_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 15:
#line 220 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 16:
#line 221 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 17:
#line 224 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_plain_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 18:
#line 227 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_infix_formula", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 19:
#line 230 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_system_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 20:
#line 233 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_plain_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 21:
#line 234 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_plain_term", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 22:
#line 237 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 23:
#line 238 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 24:
#line 241 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_atomic_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 25:
#line 244 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_plain_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 26:
#line 245 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_plain_term", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 27:
#line 248 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_system_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 28:
#line 249 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_system_term", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 29:
#line 252 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_arguments", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 30:
#line 253 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_arguments", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 31:
#line 256 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 32:
#line 257 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 33:
#line 260 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_function_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 34:
#line 261 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_function_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 35:
#line 262 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_function_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 36:
#line 265 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("cnf_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 37:
#line 266 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("cnf_formula", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 38:
#line 269 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("disjunction", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 39:
#line 270 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("disjunction", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 40:
#line 273 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("literal", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 41:
#line 274 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("literal", P_TOKEN("TILDE ", (yyvsp[(1) - (2)].ival)), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 42:
#line 275 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("literal", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 43:
#line 278 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_infix_pred", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 44:
#line 281 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("infix_equality", P_TOKEN("EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 45:
#line 284 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("infix_inequality", P_TOKEN("EXCLAMATION_EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 46:
#line 287 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 47:
#line 290 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 48:
#line 293 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("system_constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 49:
#line 296 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("system_functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 50:
#line 299 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 51:
#line 302 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 52:
#line 305 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 53:
#line 306 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_term", P_TOKEN("distinct_object ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 54:
#line 309 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("variable", P_TOKEN("upper_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 55:
#line 312 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("include", P_TOKEN("_LIT_include ", (yyvsp[(1) - (6)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (6)].ival)), (yyvsp[(3) - (6)].pval), (yyvsp[(4) - (6)].pval), P_TOKEN("RPAREN ", (yyvsp[(5) - (6)].ival)), P_TOKEN("PERIOD ", (yyvsp[(6) - (6)].ival)),NULL,NULL,NULL,NULL);}
    break;

  case 56:
#line 315 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_selection", P_TOKEN("COMMA ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LBRKT ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RBRKT ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 57:
#line 316 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_selection", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 58:
#line 319 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 59:
#line 320 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 60:
#line 323 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 61:
#line 324 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name", P_TOKEN("integer ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 62:
#line 327 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_word", P_TOKEN("lower_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 63:
#line 328 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_word", P_TOKEN("single_quoted ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 64:
#line 331 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_defined_word", P_TOKEN("dollar_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 65:
#line 334 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_system_word", P_TOKEN("dollar_dollar_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 66:
#line 337 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("number", P_TOKEN("integer ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 67:
#line 338 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("number", P_TOKEN("rational ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 68:
#line 339 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("number", P_TOKEN("real ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 69:
#line 342 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("file_name", P_TOKEN("single_quoted ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 70:
#line 345 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("null",NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;


/* Line 1267 of yacc.c.  */
#line 1987 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



