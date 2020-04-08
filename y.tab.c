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
     AMPERSAND = 258,
     AT_AT_SIGN_MINUS = 259,
     AT_AT_SIGN_PLUS = 260,
     AT_SIGN = 261,
     AT_SIGN_EQUALS = 262,
     AT_SIGN_MINUS = 263,
     AT_SIGN_PLUS = 264,
     CARET = 265,
     COLON = 266,
     COLON_EQUALS = 267,
     COMMA = 268,
     EQUALS = 269,
     EQUALS_GREATER = 270,
     EXCLAMATION = 271,
     EXCLAMATION_EQUALS = 272,
     EXCLAMATION_EXCLAMATION = 273,
     EXCLAMATION_GREATER = 274,
     LBRACE = 275,
     LBRKT = 276,
     LESS_EQUALS = 277,
     LESS_EQUALS_GREATER = 278,
     LESS_LESS = 279,
     LESS_TILDE_GREATER = 280,
     LPAREN = 281,
     MINUS_MINUS_GREATER = 282,
     PERIOD = 283,
     QUESTION = 284,
     QUESTION_QUESTION = 285,
     QUESTION_STAR = 286,
     RBRACE = 287,
     RBRKT = 288,
     RPAREN = 289,
     STAR = 290,
     TILDE = 291,
     TILDE_AMPERSAND = 292,
     TILDE_VLINE = 293,
     VLINE = 294,
     _DLR_cnf = 295,
     _DLR_fof = 296,
     _DLR_fot = 297,
     _DLR_ite = 298,
     _DLR_let = 299,
     _DLR_tff = 300,
     _DLR_thf = 301,
     _LIT_cnf = 302,
     _LIT_fof = 303,
     _LIT_include = 304,
     arrow = 305,
     decimal = 306,
     decimal_exponent = 307,
     decimal_fraction = 308,
     distinct_object = 309,
     dollar_dollar_word = 310,
     dollar_word = 311,
     dot_decimal = 312,
     exp_integer = 313,
     integer = 314,
     lower_word = 315,
     plus = 316,
     positive_decimal = 317,
     rational = 318,
     real = 319,
     signed_exp_integer = 320,
     signed_integer = 321,
     signed_rational = 322,
     signed_real = 323,
     single_quoted = 324,
     star = 325,
     unrecognized = 326,
     unsigned_exp_integer = 327,
     unsigned_integer = 328,
     unsigned_rational = 329,
     unsigned_real = 330,
     upper_word = 331,
     vline = 332
   };
#endif
/* Tokens.  */
#define AMPERSAND 258
#define AT_AT_SIGN_MINUS 259
#define AT_AT_SIGN_PLUS 260
#define AT_SIGN 261
#define AT_SIGN_EQUALS 262
#define AT_SIGN_MINUS 263
#define AT_SIGN_PLUS 264
#define CARET 265
#define COLON 266
#define COLON_EQUALS 267
#define COMMA 268
#define EQUALS 269
#define EQUALS_GREATER 270
#define EXCLAMATION 271
#define EXCLAMATION_EQUALS 272
#define EXCLAMATION_EXCLAMATION 273
#define EXCLAMATION_GREATER 274
#define LBRACE 275
#define LBRKT 276
#define LESS_EQUALS 277
#define LESS_EQUALS_GREATER 278
#define LESS_LESS 279
#define LESS_TILDE_GREATER 280
#define LPAREN 281
#define MINUS_MINUS_GREATER 282
#define PERIOD 283
#define QUESTION 284
#define QUESTION_QUESTION 285
#define QUESTION_STAR 286
#define RBRACE 287
#define RBRKT 288
#define RPAREN 289
#define STAR 290
#define TILDE 291
#define TILDE_AMPERSAND 292
#define TILDE_VLINE 293
#define VLINE 294
#define _DLR_cnf 295
#define _DLR_fof 296
#define _DLR_fot 297
#define _DLR_ite 298
#define _DLR_let 299
#define _DLR_tff 300
#define _DLR_thf 301
#define _LIT_cnf 302
#define _LIT_fof 303
#define _LIT_include 304
#define arrow 305
#define decimal 306
#define decimal_exponent 307
#define decimal_fraction 308
#define distinct_object 309
#define dollar_dollar_word 310
#define dollar_word 311
#define dot_decimal 312
#define exp_integer 313
#define integer 314
#define lower_word 315
#define plus 316
#define positive_decimal 317
#define rational 318
#define real 319
#define signed_exp_integer 320
#define signed_integer 321
#define signed_rational 322
#define signed_real 323
#define single_quoted 324
#define star 325
#define unrecognized 326
#define unsigned_exp_integer 327
#define unsigned_integer 328
#define unsigned_rational 329
#define unsigned_real 330
#define upper_word 331
#define vline 332




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

int main(int argc, const char* argv[])
{
  /* yydebug = 1; */
  yyparse();
  return 0;
}


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
#line 398 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 411 "y.tab.c"

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
#define YYLAST   2784

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  78
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  184
/* YYNRULES -- Number of rules.  */
#define YYNRULES  363
/* YYNRULES -- Number of states.  */
#define YYNSTATES  639

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   332

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    27,
      38,    42,    44,    46,    48,    50,    52,    54,    56,    58,
      60,    62,    64,    66,    68,    72,    74,    76,    78,    82,
      86,    90,    94,    98,   102,   104,   106,   108,   110,   112,
     114,   116,   118,   122,   125,   131,   133,   137,   141,   143,
     145,   148,   152,   154,   156,   158,   160,   162,   164,   166,
     168,   170,   174,   176,   180,   182,   187,   192,   197,   206,
     215,   217,   221,   223,   227,   229,   233,   237,   239,   243,
     245,   247,   251,   254,   258,   260,   264,   266,   268,   270,
     272,   274,   278,   282,   284,   286,   288,   290,   292,   294,
     296,   298,   302,   306,   310,   314,   318,   322,   326,   330,
     334,   336,   338,   340,   342,   344,   346,   348,   350,   352,
     354,   358,   360,   362,   366,   370,   374,   378,   380,   382,
     384,   386,   388,   390,   392,   394,   398,   400,   407,   409,
     413,   415,   417,   421,   423,   425,   428,   432,   434,   436,
     438,   440,   445,   447,   449,   454,   456,   458,   462,   464,
     469,   478,   487,   489,   493,   495,   499,   501,   505,   509,
     511,   513,   515,   519,   521,   523,   525,   527,   529,   531,
     533,   537,   540,   544,   546,   550,   554,   558,   560,   562,
     564,   566,   570,   577,   579,   583,   585,   589,   591,   593,
     598,   600,   602,   606,   608,   612,   616,   620,   624,   628,
     630,   634,   638,   642,   646,   648,   650,   652,   654,   656,
     658,   660,   664,   666,   668,   672,   676,   680,   684,   687,
     689,   693,   695,   697,   699,   701,   705,   712,   714,   718,
     720,   722,   724,   726,   728,   730,   732,   736,   738,   740,
     745,   747,   749,   751,   753,   758,   760,   765,   767,   771,
     773,   775,   777,   779,   781,   785,   789,   792,   796,   798,
     802,   804,   808,   810,   814,   816,   819,   821,   823,   825,
     827,   829,   831,   833,   835,   837,   839,   841,   843,   845,
     847,   849,   851,   853,   855,   857,   859,   861,   863,   865,
     867,   869,   871,   873,   875,   877,   879,   881,   883,   885,
     887,   889,   891,   893,   895,   897,   899,   901,   903,   905,
     907,   909,   911,   913,   915,   917,   919,   922,   924,   926,
     933,   938,   940,   942,   946,   948,   952,   954,   956,   958,
     960,   962,   964,   966,   971,   976,   981,   986,   991,   996,
     999,  1003,  1005,  1009,  1011,  1013,  1015,  1017,  1019,  1021,
    1023,  1025,  1027,  1029
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      79,     0,    -1,   261,    -1,    79,    80,    -1,    81,    -1,
     246,    -1,    82,    -1,    83,    -1,    48,    26,   255,    13,
      85,    13,   182,    84,    34,    28,    -1,    47,    26,   255,
      13,    85,    13,   212,    84,    34,    28,    -1,    13,   243,
     244,    -1,   261,    -1,    60,    -1,    87,    -1,   122,    -1,
     130,    -1,   131,    -1,    96,    -1,   101,    -1,    88,    -1,
     107,    -1,    89,    -1,    90,    -1,   126,    -1,    94,   222,
      94,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    39,
      94,    -1,    91,    39,    94,    -1,    94,     3,    94,    -1,
      92,     3,    94,    -1,    94,     6,    94,    -1,    93,     6,
      94,    -1,    96,    -1,   101,    -1,   107,    -1,    96,    -1,
     102,    -1,    97,    -1,   104,    -1,   242,    -1,    26,    87,
      34,    -1,    98,    94,    -1,   215,    21,    99,    33,    11,
      -1,   100,    -1,   100,    13,    99,    -1,   242,    11,   123,
      -1,   102,    -1,   103,    -1,   218,    95,    -1,   117,   234,
     117,    -1,   105,    -1,   106,    -1,   108,    -1,   109,    -1,
     235,    -1,   118,    -1,   239,    -1,   110,    -1,   111,    -1,
      26,   120,    34,    -1,   241,    -1,   117,   232,   117,    -1,
     237,    -1,   236,    26,   121,    34,    -1,   240,    26,   121,
      34,    -1,   238,    26,   121,    34,    -1,    43,    26,    87,
      13,    87,    13,    87,    34,    -1,    44,    26,   112,    13,
     114,    13,    86,    34,    -1,   122,    -1,    21,   113,    33,
      -1,   122,    -1,   122,    13,   113,    -1,   115,    -1,    21,
     116,    33,    -1,    87,   226,    87,    -1,   115,    -1,   115,
      13,   116,    -1,   104,    -1,   242,    -1,    26,    87,    34,
      -1,    21,    33,    -1,    21,   119,    33,    -1,    87,    -1,
      87,    13,   119,    -1,   222,    -1,   223,    -1,   233,    -1,
     218,    -1,   119,    -1,   231,    11,   123,    -1,    26,   122,
      34,    -1,   124,    -1,   127,    -1,   125,    -1,    96,    -1,
      93,    -1,   127,    -1,   128,    -1,   129,    -1,   124,    50,
     124,    -1,   124,    50,   127,    -1,   124,    35,   124,    -1,
     128,    35,   124,    -1,   124,    61,   124,    -1,   129,    61,
     124,    -1,   231,   220,   230,    -1,   118,   225,   118,    -1,
      26,   131,    34,    -1,   133,    -1,   168,    -1,   180,    -1,
     181,    -1,   141,    -1,   147,    -1,   134,    -1,   154,    -1,
     135,    -1,   136,    -1,   139,   222,   139,    -1,   137,    -1,
     138,    -1,   139,    39,   139,    -1,   137,    39,   139,    -1,
     139,     3,   139,    -1,   138,     3,   139,    -1,   141,    -1,
     147,    -1,   154,    -1,   141,    -1,   148,    -1,   143,    -1,
     150,    -1,   142,    -1,    26,   133,    34,    -1,   242,    -1,
     221,    21,   144,    33,    11,   139,    -1,   145,    -1,   145,
      13,   144,    -1,   146,    -1,   242,    -1,   242,    11,   174,
      -1,   148,    -1,   149,    -1,   224,   140,    -1,   165,   234,
     165,    -1,   151,    -1,   152,    -1,   155,    -1,   235,    -1,
     236,    26,   167,    34,    -1,   153,    -1,   239,    -1,   240,
      26,   167,    34,    -1,   156,    -1,   157,    -1,   165,   232,
     165,    -1,   237,    -1,   238,    26,   167,    34,    -1,    43,
      26,   133,    13,   164,    13,   164,    34,    -1,    44,    26,
     158,    13,   160,    13,   164,    34,    -1,   168,    -1,    21,
     159,    33,    -1,   168,    -1,   168,    13,   159,    -1,   161,
      -1,    21,   163,    33,    -1,   162,   226,   164,    -1,   151,
      -1,   166,    -1,   161,    -1,   161,    13,   163,    -1,   133,
      -1,   241,    -1,   166,    -1,   150,    -1,   241,    -1,   166,
      -1,   242,    -1,    26,   133,    34,    -1,    21,    33,    -1,
      21,   167,    33,    -1,   164,    -1,   164,    13,   167,    -1,
     231,    11,   169,    -1,    26,   168,    34,    -1,   174,    -1,
     170,    -1,   176,    -1,   171,    -1,    26,   170,    34,    -1,
      19,    21,   144,    33,    11,   172,    -1,   174,    -1,    26,
     176,    34,    -1,   174,    -1,    26,   177,    34,    -1,   227,
      -1,   229,    -1,   228,    26,   175,    34,    -1,   242,    -1,
     178,    -1,    26,   174,    34,    -1,   174,    -1,   174,    13,
     175,    -1,   173,    50,   174,    -1,   173,    35,   174,    -1,
     177,    35,   174,    -1,    21,   179,    33,    -1,   169,    -1,
     169,    13,   179,    -1,   231,   220,   230,    -1,   166,   225,
     166,    -1,    26,   181,    34,    -1,   183,    -1,   209,    -1,
     184,    -1,   189,    -1,   192,    -1,   185,    -1,   186,    -1,
     191,   222,   191,    -1,   187,    -1,   188,    -1,   191,    39,
     191,    -1,   187,    39,   191,    -1,   191,     3,   191,    -1,
     188,     3,   191,    -1,   224,   191,    -1,   190,    -1,   207,
     234,   207,    -1,   192,    -1,   189,    -1,   193,    -1,   195,
      -1,    26,   183,    34,    -1,   221,    21,   194,    33,    11,
     191,    -1,   242,    -1,   242,    13,   194,    -1,   196,    -1,
     197,    -1,   200,    -1,   201,    -1,   198,    -1,   199,    -1,
     204,    -1,   207,   232,   207,    -1,   205,    -1,   235,    -1,
     236,    26,   206,    34,    -1,   241,    -1,   203,    -1,   204,
      -1,   239,    -1,   240,    26,   206,    34,    -1,   237,    -1,
     238,    26,   206,    34,    -1,   207,    -1,   207,    13,   206,
      -1,   208,    -1,   242,    -1,   201,    -1,   202,    -1,   205,
      -1,   210,   225,   210,    -1,    26,   209,    34,    -1,    20,
      32,    -1,    20,   211,    32,    -1,   183,    -1,   183,    13,
     211,    -1,   213,    -1,    26,   213,    34,    -1,   214,    -1,
     213,    39,   214,    -1,   195,    -1,    36,   195,    -1,   190,
      -1,   221,    -1,   217,    -1,   216,    -1,    19,    -1,    31,
      -1,    10,    -1,     9,    -1,     8,    -1,   224,    -1,   219,
      -1,    18,    -1,    30,    -1,     5,    -1,     4,    -1,     7,
      -1,    24,    -1,    16,    -1,    29,    -1,    23,    -1,    15,
      -1,    22,    -1,    25,    -1,    38,    -1,    37,    -1,    39,
      -1,     3,    -1,    36,    -1,    27,    -1,    12,    -1,   228,
      -1,   256,    -1,   257,    -1,   231,    -1,   239,    -1,   235,
      -1,   237,    -1,   233,    -1,    14,    -1,    17,    -1,   236,
      -1,   256,    -1,   238,    -1,   258,    -1,   240,    -1,   257,
      -1,   259,    -1,    54,    -1,    76,    -1,   249,    -1,    13,
     245,    -1,   261,    -1,   253,    -1,    49,    26,   260,   247,
      34,    28,    -1,    13,    21,   248,    33,    -1,   261,    -1,
     255,    -1,   255,    13,   248,    -1,   250,    -1,   250,    11,
     249,    -1,   253,    -1,   256,    -1,   251,    -1,   242,    -1,
     259,    -1,    54,    -1,   252,    -1,   256,    26,   254,    34,
      -1,    46,    26,    86,    34,    -1,    45,    26,   132,    34,
      -1,    41,    26,   182,    34,    -1,    40,    26,   212,    34,
      -1,    42,    26,   207,    34,    -1,    21,    33,    -1,    21,
     254,    33,    -1,   249,    -1,   249,    13,   254,    -1,   256,
      -1,    59,    -1,    60,    -1,    69,    -1,    56,    -1,    55,
      -1,    59,    -1,    63,    -1,    64,    -1,    69,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   227,   227,   228,   231,   232,   235,   236,   239,   242,
     245,   246,   249,   252,   253,   254,   255,   258,   259,   260,
     261,   264,   265,   266,   269,   272,   273,   274,   277,   278,
     281,   282,   285,   286,   289,   290,   291,   294,   295,   298,
     299,   300,   301,   304,   307,   310,   311,   314,   317,   318,
     321,   324,   327,   328,   329,   330,   333,   334,   337,   338,
     339,   340,   341,   344,   347,   350,   351,   352,   355,   358,
     361,   362,   365,   366,   369,   370,   373,   376,   377,   380,
     381,   382,   385,   386,   389,   390,   393,   394,   395,   396,
     399,   402,   403,   406,   407,   408,   411,   414,   417,   418,
     419,   422,   423,   426,   427,   430,   431,   434,   437,   438,
     441,   442,   443,   444,   447,   448,   449,   450,   453,   454,
     457,   460,   461,   464,   465,   468,   469,   472,   473,   474,
     477,   478,   481,   482,   483,   484,   487,   490,   493,   494,
     497,   498,   501,   504,   505,   508,   511,   514,   515,   516,
     519,   520,   523,   526,   527,   528,   529,   532,   535,   536,
     539,   542,   545,   546,   549,   550,   553,   554,   557,   560,
     561,   564,   565,   568,   569,   570,   573,   574,   575,   576,
     577,   580,   581,   584,   585,   588,   589,   592,   593,   596,
     597,   598,   601,   604,   605,   608,   609,   612,   613,   614,
     615,   616,   617,   620,   621,   624,   627,   628,   631,   634,
     635,   638,   641,   642,   645,   646,   649,   650,   651,   654,
     655,   658,   661,   662,   665,   666,   669,   670,   673,   674,
     677,   680,   681,   684,   685,   686,   689,   692,   693,   696,
     697,   698,   701,   704,   705,   708,   711,   714,   717,   718,
     721,   722,   725,   728,   729,   732,   733,   736,   737,   740,
     741,   744,   745,   746,   749,   750,   753,   754,   757,   758,
     761,   762,   765,   766,   769,   770,   771,   774,   775,   776,
     779,   780,   783,   784,   785,   788,   789,   792,   793,   794,
     795,   796,   799,   802,   803,   806,   807,   808,   809,   810,
     811,   814,   815,   818,   821,   824,   827,   830,   833,   836,
     837,   840,   841,   844,   847,   850,   853,   856,   859,   862,
     865,   868,   871,   872,   875,   878,   881,   882,   885,   888,
     891,   892,   895,   896,   899,   900,   901,   904,   905,   906,
     907,   908,   909,   912,   915,   916,   917,   918,   919,   922,
     923,   926,   927,   930,   931,   934,   935,   938,   941,   944,
     945,   946,   949,   952
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AMPERSAND", "AT_AT_SIGN_MINUS",
  "AT_AT_SIGN_PLUS", "AT_SIGN", "AT_SIGN_EQUALS", "AT_SIGN_MINUS",
  "AT_SIGN_PLUS", "CARET", "COLON", "COLON_EQUALS", "COMMA", "EQUALS",
  "EQUALS_GREATER", "EXCLAMATION", "EXCLAMATION_EQUALS",
  "EXCLAMATION_EXCLAMATION", "EXCLAMATION_GREATER", "LBRACE", "LBRKT",
  "LESS_EQUALS", "LESS_EQUALS_GREATER", "LESS_LESS", "LESS_TILDE_GREATER",
  "LPAREN", "MINUS_MINUS_GREATER", "PERIOD", "QUESTION",
  "QUESTION_QUESTION", "QUESTION_STAR", "RBRACE", "RBRKT", "RPAREN",
  "STAR", "TILDE", "TILDE_AMPERSAND", "TILDE_VLINE", "VLINE", "_DLR_cnf",
  "_DLR_fof", "_DLR_fot", "_DLR_ite", "_DLR_let", "_DLR_tff", "_DLR_thf",
  "_LIT_cnf", "_LIT_fof", "_LIT_include", "arrow", "decimal",
  "decimal_exponent", "decimal_fraction", "distinct_object",
  "dollar_dollar_word", "dollar_word", "dot_decimal", "exp_integer",
  "integer", "lower_word", "plus", "positive_decimal", "rational", "real",
  "signed_exp_integer", "signed_integer", "signed_rational", "signed_real",
  "single_quoted", "star", "unrecognized", "unsigned_exp_integer",
  "unsigned_integer", "unsigned_rational", "unsigned_real", "upper_word",
  "vline", "$accept", "TPTP_file", "TPTP_input", "annotated_formula",
  "fof_annotated", "cnf_annotated", "annotations", "formula_role",
  "thf_formula", "thf_logic_formula", "thf_binary_formula",
  "thf_binary_nonassoc", "thf_binary_assoc", "thf_or_formula",
  "thf_and_formula", "thf_apply_formula", "thf_unit_formula",
  "thf_preunit_formula", "thf_unitary_formula", "thf_quantified_formula",
  "thf_quantification", "thf_variable_list", "thf_typed_variable",
  "thf_unary_formula", "thf_prefix_unary", "thf_infix_unary",
  "thf_atomic_formula", "thf_plain_atomic", "thf_defined_atomic",
  "thf_defined_infix", "thf_system_atomic", "thf_fof_function",
  "thf_conditional", "thf_let", "thf_let_types", "thf_atom_typing_list",
  "thf_let_defns", "thf_let_defn", "thf_let_defn_list", "thf_unitary_term",
  "thf_tuple", "thf_formula_list", "thf_conn_term", "thf_arguments",
  "thf_atom_typing", "thf_top_level_type", "thf_unitary_type",
  "thf_apply_type", "thf_binary_type", "thf_mapping_type",
  "thf_xprod_type", "thf_union_type", "thf_subtype", "thf_sequent",
  "tff_formula", "tff_logic_formula", "tff_binary_formula",
  "tff_binary_nonassoc", "tff_binary_assoc", "tff_or_formula",
  "tff_and_formula", "tff_unit_formula", "tff_preunit_formula",
  "tff_unitary_formula", "tfx_unitary_formula", "tff_quantified_formula",
  "tff_variable_list", "tff_variable", "tff_typed_variable",
  "tff_unary_formula", "tff_prefix_unary", "tff_infix_unary",
  "tff_atomic_formula", "tff_plain_atomic", "tff_defined_atomic",
  "tff_defined_plain", "tff_defined_infix", "tff_system_atomic",
  "tfx_conditional", "tfx_let", "tfx_let_types", "tff_atom_typing_list",
  "tfx_let_defns", "tfx_let_defn", "tfx_let_LHS", "tfx_let_defn_list",
  "tff_term", "tff_unitary_term", "tfx_tuple", "tff_arguments",
  "tff_atom_typing", "tff_top_level_type", "tff_non_atomic_type",
  "tf1_quantified_type", "tff_monotype", "tff_unitary_type",
  "tff_atomic_type", "tff_type_arguments", "tff_mapping_type",
  "tff_xprod_type", "tfx_tuple_type", "tff_type_list", "tff_subtype",
  "tfx_sequent", "fof_formula", "fof_logic_formula", "fof_binary_formula",
  "fof_binary_nonassoc", "fof_binary_assoc", "fof_or_formula",
  "fof_and_formula", "fof_unary_formula", "fof_infix_unary",
  "fof_unit_formula", "fof_unitary_formula", "fof_quantified_formula",
  "fof_variable_list", "fof_atomic_formula", "fof_plain_atomic_formula",
  "fof_defined_atomic_formula", "fof_defined_plain_formula",
  "fof_defined_infix_formula", "fof_system_atomic_formula",
  "fof_plain_term", "fof_defined_term", "fof_defined_atomic_term",
  "fof_defined_plain_term", "fof_system_term", "fof_arguments", "fof_term",
  "fof_function_term", "fof_sequent", "fof_formula_tuple",
  "fof_formula_tuple_list", "cnf_formula", "disjunction", "literal",
  "thf_quantifier", "th1_quantifier", "th0_quantifier",
  "thf_unary_connective", "th1_unary_connective", "subtype_sign",
  "fof_quantifier", "nonassoc_connective", "assoc_connective",
  "unary_connective", "gentzen_arrow", "assignment", "type_constant",
  "type_functor", "defined_type", "atom", "untyped_atom",
  "defined_infix_pred", "infix_equality", "infix_inequality", "constant",
  "functor", "system_constant", "system_functor", "defined_constant",
  "defined_functor", "defined_term", "variable", "source", "optional_info",
  "useful_info", "include", "formula_selection", "name_list",
  "general_term", "general_data", "general_function", "formula_data",
  "general_list", "general_terms", "name", "atomic_word",
  "atomic_defined_word", "atomic_system_word", "number", "file_name",
  "null", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,    78,    79,    79,    80,    80,    81,    81,    82,    83,
      84,    84,    85,    86,    86,    86,    86,    87,    87,    87,
      87,    88,    88,    88,    89,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    98,    99,    99,   100,   101,   101,
     102,   103,   104,   104,   104,   104,   105,   105,   106,   106,
     106,   106,   106,   107,   108,   109,   109,   109,   110,   111,
     112,   112,   113,   113,   114,   114,   115,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   120,   120,   120,   120,
     121,   122,   122,   123,   123,   123,   124,   125,   126,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   131,   131,
     132,   132,   132,   132,   133,   133,   133,   133,   134,   134,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     140,   140,   141,   141,   141,   141,   142,   143,   144,   144,
     145,   145,   146,   147,   147,   148,   149,   150,   150,   150,
     151,   151,   152,   153,   153,   153,   153,   154,   155,   155,
     156,   157,   158,   158,   159,   159,   160,   160,   161,   162,
     162,   163,   163,   164,   164,   164,   165,   165,   165,   165,
     165,   166,   166,   167,   167,   168,   168,   169,   169,   170,
     170,   170,   171,   172,   172,   173,   173,   174,   174,   174,
     174,   174,   174,   175,   175,   176,   177,   177,   178,   179,
     179,   180,   181,   181,   182,   182,   183,   183,   183,   184,
     184,   185,   186,   186,   187,   187,   188,   188,   189,   189,
     190,   191,   191,   192,   192,   192,   193,   194,   194,   195,
     195,   195,   196,   197,   197,   198,   199,   200,   201,   201,
     202,   202,   203,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   208,   208,   209,   209,   210,   210,   211,   211,
     212,   212,   213,   213,   214,   214,   214,   215,   215,   215,
     216,   216,   217,   217,   217,   218,   218,   219,   219,   219,
     219,   219,   220,   221,   221,   222,   222,   222,   222,   222,
     222,   223,   223,   224,   225,   226,   227,   228,   229,   230,
     230,   231,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   241,   242,   243,   244,   244,   245,   246,
     247,   247,   248,   248,   249,   249,   249,   250,   250,   250,
     250,   250,   250,   251,   252,   252,   252,   252,   252,   253,
     253,   254,   254,   255,   255,   256,   256,   257,   258,   259,
     259,   259,   260,   261
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,    10,    10,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     5,     1,     3,     3,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     4,     4,     4,     8,     8,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     1,
       1,     3,     2,     3,     1,     3,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     6,     1,     3,
       1,     1,     3,     1,     1,     2,     3,     1,     1,     1,
       1,     4,     1,     1,     4,     1,     1,     3,     1,     4,
       8,     8,     1,     3,     1,     3,     1,     3,     3,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     3,     1,     3,     3,     3,     1,     1,     1,
       1,     3,     6,     1,     3,     1,     3,     1,     1,     4,
       1,     1,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     3,     3,     3,     3,     2,     1,
       3,     1,     1,     1,     1,     3,     6,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     1,     4,
       1,     1,     1,     1,     4,     1,     4,     1,     3,     1,
       1,     1,     1,     1,     3,     3,     2,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     6,
       4,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     2,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     363,     0,     2,     1,     0,     0,     0,     3,     4,     6,
       7,     5,     0,     0,     0,   354,   355,   356,     0,   353,
       0,   362,   363,     0,     0,     0,     0,   331,    12,     0,
       0,     0,     0,     0,     0,     0,   332,   329,     0,     0,
     323,   358,   357,   359,   360,   361,   324,   276,   274,   239,
     240,   243,   244,   241,   242,   262,   251,   245,   247,     0,
     259,   363,   270,   272,   248,   316,   255,   318,   253,   320,
     250,   260,   317,   321,   319,   322,   293,     0,     0,   294,
     303,   363,   214,   216,   219,   220,   222,   223,   232,   229,
       0,   231,   233,   234,   215,     0,     0,     0,   330,     0,
       0,   275,     0,   314,   315,     0,   313,     0,     0,     0,
      11,     0,     0,     0,     0,     0,   266,   268,     0,     0,
       0,     0,     0,     0,     0,   296,   297,   295,   298,   300,
     299,     0,     0,   304,     0,     0,   232,   228,   231,   333,
     271,   261,   252,   263,   246,   230,     0,     0,     0,     0,
       0,     0,   341,   339,   363,   325,   334,   338,   342,   336,
     337,   340,     0,   273,     0,   257,     0,     0,     0,   267,
     235,   265,     0,   225,   227,   226,   224,   221,   264,     0,
     237,   349,   351,     0,     0,     0,     0,     0,     0,     0,
      10,   327,     0,     0,     9,   249,     0,   256,   254,   269,
       8,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   116,   118,   119,   121,   122,     0,
     127,   134,   132,   128,   143,   144,   133,   147,   148,   152,
     129,   149,   155,   156,     0,   178,   111,   112,   113,     0,
       0,     0,   150,   316,   158,   318,   153,   320,   177,   136,
     290,   289,   291,   284,   283,   282,   287,   280,     0,     0,
     288,   281,     0,     0,     0,    13,    19,    21,    22,    25,
      26,    27,     0,    34,    39,     0,    35,    48,    49,    40,
      52,    53,    36,    54,    55,    59,    60,     0,    57,    14,
       0,    23,    98,    99,   100,    15,    16,     0,   279,   278,
       0,   286,   277,   285,     0,    56,   316,    64,   318,    58,
     320,    62,    41,   326,   328,   335,     0,   258,     0,   238,
     352,   347,   346,   348,     0,   181,   173,   183,   175,     0,
     150,   158,   174,     0,     0,     0,     0,     0,     0,   345,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,   130,   131,   133,   136,     0,   292,     0,     0,     0,
       0,     0,    82,    84,    57,     0,    56,    64,   302,   301,
       0,     0,     0,     0,    89,    86,    87,     0,    88,     0,
       0,   344,     0,     0,     0,     0,     0,     0,     0,    43,
      34,    35,    36,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,    37,    38,    40,    41,     0,     0,
       0,     0,     0,   343,   236,   178,     0,   182,   135,   186,
     213,     0,     0,     0,     0,   162,   311,   316,   312,   318,
     124,   127,   128,   129,   126,   125,   123,   120,     0,   176,
     157,   179,   146,   212,     0,   138,   140,   141,     0,     0,
       0,     0,   185,   188,   190,     0,   187,   189,   201,   197,
     306,   198,   200,   307,   308,   211,   309,   310,   320,     0,
       0,     0,     0,    83,    42,    61,    92,   109,     0,     0,
       0,     0,    70,    29,    31,    33,    30,    32,    28,    24,
       0,    79,    63,    80,    51,   108,    96,   103,   101,   102,
     105,   104,   106,     0,    45,     0,     0,    97,     0,    96,
      91,    93,    95,    94,   107,    90,     0,     0,     0,   184,
       0,     0,   164,     0,     0,     0,     0,     0,   135,     0,
     209,     0,     0,     0,   195,     0,     0,     0,   151,   159,
     154,    85,     0,     0,    72,     0,     0,     0,     0,     0,
      42,    65,    67,    66,     0,   163,     0,     0,   169,     0,
     166,     0,   170,   180,     0,   139,     0,   142,     0,     0,
     208,   191,     0,   202,   196,     0,   205,   203,     0,     0,
      71,     0,     0,     0,     0,    74,    81,    44,    46,    47,
       0,   165,   147,   171,     0,   175,     0,   305,     0,   137,
       0,     0,   210,   206,   207,     0,   199,     0,    73,    84,
      77,     0,     0,     0,     0,     0,   167,     0,   168,     0,
     204,     0,     0,    75,    76,     0,   160,   172,   161,     0,
     192,   193,    68,    78,    69,     0,     0,     0,   194
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,     8,     9,    10,   109,    29,   264,   363,
     266,   267,   268,   269,   270,   271,   272,   403,   273,   274,
     275,   503,   504,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   481,   543,   584,   610,   611,   287,
     364,   515,   371,   516,   289,   510,   290,   512,   291,   292,
     293,   294,   295,   296,   212,   326,   214,   215,   216,   217,
     218,   219,   350,   220,   221,   222,   444,   445,   446,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     424,   521,   559,   593,   561,   594,   327,   234,   415,   329,
     334,   530,   453,   454,   630,   455,   456,   578,   457,   535,
     458,   531,   237,   238,    81,    82,    83,    84,    85,    86,
      87,   136,    89,    90,   138,    92,   179,    93,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,   164,    59,
      60,    94,    95,   118,    61,    62,    63,   297,   298,   299,
     300,   301,   357,   302,   375,   376,   303,   134,   612,   459,
     460,   461,   465,   336,   105,   106,   107,   366,   306,   367,
     308,   309,   310,   311,   312,   154,   190,   313,    11,    26,
      35,   182,   156,   157,   158,   159,   183,    36,    72,    73,
      74,    75,    22,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -490
static const yytype_int16 yypact[] =
{
    -490,    62,  -490,  -490,    29,    41,    91,  -490,  -490,  -490,
    -490,  -490,   242,   242,   121,  -490,  -490,  -490,   192,  -490,
     194,  -490,   202,   163,   163,   218,   211,  -490,  -490,   262,
     281,   242,   277,   908,   606,   284,   318,  -490,  1446,  1108,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,    57,  -490,  -490,    78,    84,   118,
    -490,   341,   330,  -490,  -490,   349,  -490,   356,  -490,   361,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  1015,   606,  -490,
    -490,   341,  -490,  -490,  -490,  -490,   366,   407,   170,  -490,
     800,   204,  -490,  -490,  -490,   390,   374,   670,  -490,   242,
      94,  -490,   405,  -490,  -490,  1108,  -490,  1108,  1675,   399,
    -490,  1446,  1108,  1108,  1108,   670,  -490,   411,   413,   415,
     425,   440,   670,   670,   670,  -490,  -490,  -490,  -490,  -490,
    -490,   670,   670,  -490,   461,   408,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,   714,   464,   471,   477,
     479,   483,  -490,  -490,   501,  -490,   505,  -490,  -490,  -490,
     496,  -490,   504,  -490,   512,   525,   514,   519,   670,  -490,
    -490,  -490,   522,  -490,  -490,  -490,  -490,  -490,  -490,   529,
     546,  -490,   560,   542,   908,   606,  1108,  1591,  1284,   556,
    -490,  -490,  1675,  1675,  -490,  -490,  1108,  -490,  -490,  -490,
    -490,   572,   408,  1675,  -490,   550,   555,   557,  1503,  1591,
     570,   573,   564,  -490,  -490,  -490,  -490,   561,   598,   976,
     344,  -490,  -490,   350,  -490,  -490,   154,  -490,  -490,  -490,
     462,  -490,  -490,  -490,   118,   390,  -490,  -490,  -490,   581,
    1214,   145,   259,   577,   269,   578,  -490,   579,  -490,   210,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,   788,  2389,
    -490,  -490,   582,   586,   590,  -490,  -490,  -490,  -490,   576,
     603,   610,  1079,   228,  -490,  2582,    51,  -490,  -490,   387,
    -490,  -490,   273,  -490,  -490,  -490,  -490,   118,   390,  -490,
     264,  -490,  -490,   585,   569,  -490,  -490,   604,  -490,  -490,
    2645,  -490,  -490,  -490,   289,   259,   602,   269,   605,  -490,
     607,  -490,   392,  -490,  -490,  -490,   600,  -490,   670,  -490,
    -490,  -490,  -490,  -490,  1788,  -490,  -490,   623,   465,   608,
    -490,  -490,   475,   614,   615,   616,   627,  1788,   243,  -490,
    1788,  1788,  1788,  1788,  1788,  1405,  1405,   619,   408,  1788,
    -490,  -490,  -490,  -490,  -490,   457,  -490,   431,  1788,  1788,
    1788,  2489,  -490,   638,  -490,   620,  -490,  -490,  -490,  -490,
     618,   625,   633,   634,  2645,  -490,  -490,   660,  -490,  2582,
     526,  -490,  2582,  2582,  2582,  2582,  2582,  2582,  2582,  -490,
    -490,  -490,  -490,  1539,  1539,   651,   966,   966,   966,   966,
     966,   408,  2489,  -490,  -490,  -490,  -490,  -490,  2582,   431,
    2582,  2582,  2582,  -490,  -490,  -490,  1788,  -490,   484,  -490,
    -490,   661,   368,   368,   663,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  1788,  -490,
    -490,  -490,  -490,  -490,   640,   665,  -490,   668,   646,   662,
     457,   457,  -490,  -490,  -490,   631,   639,  -490,  -490,  -490,
     658,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,   654,
     656,   664,  2582,  -490,   485,  -490,  -490,  -490,   684,   451,
     451,   688,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    2489,  -490,  -490,  -490,  -490,  -490,  -490,  -490,   655,  -490,
    -490,  -490,  -490,   674,   695,   698,   676,   610,   707,   708,
    -490,   655,  -490,  -490,  -490,  -490,   681,   687,   689,  -490,
    1788,   694,   709,   166,   697,   721,   408,   467,  -490,   408,
     723,   704,   710,    22,   711,   314,   467,   467,  -490,  -490,
    -490,  -490,  2582,   705,   729,  2708,   715,   732,   408,  2582,
    -490,  -490,  -490,  -490,   737,  -490,   368,  1503,  -490,   738,
    -490,   740,  -490,  -490,  1788,  -490,   467,  -490,   720,   457,
    -490,  -490,   467,  -490,  -490,   467,  -490,   744,   724,   748,
    -490,   451,   788,   740,   749,  -490,  -490,  -490,  -490,  -490,
    1788,  -490,   751,   756,   742,   386,  1788,  -490,  1788,  -490,
     711,   759,  -490,  -490,  -490,   467,  -490,  2582,  -490,   495,
     758,   746,  2582,  1284,   747,   401,  -490,   750,  -490,   516,
    -490,   752,  2582,  -490,  -490,   753,  -490,  -490,  -490,   518,
    -490,  -490,  -490,  -490,  -490,   518,   760,   745,  -490
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -490,  -490,  -490,  -490,  -490,  -490,   701,   761,   186,  -186,
    -490,  -490,  -490,  -490,  -490,  -394,  -136,  -490,  -234,  -490,
    -490,   252,  -490,  -129,  -272,  -490,    58,  -490,  -490,   -64,
    -490,  -490,  -490,  -490,  -490,   220,  -490,   257,   183,   137,
    -182,  -243,  -490,   123,  -236,   261,  -178,  -490,  -490,  -343,
    -490,  -490,  -490,   549,  -490,  -167,  -490,  -490,  -490,  -490,
    -490,  -331,  -490,  -222,  -490,  -490,  -162,  -490,  -490,  -296,
     571,  -490,  -204,  -489,  -490,  -490,  -291,  -490,  -490,  -490,
    -490,   256,  -490,   290,  -490,   201,  -308,   223,  -150,  -280,
    -180,   472,   375,  -490,  -490,  -443,  -125,   224,   199,  -490,
    -490,   265,  -490,   621,   648,   -39,  -490,  -490,  -490,  -490,
    -490,   231,    92,   -41,   250,  -490,   643,   -17,  -490,  -490,
    -490,  -490,  -490,   267,  -490,  -490,   355,   359,   -53,   248,
    -490,   757,   702,   672,   657,   808,   743,  -490,  -490,  -490,
    -230,  -490,   545,  1926,   -58,  -490,  2031,  -202,   292,  -490,
    -490,  -490,   446,  -184,  -199,  -216,  -194,   532,   580,  1028,
    1076,  1365,  1653,  1758,    -8,  -490,  -490,  -490,  -490,  -490,
     762,   -84,  -490,  -490,  -490,   669,   -56,   567,   -12,  -338,
    -490,   222,  -490,     5
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -313
static const yytype_int16 yytable[] =
{
      19,    19,   265,   241,   304,     2,   288,   236,   533,   430,
     434,   435,   436,   437,   507,   365,    48,   464,   351,    19,
     213,    48,   101,   372,   155,    71,    71,    27,   405,   374,
      71,    71,   132,   347,   558,   345,   353,   235,   117,   119,
     346,   390,   333,   378,   432,   432,   432,   432,   432,   433,
     433,   433,   433,   433,   499,    12,   137,   572,   328,   235,
     166,   167,     3,   -18,   -18,   513,   404,    13,   592,    71,
      71,  -261,   536,   370,  -261,   377,   119,   288,   469,   470,
     471,   173,   174,   175,   -18,   -18,   395,    19,   393,    71,
     176,   177,  -252,   394,    48,  -252,   160,    71,  -263,    71,
     153,  -263,   405,    71,    71,    71,    71,    71,   315,     4,
       5,     6,   464,   464,    71,    71,    71,    14,   431,   431,
     431,   431,   431,    71,    71,    47,   558,   180,   140,   117,
      47,   374,   103,   111,   160,   104,   519,   316,   153,   389,
     404,   439,   439,   317,   482,   378,   391,   320,   390,   390,
     390,   390,   390,   390,   390,   507,   355,   333,   425,   191,
      71,   344,   496,   496,   496,   496,   496,    48,  -176,   356,
     421,  -176,   374,   466,   509,   370,    71,    71,    71,   249,
     160,   160,   448,  -217,   153,   153,   378,   557,    71,   464,
      21,   160,   637,   478,   180,   153,   377,   443,   464,   464,
     249,   249,  -217,    47,  -217,    23,   513,    24,   328,   328,
     328,   392,   554,   495,   388,    25,   506,  -218,   497,   498,
     500,   501,   502,    28,  -179,   466,    16,  -179,   464,   541,
     511,   464,   354,   599,   464,    17,  -218,   464,  -218,    31,
     -17,   -17,   522,   544,   372,    32,   483,   484,   485,   486,
     487,   488,   489,   391,   391,   391,   391,   391,   391,   391,
     374,   -17,   -17,   -96,   422,    88,   328,   464,   432,   423,
    -311,   524,   508,   433,   378,    33,    47,   414,   -96,   391,
    -312,   464,   614,  -311,    91,   -20,   -20,   102,   617,   -96,
     618,   464,   407,  -312,    34,   377,   377,   464,    41,   396,
     408,    15,    16,    16,   546,    37,   -20,   -20,    88,    88,
      71,    17,    17,   356,   397,   509,   249,    98,   392,   392,
     392,   392,   392,   392,   392,   398,   534,    91,    91,   249,
     161,    99,   249,   249,   249,   249,   249,   441,   441,   365,
     447,   249,   431,   463,   392,   544,    88,   462,   574,   575,
     249,   249,   249,   144,   108,   145,   579,  -114,   406,   583,
     165,   165,   165,  -115,   565,    91,   407,   568,   161,   111,
     328,   511,   141,   562,   141,   112,   522,  -114,  -114,   141,
     141,   141,   113,  -115,  -115,   493,   493,   114,   407,   407,
     407,   407,   407,   505,   423,   135,   609,   377,  -170,    88,
    -178,   -79,   567,  -178,   -79,   122,   -80,   595,   249,   -80,
     123,   576,   577,   508,   161,   161,    88,   133,    91,   103,
     391,   621,   208,    41,   168,   161,   624,   265,    16,   304,
     249,   288,   406,   162,   207,    91,   583,    17,   463,   463,
     328,   600,   462,   462,   165,   169,   328,   603,   328,   170,
     604,   491,   491,   141,   406,   406,   406,   406,   406,   171,
     142,    16,   142,   141,   143,   562,   143,   142,   142,   142,
      17,   143,   143,   143,   172,  -117,   449,   480,   450,  -178,
     577,    77,  -178,   451,    46,   392,    41,    42,   450,  -177,
     184,    16,  -177,   566,   631,  -117,  -117,   185,  -180,   -81,
      17,  -180,   -81,   186,   534,   187,    41,   597,   472,   188,
     534,    16,   249,    42,   189,   463,   192,    16,   447,   462,
      17,   447,   193,    42,   463,   463,    17,    16,   462,   462,
     492,   494,   194,    46,   517,   518,    17,   450,   196,   450,
     505,   142,   629,    46,   635,   143,   195,   479,   197,   249,
     200,   142,   480,   198,   463,   143,   249,   463,   462,   202,
     463,   462,   201,   463,   462,    64,    64,   462,   440,   442,
      64,    64,    42,   203,    42,   204,    16,   146,    16,    18,
      20,    41,   249,   318,   321,    17,    16,    17,   249,   322,
     249,   323,    46,   463,    46,    17,   337,   462,   339,   338,
     340,   341,   348,   358,   359,   360,   383,   463,   379,    64,
      64,   462,   380,    65,    65,   382,   384,   463,    65,    65,
     399,   462,    76,   463,   381,   401,    77,   462,   410,    64,
     400,   411,    78,   412,   413,    79,   416,    64,   355,    64,
     208,   417,    80,    64,    64,    64,    64,    64,   418,   419,
     420,   472,   474,   473,    64,    64,    64,    65,    65,   475,
      40,    41,    42,    64,    64,    43,    16,   476,   477,    44,
      45,   408,   258,   525,   520,    17,   523,    65,   526,   527,
     528,   536,    46,   529,   537,    65,    76,    65,   538,  -195,
     539,    65,    65,    65,    65,    65,   115,   542,   540,    79,
      64,   545,    65,    65,    65,   397,    80,   547,   548,   549,
     550,    65,    65,   386,   -34,   551,    64,    64,    64,   242,
     305,   552,   556,   553,    40,    41,    42,   555,    64,    43,
      16,   563,   564,    44,    45,   146,   569,   570,   580,    17,
     330,   242,   581,   587,   571,   573,    46,   181,    65,   586,
     590,   596,   597,   601,   147,   148,   149,   605,   606,   150,
     151,   607,   613,  -169,    65,    65,    65,   243,   152,   615,
     619,   622,   330,    43,    16,   616,    65,    44,    45,   623,
     572,   626,   121,    17,   628,    30,   632,   634,   243,   243,
      46,   305,   250,   251,   638,   252,   253,   254,   255,   625,
     588,   608,   585,   124,    76,   633,   256,   257,   373,   258,
     589,   352,   591,   560,   361,   125,   627,    79,   260,   261,
     243,   362,   126,   127,    80,   128,   532,   452,   636,   620,
     335,   262,   263,   206,   602,   120,   178,   129,   130,   131,
     199,   205,    40,    41,    42,   319,   100,    43,    16,   409,
      64,    44,    45,   598,   163,   514,   330,    17,   314,     0,
       0,   139,     0,     0,    46,     0,     0,     0,     0,   330,
     426,     0,   330,   330,   330,   330,   330,   330,   330,     0,
       0,   330,     0,     0,     0,     0,     0,     0,     0,   426,
     330,   330,   330,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,     0,
       0,     0,   426,     0,     0,     0,     0,   243,   427,     0,
     243,   243,   243,   243,   243,   243,   243,     0,     0,   243,
       0,     0,     0,     0,    38,     0,     0,   427,   243,   243,
     243,   426,     0,     0,    39,     0,     0,     0,   330,     0,
       0,     0,     0,     0,   426,   426,     0,     0,     0,     0,
     427,     0,    40,    41,    42,     0,     0,    43,    16,     0,
     330,    44,    45,     0,   253,   254,   255,    17,     0,   342,
       0,     0,    76,     0,    46,   257,     0,   258,     0,   427,
       0,   125,   402,     0,     0,    79,   243,   261,   126,   127,
       0,   128,   427,   427,     0,     0,     0,     0,     0,   262,
     263,   426,   426,   129,   130,   343,     0,     0,   243,     0,
      40,    41,    42,     0,     0,    43,    16,     0,     0,    44,
      45,    76,     0,     0,     0,    17,     0,     0,     0,     0,
       0,   115,    46,     0,    79,     0,     0,   116,     0,     0,
       0,    80,   330,     0,     0,   330,     0,     0,     0,   427,
     427,    66,    66,     0,     0,     0,    66,    66,     0,    40,
      41,    42,     0,     0,    43,    16,     0,     0,    44,    45,
       0,     0,   385,     0,    17,   386,     0,     0,   426,   330,
       0,    46,     0,     0,   125,     0,   330,     0,     0,     0,
     243,   126,   127,   243,   128,    66,    66,     0,     0,    67,
      67,     0,     0,   426,    67,    67,   129,   130,   387,     0,
       0,     0,   330,     0,     0,    66,     0,     0,   330,     0,
     330,     0,     0,    66,     0,    66,   427,   243,     0,    66,
      66,    66,    66,    66,   243,   305,     0,   330,     0,     0,
      66,    66,    66,    67,    67,     0,     0,     0,     0,    66,
      66,   427,    40,    41,    42,     0,     0,    43,    16,     0,
     243,    44,    45,    67,     0,     0,   243,    17,   243,     0,
       0,    67,     0,    67,    46,     0,     0,    67,    67,    67,
      67,    67,     0,     0,     0,   243,    66,     0,    67,    67,
      67,     0,     0,     0,     0,     0,     0,    67,    67,     0,
       0,     0,    66,    66,    66,   244,   307,     0,     0,     0,
       0,     0,     0,     0,    66,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,     0,   331,   244,     0,     0,
     349,     0,     0,    79,    67,     0,     0,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,   210,   211,     0,
      67,    67,    67,   245,     0,     0,     0,     0,   331,    41,
      42,     0,    67,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,    17,   245,   245,     0,   307,   250,   251,
      46,   252,   253,   254,   255,     0,     0,     0,     0,     0,
      76,     0,   256,   257,     0,   258,     0,     0,     0,     0,
     259,     0,     0,    79,   260,   261,   245,     0,     0,     0,
      80,     0,     0,     0,     0,     0,     0,   262,   263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,     0,     0,    43,    16,     0,    66,    44,    45,     0,
       0,     0,   331,    17,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,   331,   428,     0,   331,   331,
     331,   331,   331,   331,   331,     0,     0,   331,     0,     0,
       0,     0,     0,     0,     0,   428,   331,   331,   331,     0,
       0,     0,     0,     0,    67,     0,     0,     0,    68,    68,
     245,     0,     0,    68,    68,     0,     0,     0,   428,     0,
       0,     0,     0,   245,   429,     0,   245,   245,   245,   245,
     245,   245,   245,     0,     0,   245,   208,     0,     0,     0,
       0,   438,     0,   429,   245,   245,   245,   428,     0,     0,
       0,     0,    68,    68,   331,     0,     0,     0,   210,   211,
     428,   428,     0,     0,     0,     0,   429,     0,     0,    40,
      41,    42,    68,     0,    43,    16,   331,     0,    44,    45,
      68,     0,    68,     0,    17,     0,    68,    68,    68,    68,
      68,    46,    39,     0,     0,   429,     0,    68,    68,    68,
       0,     0,   245,     0,     0,     0,    68,    68,   429,   429,
      40,    41,    42,     0,     0,    43,    16,   428,   428,    44,
      45,     0,     0,     0,   245,    17,     0,     0,     0,    76,
       0,     0,    46,     0,   208,     0,     0,     0,     0,   324,
       0,     0,    79,    68,     0,     0,   325,     0,     0,    80,
       0,     0,     0,     0,     0,     0,   210,   211,   331,    68,
      68,    68,   246,     0,     0,   429,   429,    40,    41,    42,
     258,    68,    43,    16,     0,   490,    44,    45,     0,     0,
       0,     0,    17,   246,   246,     0,     0,     0,     0,    46,
       0,     0,   262,   263,   428,   331,     0,     0,     0,     0,
       0,     0,   331,    40,    41,    42,   245,     0,    43,    16,
       0,     0,    44,    45,     0,   246,     0,    76,    17,   428,
       0,     0,   208,     0,     0,    46,     0,   209,   331,     0,
      79,     0,     0,     0,   331,     0,   331,    80,     0,     0,
       0,     0,   429,   245,   210,   211,     0,     0,     0,     0,
     245,   307,     0,     0,     0,    40,    41,    42,     0,     0,
      43,    16,     0,     0,    44,    45,     0,   429,     0,     0,
      17,     0,     0,     0,     0,     0,   245,    46,     0,     0,
       0,     0,   245,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,    69,    69,     0,   246,
       0,    69,    69,     0,     0,     0,   146,     0,     0,     0,
       0,     0,   246,     0,     0,   246,   246,   246,   246,   246,
     246,   246,     0,     0,   246,   147,   148,   149,     0,     0,
     150,   151,   467,   246,   246,   246,     0,     0,     0,   152,
      69,    69,     0,     0,    43,    16,     0,     0,    44,    45,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
      69,    46,     0,     0,     0,     0,     0,     0,    69,     0,
      69,     0,     0,     0,    69,    69,    69,    69,    69,     0,
       0,     0,     0,     0,   467,    69,    69,    69,     0,     0,
       0,   246,     0,     0,    69,    69,     0,     0,     0,     0,
       0,    70,    70,     0,     0,     0,    70,    70,     0,     0,
       0,     0,     0,   246,    76,     0,     0,     0,     0,   208,
       0,     0,     0,     0,   324,     0,     0,    79,     0,     0,
       0,    69,     0,     0,    80,     0,     0,     0,     0,     0,
       0,   210,   211,     0,     0,    70,    70,    69,    69,    69,
     247,     0,    40,    41,    42,     0,     0,    43,    16,    69,
       0,    44,    45,     0,     0,    70,     0,    17,     0,     0,
       0,   247,   247,    70,    46,    70,     0,     0,     0,    70,
      70,    70,    70,    70,     0,     0,     0,     0,     0,     0,
      70,    70,    70,     0,     0,   246,     0,     0,     0,    70,
      70,     0,     0,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   246,     0,     0,     0,    70,     0,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    70,    70,   248,     0,     0,     0,     0,
       0,     0,     0,     0,    70,   246,     0,     0,     0,     0,
      96,   246,     0,   246,     0,     0,   332,   248,     0,     0,
       0,    69,     0,     0,     0,     0,     0,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,     0,   247,   247,   247,   247,   247,   247,   247,
       0,     0,   247,    96,    96,     0,     0,     0,     0,     0,
     468,   247,   247,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,    96,    96,
      96,     0,     0,     0,     0,     0,     0,    96,    96,     0,
       0,     0,   468,     0,     0,    97,     0,     0,     0,   247,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     0,
       0,   247,     0,     0,    96,   248,     0,     0,   248,   248,
     248,   248,   248,   248,   248,     0,     0,   248,    97,    97,
       0,    96,     0,   239,     0,     0,   332,   332,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,   239,   239,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    97,     0,     0,     0,
       0,     0,     0,    97,    97,    97,     0,     0,     0,     0,
       0,     0,    97,    97,     0,     0,   239,     0,     0,     0,
       0,     0,     0,   247,   332,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   248,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     247,     0,     0,     0,     0,     0,    97,   247,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   240,
     240,     0,     0,   247,    96,     0,     0,     0,     0,   247,
     239,   247,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,   239,   239,   239,   239,
     239,   240,     0,     0,     0,   239,     0,     0,   332,     0,
       0,     0,     0,     0,   239,   239,   239,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   332,     0,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   239,     0,     0,     0,     0,     0,   332,    97,
       0,     0,     0,     0,   332,   240,   332,     0,     0,     0,
       0,     0,     0,     0,   239,     0,     0,     0,   240,     0,
       0,   240,   240,   240,   240,   240,     0,     0,     0,     0,
     240,     0,     0,     0,     0,     0,     0,     0,     0,   240,
     240,   240,   368,   250,   251,     0,   252,   253,   254,   255,
       0,     0,     0,   103,   125,    76,     0,   256,   257,     0,
     258,   126,   127,     0,   128,   259,     0,     0,    79,   260,
     261,     0,     0,     0,     0,    80,   129,   130,   369,     0,
       0,     0,   262,   263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,   239,   240,    43,    16,
       0,     0,    44,    45,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,   240,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,     0,     0,     0,     0,
     239,     0,   368,   250,   251,     0,   252,   253,   254,   255,
       0,     0,     0,   103,   125,    76,     0,   256,   257,     0,
     258,   126,   127,     0,   128,   361,   239,     0,    79,   260,
     261,     0,   239,     0,   239,    80,   129,   130,   369,     0,
       0,     0,   262,   263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,    41,    42,     0,     0,    43,    16,
       0,   240,    44,    45,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,   240,   252,
     253,   254,   255,     0,     0,   240,     0,     0,    76,     0,
     256,   257,     0,   258,     0,     0,     0,     0,   361,     0,
       0,    79,   260,   261,     0,     0,     0,     0,    80,     0,
       0,   240,     0,     0,     0,   262,   263,   240,     0,   240,
       0,     0,     0,     0,     0,     0,    40,    41,    42,     0,
       0,    43,    16,     0,     0,    44,    45,     0,     0,   250,
     251,    17,   252,   253,   254,   255,     0,     0,    46,     0,
       0,    76,     0,   256,   257,     0,   258,     0,     0,     0,
       0,   402,     0,     0,    79,   260,   261,     0,     0,     0,
       0,    80,     0,     0,     0,     0,     0,     0,   262,   263,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    40,
      41,    42,     0,     0,    43,    16,     0,     0,    44,    45,
       0,     0,   250,   251,    17,   252,   253,   254,   255,     0,
       0,    46,     0,     0,    76,     0,   256,   257,     0,   582,
       0,     0,     0,     0,   361,     0,     0,    79,   260,   261,
       0,     0,     0,     0,    80,     0,     0,     0,     0,     0,
       0,   262,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    40,    41,    42,     0,     0,    43,    16,     0,
       0,    44,    45,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      12,    13,   188,   187,   188,     0,   188,   187,   451,   340,
     341,   342,   343,   344,   408,   258,    33,   355,   240,    31,
     187,    38,    39,   259,   108,    33,    34,    22,   300,   259,
      38,    39,    90,   235,   523,   234,   240,   187,    77,    78,
     234,   275,   209,   259,   340,   341,   342,   343,   344,   340,
     341,   342,   343,   344,   397,    26,    97,    35,   208,   209,
     113,   114,     0,    12,    13,   408,   300,    26,   557,    77,
      78,    14,    50,   259,    17,   259,   115,   259,   358,   359,
     360,   122,   123,   124,    33,    34,   288,    99,   287,    97,
     131,   132,    14,   287,   111,    17,   108,   105,    14,   107,
     108,    17,   374,   111,   112,   113,   114,   115,   192,    47,
      48,    49,   450,   451,   122,   123,   124,    26,   340,   341,
     342,   343,   344,   131,   132,    33,   615,   135,    34,   168,
      38,   361,    14,    39,   146,    17,   416,   193,   146,   275,
     374,   345,   346,   196,   380,   361,   275,   203,   382,   383,
     384,   385,   386,   387,   388,   549,    11,   324,   338,   154,
     168,   219,   396,   397,   398,   399,   400,   184,    14,    24,
     337,    17,   402,   357,   408,   361,   184,   185,   186,   187,
     192,   193,   349,    13,   192,   193,   402,    21,   196,   527,
      69,   203,   635,   379,   202,   203,   380,   347,   536,   537,
     208,   209,    32,   111,    34,    13,   549,    13,   358,   359,
     360,   275,   520,   395,   272,    13,   402,    13,   396,   397,
     398,   399,   400,    60,    14,   409,    60,    17,   566,   472,
     408,   569,   240,   564,   572,    69,    32,   575,    34,    21,
      12,    13,   422,   479,   480,    34,   382,   383,   384,   385,
     386,   387,   388,   382,   383,   384,   385,   386,   387,   388,
     490,    33,    34,    35,    21,    34,   416,   605,   564,    26,
      11,   438,   408,   564,   490,    13,   184,   318,    50,   408,
      11,   619,   590,    24,    34,    12,    13,    39,   596,    61,
     598,   629,   300,    24,    13,   479,   480,   635,    55,    35,
      11,    59,    60,    60,   490,    28,    33,    34,    77,    78,
     318,    69,    69,    24,    50,   549,   324,    33,   382,   383,
     384,   385,   386,   387,   388,    61,   451,    77,    78,   337,
     108,    13,   340,   341,   342,   343,   344,   345,   346,   582,
     348,   349,   564,   355,   408,   581,   115,   355,    34,    35,
     358,   359,   360,   105,    13,   107,   542,    13,   300,   545,
     112,   113,   114,    13,   526,   115,   374,   529,   146,    39,
     520,   549,   105,   523,   107,    26,   556,    33,    34,   112,
     113,   114,    26,    33,    34,   393,   394,    26,   396,   397,
     398,   399,   400,   401,    26,    21,   582,   581,    12,   168,
      14,    14,   527,    17,    17,    39,    14,   557,   416,    17,
       3,   536,   537,   549,   192,   193,   185,    27,   168,    14,
     549,   607,    21,    55,    13,   203,   612,   613,    60,   613,
     438,   613,   374,    34,   186,   185,   622,    69,   450,   451,
     590,   566,   450,   451,   196,    32,   596,   572,   598,    34,
     575,   393,   394,   186,   396,   397,   398,   399,   400,    34,
     105,    60,   107,   196,   105,   615,   107,   112,   113,   114,
      69,   112,   113,   114,    34,    13,    19,    26,    21,    14,
     605,    20,    17,    26,    76,   549,    55,    56,    21,    14,
      26,    60,    17,    26,   619,    33,    34,    26,    14,    14,
      69,    17,    17,    26,   629,    26,    55,    12,    13,    26,
     635,    60,   520,    56,    13,   527,    11,    60,   526,   527,
      69,   529,    26,    56,   536,   537,    69,    60,   536,   537,
     393,   394,    28,    76,   411,   412,    69,    21,    13,    21,
     548,   186,    26,    76,    26,   186,    34,    21,    34,   557,
      28,   196,    26,    34,   566,   196,   564,   569,   566,    13,
     572,   569,    33,   575,   572,    33,    34,   575,   345,   346,
      38,    39,    56,    13,    56,    33,    60,    21,    60,    12,
      13,    55,   590,    11,    34,    69,    60,    69,   596,    34,
     598,    34,    76,   605,    76,    69,    26,   605,    34,    26,
      39,     3,    21,    26,    26,    26,     3,   619,    26,    77,
      78,   619,    26,    33,    34,    39,     6,   629,    38,    39,
      35,   629,    16,   635,    34,    21,    20,   635,    26,    97,
      61,    26,    26,    26,    34,    29,    13,   105,    11,   107,
      21,    33,    36,   111,   112,   113,   114,   115,    34,    34,
      34,    13,    34,    33,   122,   123,   124,    77,    78,    34,
      54,    55,    56,   131,   132,    59,    60,    34,    34,    63,
      64,    11,    21,    33,    13,    69,    13,    97,    13,    11,
      34,    50,    76,    21,    26,   105,    16,   107,    34,    50,
      34,   111,   112,   113,   114,   115,    26,    13,    34,    29,
     168,    13,   122,   123,   124,    50,    36,    33,    13,    11,
      34,   131,   132,     6,     6,    34,   184,   185,   186,   187,
     188,    34,    13,    34,    54,    55,    56,    33,   196,    59,
      60,    34,    11,    63,    64,    21,    13,    33,    33,    69,
     208,   209,    13,    11,    34,    34,    76,    33,   168,    34,
      13,    13,    12,    33,    40,    41,    42,    13,    34,    45,
      46,    13,    13,    12,   184,   185,   186,   187,    54,    13,
      11,    13,   240,    59,    60,    33,   196,    63,    64,    33,
      35,    34,    81,    69,    34,    24,    34,    34,   208,   209,
      76,   259,     4,     5,    34,     7,     8,     9,    10,   613,
     548,   581,   545,     3,    16,   622,    18,    19,   259,    21,
     549,   240,   556,   523,    26,    15,   615,    29,    30,    31,
     240,    33,    22,    23,    36,    25,   451,   355,   629,   605,
     209,    43,    44,   185,   569,    78,   134,    37,    38,    39,
     168,   184,    54,    55,    56,   202,    38,    59,    60,   304,
     318,    63,    64,   561,   111,   409,   324,    69,   189,    -1,
      -1,    99,    -1,    -1,    76,    -1,    -1,    -1,    -1,   337,
     338,    -1,   340,   341,   342,   343,   344,   345,   346,    -1,
      -1,   349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,
     358,   359,   360,    -1,    -1,    -1,    -1,    -1,   318,    -1,
      -1,    -1,    -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,    -1,   337,   338,    -1,
     340,   341,   342,   343,   344,   345,   346,    -1,    -1,   349,
      -1,    -1,    -1,    -1,    26,    -1,    -1,   357,   358,   359,
     360,   409,    -1,    -1,    36,    -1,    -1,    -1,   416,    -1,
      -1,    -1,    -1,    -1,   422,   423,    -1,    -1,    -1,    -1,
     380,    -1,    54,    55,    56,    -1,    -1,    59,    60,    -1,
     438,    63,    64,    -1,     8,     9,    10,    69,    -1,     3,
      -1,    -1,    16,    -1,    76,    19,    -1,    21,    -1,   409,
      -1,    15,    26,    -1,    -1,    29,   416,    31,    22,    23,
      -1,    25,   422,   423,    -1,    -1,    -1,    -1,    -1,    43,
      44,   479,   480,    37,    38,    39,    -1,    -1,   438,    -1,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    -1,    63,
      64,    16,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    26,    76,    -1,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,   520,    -1,    -1,   523,    -1,    -1,    -1,   479,
     480,    33,    34,    -1,    -1,    -1,    38,    39,    -1,    54,
      55,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    64,
      -1,    -1,     3,    -1,    69,     6,    -1,    -1,   556,   557,
      -1,    76,    -1,    -1,    15,    -1,   564,    -1,    -1,    -1,
     520,    22,    23,   523,    25,    77,    78,    -1,    -1,    33,
      34,    -1,    -1,   581,    38,    39,    37,    38,    39,    -1,
      -1,    -1,   590,    -1,    -1,    97,    -1,    -1,   596,    -1,
     598,    -1,    -1,   105,    -1,   107,   556,   557,    -1,   111,
     112,   113,   114,   115,   564,   613,    -1,   615,    -1,    -1,
     122,   123,   124,    77,    78,    -1,    -1,    -1,    -1,   131,
     132,   581,    54,    55,    56,    -1,    -1,    59,    60,    -1,
     590,    63,    64,    97,    -1,    -1,   596,    69,   598,    -1,
      -1,   105,    -1,   107,    76,    -1,    -1,   111,   112,   113,
     114,   115,    -1,    -1,    -1,   615,   168,    -1,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
      -1,    -1,   184,   185,   186,   187,   188,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    -1,    -1,    -1,    -1,   208,   209,    -1,    -1,
      26,    -1,    -1,    29,   168,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
     184,   185,   186,   187,    -1,    -1,    -1,    -1,   240,    55,
      56,    -1,   196,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,   208,   209,    -1,   259,     4,     5,
      76,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    29,    30,    31,   240,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    -1,    59,    60,    -1,   318,    63,    64,    -1,
      -1,    -1,   324,    69,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,   337,   338,    -1,   340,   341,
     342,   343,   344,   345,   346,    -1,    -1,   349,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   357,   358,   359,   360,    -1,
      -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,    33,    34,
     324,    -1,    -1,    38,    39,    -1,    -1,    -1,   380,    -1,
      -1,    -1,    -1,   337,   338,    -1,   340,   341,   342,   343,
     344,   345,   346,    -1,    -1,   349,    21,    -1,    -1,    -1,
      -1,    26,    -1,   357,   358,   359,   360,   409,    -1,    -1,
      -1,    -1,    77,    78,   416,    -1,    -1,    -1,    43,    44,
     422,   423,    -1,    -1,    -1,    -1,   380,    -1,    -1,    54,
      55,    56,    97,    -1,    59,    60,   438,    -1,    63,    64,
     105,    -1,   107,    -1,    69,    -1,   111,   112,   113,   114,
     115,    76,    36,    -1,    -1,   409,    -1,   122,   123,   124,
      -1,    -1,   416,    -1,    -1,    -1,   131,   132,   422,   423,
      54,    55,    56,    -1,    -1,    59,    60,   479,   480,    63,
      64,    -1,    -1,    -1,   438,    69,    -1,    -1,    -1,    16,
      -1,    -1,    76,    -1,    21,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    29,   168,    -1,    -1,    33,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,   520,   184,
     185,   186,   187,    -1,    -1,   479,   480,    54,    55,    56,
      21,   196,    59,    60,    -1,    26,    63,    64,    -1,    -1,
      -1,    -1,    69,   208,   209,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    43,    44,   556,   557,    -1,    -1,    -1,    -1,
      -1,    -1,   564,    54,    55,    56,   520,    -1,    59,    60,
      -1,    -1,    63,    64,    -1,   240,    -1,    16,    69,   581,
      -1,    -1,    21,    -1,    -1,    76,    -1,    26,   590,    -1,
      29,    -1,    -1,    -1,   596,    -1,   598,    36,    -1,    -1,
      -1,    -1,   556,   557,    43,    44,    -1,    -1,    -1,    -1,
     564,   613,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,
      59,    60,    -1,    -1,    63,    64,    -1,   581,    -1,    -1,
      69,    -1,    -1,    -1,    -1,    -1,   590,    76,    -1,    -1,
      -1,    -1,   596,    -1,   598,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   318,    -1,    -1,    33,    34,    -1,   324,
      -1,    38,    39,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,   337,    -1,    -1,   340,   341,   342,   343,   344,
     345,   346,    -1,    -1,   349,    40,    41,    42,    -1,    -1,
      45,    46,   357,   358,   359,   360,    -1,    -1,    -1,    54,
      77,    78,    -1,    -1,    59,    60,    -1,    -1,    63,    64,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    -1,
      97,    76,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,
     107,    -1,    -1,    -1,   111,   112,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,   409,   122,   123,   124,    -1,    -1,
      -1,   416,    -1,    -1,   131,   132,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,   438,    16,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    -1,    -1,
      -1,   168,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    77,    78,   184,   185,   186,
     187,    -1,    54,    55,    56,    -1,    -1,    59,    60,   196,
      -1,    63,    64,    -1,    -1,    97,    -1,    69,    -1,    -1,
      -1,   208,   209,   105,    76,   107,    -1,    -1,    -1,   111,
     112,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
     122,   123,   124,    -1,    -1,   520,    -1,    -1,    -1,   131,
     132,    -1,    -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   557,    -1,    -1,    -1,   168,    -1,    -1,   564,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   184,   185,   186,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   196,   590,    -1,    -1,    -1,    -1,
      34,   596,    -1,   598,    -1,    -1,   208,   209,    -1,    -1,
      -1,   318,    -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     337,    -1,    -1,   340,   341,   342,   343,   344,   345,   346,
      -1,    -1,   349,    77,    78,    -1,    -1,    -1,    -1,    -1,
     357,   358,   359,   360,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
     124,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
      -1,    -1,   409,    -1,    -1,    34,    -1,    -1,    -1,   416,
      -1,    -1,    -1,    -1,    -1,    -1,   318,    -1,    -1,    -1,
      -1,    -1,   324,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   438,    -1,    -1,   168,   337,    -1,    -1,   340,   341,
     342,   343,   344,   345,   346,    -1,    -1,   349,    77,    78,
      -1,   185,    -1,   187,    -1,    -1,   358,   359,   360,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    97,    -1,
      -1,    -1,    -1,    -1,   208,   209,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,    -1,
      -1,    -1,    -1,   122,   123,   124,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,    -1,   240,    -1,    -1,    -1,
      -1,    -1,    -1,   520,   416,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,   168,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     557,    -1,    -1,    -1,    -1,    -1,   185,   564,   187,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,
     209,    -1,    -1,   590,   318,    -1,    -1,    -1,    -1,   596,
     324,   598,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   337,    -1,    -1,   340,   341,   342,   343,
     344,   240,    -1,    -1,    -1,   349,    -1,    -1,   520,    -1,
      -1,    -1,    -1,    -1,   358,   359,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   557,    -1,    -1,    -1,    -1,
      -1,    -1,   564,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   416,    -1,    -1,    -1,    -1,    -1,   590,   318,
      -1,    -1,    -1,    -1,   596,   324,   598,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   438,    -1,    -1,    -1,   337,    -1,
      -1,   340,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
     349,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   358,
     359,   360,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    -1,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,   520,   416,    59,    60,
      -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,   438,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,
     564,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    22,    23,    -1,    25,    26,   590,    -1,    29,    30,
      31,    -1,   596,    -1,   598,    36,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    -1,    -1,    59,    60,
      -1,   520,    63,    64,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,     5,   557,     7,
       8,     9,    10,    -1,    -1,   564,    -1,    -1,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    29,    30,    31,    -1,    -1,    -1,    -1,    36,    -1,
      -1,   590,    -1,    -1,    -1,    43,    44,   596,    -1,   598,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,
      -1,    59,    60,    -1,    -1,    63,    64,    -1,    -1,     4,
       5,    69,     7,     8,     9,    10,    -1,    -1,    76,    -1,
      -1,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    29,    30,    31,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    -1,    -1,    59,    60,    -1,    -1,    63,    64,
      -1,    -1,     4,     5,    69,     7,     8,     9,    10,    -1,
      -1,    76,    -1,    -1,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    29,    30,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    -1,    59,    60,    -1,
      -1,    63,    64,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    76
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    79,   261,     0,    47,    48,    49,    80,    81,    82,
      83,   246,    26,    26,    26,    59,    60,    69,   255,   256,
     255,    69,   260,    13,    13,    13,   247,   261,    60,    85,
      85,    21,    34,    13,    13,   248,   255,    28,    26,    36,
      54,    55,    56,    59,    63,    64,    76,   190,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   207,
     208,   212,   213,   214,   235,   236,   237,   238,   239,   240,
     241,   242,   256,   257,   258,   259,    16,    20,    26,    29,
      36,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   195,   209,   210,   221,   224,    33,    13,
     213,   195,   207,    14,    17,   232,   233,   234,    13,    84,
     261,    39,    26,    26,    26,    26,    32,   183,   211,   183,
     209,    84,    39,     3,     3,    15,    22,    23,    25,    37,
      38,    39,   222,    27,   225,    21,   189,   191,   192,   248,
      34,   201,   204,   205,   207,   207,    21,    40,    41,    42,
      45,    46,    54,   242,   243,   249,   250,   251,   252,   253,
     256,   259,    34,   214,   206,   207,   206,   206,    13,    32,
      34,    34,    34,   191,   191,   191,   191,   191,   210,   194,
     242,    33,   249,   254,    26,    26,    26,    26,    26,    13,
     244,   261,    11,    26,    28,    34,    13,    34,    34,   211,
      28,    33,    13,    13,    33,   212,   182,   207,    21,    26,
      43,    44,   132,   133,   134,   135,   136,   137,   138,   139,
     141,   142,   143,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   165,   166,   168,   180,   181,   221,
     224,   231,   235,   236,   237,   238,   239,   240,   241,   242,
       4,     5,     7,     8,     9,    10,    18,    19,    21,    26,
      30,    31,    43,    44,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    96,    97,    98,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   117,   118,   122,
     124,   126,   127,   128,   129,   130,   131,   215,   216,   217,
     218,   219,   221,   224,   231,   235,   236,   237,   238,   239,
     240,   241,   242,   245,   253,   249,   254,   206,    11,   194,
     254,    34,    34,    34,    26,    33,   133,   164,   166,   167,
     235,   237,   241,   133,   168,   181,   231,    26,    26,    34,
      39,     3,     3,    39,   222,   232,   234,   225,    21,    26,
     140,   141,   148,   150,   242,    11,    24,   220,    26,    26,
      26,    26,    33,    87,   118,   119,   235,   237,     3,    39,
      87,   120,   122,   131,   218,   222,   223,   231,   233,    26,
      26,    34,    39,     3,     6,     3,     6,    39,   222,    94,
      96,   101,   107,   232,   234,   225,    35,    50,    61,    35,
      61,    21,    26,    95,    96,   102,   104,   242,    11,   220,
      26,    26,    26,    34,   191,   166,    13,    33,    34,    34,
      34,   133,    21,    26,   158,   168,   235,   236,   237,   238,
     139,   141,   147,   154,   139,   139,   139,   139,    26,   150,
     165,   242,   165,   166,   144,   145,   146,   242,   133,    19,
      21,    26,   169,   170,   171,   173,   174,   176,   178,   227,
     228,   229,   242,   256,   257,   230,   231,   239,   240,   167,
     167,   167,    13,    33,    34,    34,    34,    34,    87,    21,
      26,   112,   122,    94,    94,    94,    94,    94,    94,    94,
      26,   104,   117,   242,   117,   118,    96,   124,   124,   127,
     124,   124,   124,    99,   100,   242,    87,    93,    94,    96,
     123,   124,   125,   127,   230,   119,   121,   121,   121,   167,
      13,   159,   168,    13,   133,    33,    13,    11,    34,    21,
     169,   179,   170,   173,   174,   177,    50,    26,    34,    34,
      34,   119,    13,   113,   122,    13,    87,    33,    13,    11,
      34,    34,    34,    34,   164,    33,    13,    21,   151,   160,
     161,   162,   166,    34,    11,   144,    26,   174,   144,    13,
      33,    34,    35,    34,    34,    35,   174,   174,   175,    87,
      33,    13,    21,    87,   114,   115,    34,    11,    99,   123,
      13,   159,   151,   161,   163,   166,    13,    12,   226,   139,
     174,    33,   179,   174,   174,    13,    34,    13,   113,    87,
     115,   116,   226,    13,   164,    13,    33,   164,   164,    11,
     175,    87,    13,    33,    87,    86,    34,   163,    34,    26,
     172,   174,    34,   116,    34,    26,   176,   173,    34
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
#line 227 "SyntaxBNF.y"
    {}
    break;

  case 3:
#line 228 "SyntaxBNF.y"
    {}
    break;

  case 4:
#line 231 "SyntaxBNF.y"
    {P_PRINT((yyval.pval));}
    break;

  case 5:
#line 232 "SyntaxBNF.y"
    {P_PRINT((yyval.pval));}
    break;

  case 6:
#line 235 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("annotated_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 7:
#line 236 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("annotated_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 8:
#line 239 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_annotated", P_TOKEN("_LIT_fof ", (yyvsp[(1) - (10)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (10)].ival)), (yyvsp[(3) - (10)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (10)].ival)), (yyvsp[(5) - (10)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (10)].ival)), (yyvsp[(7) - (10)].pval), (yyvsp[(8) - (10)].pval), P_TOKEN("RPAREN ", (yyvsp[(9) - (10)].ival)), P_TOKEN("PERIOD ", (yyvsp[(10) - (10)].ival)));}
    break;

  case 9:
#line 242 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("cnf_annotated", P_TOKEN("_LIT_cnf ", (yyvsp[(1) - (10)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (10)].ival)), (yyvsp[(3) - (10)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (10)].ival)), (yyvsp[(5) - (10)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (10)].ival)), (yyvsp[(7) - (10)].pval), (yyvsp[(8) - (10)].pval), P_TOKEN("RPAREN ", (yyvsp[(9) - (10)].ival)), P_TOKEN("PERIOD ", (yyvsp[(10) - (10)].ival)));}
    break;

  case 10:
#line 245 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("annotations", P_TOKEN("COMMA ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 11:
#line 246 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("annotations", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 12:
#line 249 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_role", P_TOKEN("lower_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 13:
#line 252 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 14:
#line 253 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 15:
#line 254 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 16:
#line 255 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 17:
#line 258 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 18:
#line 259 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 19:
#line 260 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 20:
#line 261 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 21:
#line 264 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 22:
#line 265 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 23:
#line 266 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 24:
#line 269 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_nonassoc", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 25:
#line 272 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 26:
#line 273 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 27:
#line 274 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 28:
#line 277 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_or_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 29:
#line 278 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_or_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 30:
#line 281 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_and_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AMPERSAND ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 31:
#line 282 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_and_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AMPERSAND ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 32:
#line 285 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_apply_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AT_SIGN ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 33:
#line 286 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_apply_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AT_SIGN ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 34:
#line 289 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 35:
#line 290 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 36:
#line 291 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 37:
#line 294 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_preunit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 38:
#line 295 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_preunit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 39:
#line 298 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 40:
#line 299 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 41:
#line 300 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 42:
#line 301 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_formula", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 43:
#line 304 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_quantified_formula", (yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 44:
#line 307 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_quantification", (yyvsp[(1) - (5)].pval), P_TOKEN("LBRKT ", (yyvsp[(2) - (5)].ival)), (yyvsp[(3) - (5)].pval), P_TOKEN("RBRKT ", (yyvsp[(4) - (5)].ival)), P_TOKEN("COLON ", (yyvsp[(5) - (5)].ival)),NULL,NULL,NULL,NULL,NULL);}
    break;

  case 45:
#line 310 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_variable_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 46:
#line 311 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_variable_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 47:
#line 314 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_typed_variable", (yyvsp[(1) - (3)].pval), P_TOKEN("COLON ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 48:
#line 317 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 49:
#line 318 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 50:
#line 321 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_prefix_unary", (yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 51:
#line 324 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_infix_unary", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 52:
#line 327 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 53:
#line 328 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 54:
#line 329 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 55:
#line 330 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 56:
#line 333 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_plain_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 57:
#line 334 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_plain_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 58:
#line 337 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_defined_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 59:
#line 338 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_defined_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 60:
#line 339 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_defined_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 61:
#line 340 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_defined_atomic", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 62:
#line 341 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_defined_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 63:
#line 344 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_defined_infix", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 64:
#line 347 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_system_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 65:
#line 350 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_fof_function", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 66:
#line 351 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_fof_function", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 67:
#line 352 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_fof_function", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 68:
#line 355 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_conditional", P_TOKEN("_DLR_ite ", (yyvsp[(1) - (8)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (8)].ival)), (yyvsp[(3) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (8)].ival)), (yyvsp[(5) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (8)].ival)), (yyvsp[(7) - (8)].pval), P_TOKEN("RPAREN ", (yyvsp[(8) - (8)].ival)),NULL,NULL);}
    break;

  case 69:
#line 358 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let", P_TOKEN("_DLR_let ", (yyvsp[(1) - (8)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (8)].ival)), (yyvsp[(3) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (8)].ival)), (yyvsp[(5) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (8)].ival)), (yyvsp[(7) - (8)].pval), P_TOKEN("RPAREN ", (yyvsp[(8) - (8)].ival)),NULL,NULL);}
    break;

  case 70:
#line 361 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_types", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 71:
#line 362 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_types", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 72:
#line 365 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atom_typing_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 73:
#line 366 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atom_typing_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 74:
#line 369 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_defns", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 75:
#line 370 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_defns", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 76:
#line 373 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_defn", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 77:
#line 376 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_defn_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 78:
#line 377 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_let_defn_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 79:
#line 380 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 80:
#line 381 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 81:
#line 382 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_term", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 82:
#line 385 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_tuple", P_TOKEN("LBRKT ", (yyvsp[(1) - (2)].ival)), P_TOKEN("RBRKT ", (yyvsp[(2) - (2)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 83:
#line 386 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_tuple", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 84:
#line 389 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_formula_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 85:
#line 390 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_formula_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 86:
#line 393 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_conn_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 87:
#line 394 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_conn_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 88:
#line 395 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_conn_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 89:
#line 396 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_conn_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 90:
#line 399 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_arguments", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 91:
#line 402 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atom_typing", (yyvsp[(1) - (3)].pval), P_TOKEN("COLON ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 92:
#line 403 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_atom_typing", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 93:
#line 406 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_top_level_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 94:
#line 407 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_top_level_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 95:
#line 408 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_top_level_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 96:
#line 411 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unitary_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 97:
#line 414 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_apply_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 98:
#line 417 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 99:
#line 418 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 100:
#line 419 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_binary_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 101:
#line 422 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_mapping_type", (yyvsp[(1) - (3)].pval), P_TOKEN("arrow ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 102:
#line 423 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_mapping_type", (yyvsp[(1) - (3)].pval), P_TOKEN("arrow ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 103:
#line 426 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_xprod_type", (yyvsp[(1) - (3)].pval), P_TOKEN("STAR ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 104:
#line 427 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_xprod_type", (yyvsp[(1) - (3)].pval), P_TOKEN("STAR ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 105:
#line 430 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_union_type", (yyvsp[(1) - (3)].pval), P_TOKEN("plus ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 106:
#line 431 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_union_type", (yyvsp[(1) - (3)].pval), P_TOKEN("plus ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 107:
#line 434 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_subtype", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 108:
#line 437 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_sequent", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 109:
#line 438 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_sequent", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 110:
#line 441 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 111:
#line 442 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 112:
#line 443 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 113:
#line 444 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 114:
#line 447 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 115:
#line 448 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 116:
#line 449 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 117:
#line 450 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 118:
#line 453 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 119:
#line 454 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 120:
#line 457 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_binary_nonassoc", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 121:
#line 460 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 122:
#line 461 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 123:
#line 464 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_or_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 124:
#line 465 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_or_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 125:
#line 468 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_and_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AMPERSAND ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 126:
#line 469 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_and_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AMPERSAND ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 127:
#line 472 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 128:
#line 473 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 129:
#line 474 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 130:
#line 477 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_preunit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 131:
#line 478 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_preunit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 132:
#line 481 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 133:
#line 482 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 134:
#line 483 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 135:
#line 484 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_formula", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 136:
#line 487 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 137:
#line 490 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_quantified_formula", (yyvsp[(1) - (6)].pval), P_TOKEN("LBRKT ", (yyvsp[(2) - (6)].ival)), (yyvsp[(3) - (6)].pval), P_TOKEN("RBRKT ", (yyvsp[(4) - (6)].ival)), P_TOKEN("COLON ", (yyvsp[(5) - (6)].ival)), (yyvsp[(6) - (6)].pval),NULL,NULL,NULL,NULL);}
    break;

  case 138:
#line 493 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_variable_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 139:
#line 494 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_variable_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 140:
#line 497 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_variable", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 141:
#line 498 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_variable", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 142:
#line 501 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_typed_variable", (yyvsp[(1) - (3)].pval), P_TOKEN("COLON ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 143:
#line 504 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 144:
#line 505 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 145:
#line 508 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_prefix_unary", (yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 146:
#line 511 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_infix_unary", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 147:
#line 514 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 148:
#line 515 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 149:
#line 516 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 150:
#line 519 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_plain_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 151:
#line 520 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_plain_atomic", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 152:
#line 523 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_defined_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 153:
#line 526 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_defined_plain", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 154:
#line 527 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_defined_plain", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 155:
#line 528 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_defined_plain", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 156:
#line 529 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_defined_plain", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 157:
#line 532 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_defined_infix", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 158:
#line 535 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_system_atomic", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 159:
#line 536 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_system_atomic", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 160:
#line 539 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_conditional", P_TOKEN("_DLR_ite ", (yyvsp[(1) - (8)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (8)].ival)), (yyvsp[(3) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (8)].ival)), (yyvsp[(5) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (8)].ival)), (yyvsp[(7) - (8)].pval), P_TOKEN("RPAREN ", (yyvsp[(8) - (8)].ival)),NULL,NULL);}
    break;

  case 161:
#line 542 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let", P_TOKEN("_DLR_let ", (yyvsp[(1) - (8)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (8)].ival)), (yyvsp[(3) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(4) - (8)].ival)), (yyvsp[(5) - (8)].pval), P_TOKEN("COMMA ", (yyvsp[(6) - (8)].ival)), (yyvsp[(7) - (8)].pval), P_TOKEN("RPAREN ", (yyvsp[(8) - (8)].ival)),NULL,NULL);}
    break;

  case 162:
#line 545 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_types", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 163:
#line 546 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_types", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 164:
#line 549 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atom_typing_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 165:
#line 550 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atom_typing_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 166:
#line 553 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_defns", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 167:
#line 554 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_defns", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 168:
#line 557 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_defn", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 169:
#line 560 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_LHS", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 170:
#line 561 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_LHS", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 171:
#line 564 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_defn_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 172:
#line 565 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_let_defn_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 173:
#line 568 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 174:
#line 569 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 175:
#line 570 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 176:
#line 573 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 177:
#line 574 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 178:
#line 575 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 179:
#line 576 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 180:
#line 577 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_term", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 181:
#line 580 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_tuple", P_TOKEN("LBRKT ", (yyvsp[(1) - (2)].ival)), P_TOKEN("RBRKT ", (yyvsp[(2) - (2)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 182:
#line 581 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_tuple", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 183:
#line 584 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_arguments", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 184:
#line 585 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_arguments", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 185:
#line 588 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atom_typing", (yyvsp[(1) - (3)].pval), P_TOKEN("COLON ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 186:
#line 589 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atom_typing", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 187:
#line 592 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_top_level_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 188:
#line 593 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_top_level_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 189:
#line 596 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_non_atomic_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 190:
#line 597 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_non_atomic_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 191:
#line 598 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_non_atomic_type", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 192:
#line 601 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tf1_quantified_type", P_TOKEN("EXCLAMATION_GREATER ", (yyvsp[(1) - (6)].ival)), P_TOKEN("LBRKT ", (yyvsp[(2) - (6)].ival)), (yyvsp[(3) - (6)].pval), P_TOKEN("RBRKT ", (yyvsp[(4) - (6)].ival)), P_TOKEN("COLON ", (yyvsp[(5) - (6)].ival)), (yyvsp[(6) - (6)].pval),NULL,NULL,NULL,NULL);}
    break;

  case 193:
#line 604 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_monotype", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 194:
#line 605 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_monotype", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 195:
#line 608 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 196:
#line 609 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_unitary_type", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 197:
#line 612 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 198:
#line 613 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 199:
#line 614 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_type", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 200:
#line 615 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 201:
#line 616 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 202:
#line 617 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_atomic_type", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 203:
#line 620 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_type_arguments", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 204:
#line 621 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_type_arguments", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 205:
#line 624 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_mapping_type", (yyvsp[(1) - (3)].pval), P_TOKEN("arrow ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 206:
#line 627 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_xprod_type", (yyvsp[(1) - (3)].pval), P_TOKEN("STAR ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 207:
#line 628 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_xprod_type", (yyvsp[(1) - (3)].pval), P_TOKEN("STAR ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 208:
#line 631 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_tuple_type", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 209:
#line 634 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_type_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 210:
#line 635 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_type_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 211:
#line 638 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tff_subtype", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 212:
#line 641 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_sequent", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 213:
#line 642 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("tfx_sequent", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 214:
#line 645 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 215:
#line 646 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 216:
#line 649 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 217:
#line 650 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 218:
#line 651 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_logic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 219:
#line 654 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 220:
#line 655 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_binary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 221:
#line 658 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_binary_nonassoc", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 222:
#line 661 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 223:
#line 662 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_binary_assoc", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 224:
#line 665 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_or_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 225:
#line 666 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_or_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 226:
#line 669 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_and_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AMPERSAND ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 227:
#line 670 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_and_formula", (yyvsp[(1) - (3)].pval), P_TOKEN("AMPERSAND ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 228:
#line 673 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unary_formula", (yyvsp[(1) - (2)].pval), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 229:
#line 674 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 230:
#line 677 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_infix_unary", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 231:
#line 680 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 232:
#line 681 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unit_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 233:
#line 684 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 234:
#line 685 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unitary_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 235:
#line 686 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_unitary_formula", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 236:
#line 689 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_quantified_formula", (yyvsp[(1) - (6)].pval), P_TOKEN("LBRKT ", (yyvsp[(2) - (6)].ival)), (yyvsp[(3) - (6)].pval), P_TOKEN("RBRKT ", (yyvsp[(4) - (6)].ival)), P_TOKEN("COLON ", (yyvsp[(5) - (6)].ival)), (yyvsp[(6) - (6)].pval),NULL,NULL,NULL,NULL);}
    break;

  case 237:
#line 692 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_variable_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 238:
#line 693 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_variable_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 239:
#line 696 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 240:
#line 697 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 241:
#line 698 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 242:
#line 701 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_plain_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 243:
#line 704 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 244:
#line 705 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 245:
#line 708 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_plain_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 246:
#line 711 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_infix_formula", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 247:
#line 714 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_system_atomic_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 248:
#line 717 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_plain_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 249:
#line 718 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_plain_term", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 250:
#line 721 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 251:
#line 722 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 252:
#line 725 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_atomic_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 253:
#line 728 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_plain_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 254:
#line 729 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_defined_plain_term", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 255:
#line 732 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_system_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 256:
#line 733 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_system_term", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 257:
#line 736 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_arguments", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 258:
#line 737 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_arguments", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 259:
#line 740 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 260:
#line 741 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 261:
#line 744 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_function_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 262:
#line 745 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_function_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 263:
#line 746 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_function_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 264:
#line 749 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_sequent", (yyvsp[(1) - (3)].pval), (yyvsp[(2) - (3)].pval), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 265:
#line 750 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_sequent", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 266:
#line 753 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_formula_tuple", P_TOKEN("LBRACE ", (yyvsp[(1) - (2)].ival)), P_TOKEN("RBRACE ", (yyvsp[(2) - (2)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 267:
#line 754 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_formula_tuple", P_TOKEN("LBRACE ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRACE ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 268:
#line 757 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_formula_tuple_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 269:
#line 758 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_formula_tuple_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 270:
#line 761 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("cnf_formula", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 271:
#line 762 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("cnf_formula", P_TOKEN("LPAREN ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RPAREN ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 272:
#line 765 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("disjunction", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 273:
#line 766 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("disjunction", (yyvsp[(1) - (3)].pval), P_TOKEN("VLINE ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 274:
#line 769 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("literal", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 275:
#line 770 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("literal", P_TOKEN("TILDE ", (yyvsp[(1) - (2)].ival)), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 276:
#line 771 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("literal", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 277:
#line 774 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_quantifier", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 278:
#line 775 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_quantifier", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 279:
#line 776 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_quantifier", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 280:
#line 779 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_quantifier", P_TOKEN("EXCLAMATION_GREATER ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 281:
#line 780 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_quantifier", P_TOKEN("QUESTION_STAR ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 282:
#line 783 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th0_quantifier", P_TOKEN("CARET ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 283:
#line 784 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th0_quantifier", P_TOKEN("AT_SIGN_PLUS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 284:
#line 785 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th0_quantifier", P_TOKEN("AT_SIGN_MINUS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 285:
#line 788 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unary_connective", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 286:
#line 789 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("thf_unary_connective", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 287:
#line 792 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_unary_connective", P_TOKEN("EXCLAMATION_EXCLAMATION ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 288:
#line 793 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_unary_connective", P_TOKEN("QUESTION_QUESTION ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 289:
#line 794 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_unary_connective", P_TOKEN("AT_AT_SIGN_PLUS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 290:
#line 795 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_unary_connective", P_TOKEN("AT_AT_SIGN_MINUS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 291:
#line 796 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("th1_unary_connective", P_TOKEN("AT_SIGN_EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 292:
#line 799 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("subtype_sign", P_TOKEN("LESS_LESS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 293:
#line 802 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_quantifier", P_TOKEN("EXCLAMATION ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 294:
#line 803 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("fof_quantifier", P_TOKEN("QUESTION ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 295:
#line 806 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("nonassoc_connective", P_TOKEN("LESS_EQUALS_GREATER ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 296:
#line 807 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("nonassoc_connective", P_TOKEN("EQUALS_GREATER ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 297:
#line 808 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("nonassoc_connective", P_TOKEN("LESS_EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 298:
#line 809 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("nonassoc_connective", P_TOKEN("LESS_TILDE_GREATER ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 299:
#line 810 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("nonassoc_connective", P_TOKEN("TILDE_VLINE ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 300:
#line 811 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("nonassoc_connective", P_TOKEN("TILDE_AMPERSAND ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 301:
#line 814 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("assoc_connective", P_TOKEN("VLINE ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 302:
#line 815 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("assoc_connective", P_TOKEN("AMPERSAND ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 303:
#line 818 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("unary_connective", P_TOKEN("TILDE ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 304:
#line 821 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("gentzen_arrow", P_TOKEN("MINUS_MINUS_GREATER ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 305:
#line 824 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("assignment", P_TOKEN("COLON_EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 306:
#line 827 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("type_constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 307:
#line 830 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("type_functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 308:
#line 833 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_type", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 309:
#line 836 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atom", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 310:
#line 837 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atom", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 311:
#line 840 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("untyped_atom", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 312:
#line 841 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("untyped_atom", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 313:
#line 844 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_infix_pred", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 314:
#line 847 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("infix_equality", P_TOKEN("EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 315:
#line 850 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("infix_inequality", P_TOKEN("EXCLAMATION_EQUALS ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 316:
#line 853 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 317:
#line 856 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 318:
#line 859 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("system_constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 319:
#line 862 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("system_functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 320:
#line 865 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_constant", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 321:
#line 868 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_functor", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 322:
#line 871 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 323:
#line 872 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("defined_term", P_TOKEN("distinct_object ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 324:
#line 875 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("variable", P_TOKEN("upper_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 325:
#line 878 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("source", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 326:
#line 881 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("optional_info", P_TOKEN("COMMA ", (yyvsp[(1) - (2)].ival)), (yyvsp[(2) - (2)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 327:
#line 882 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("optional_info", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 328:
#line 885 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("useful_info", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 329:
#line 888 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("include", P_TOKEN("_LIT_include ", (yyvsp[(1) - (6)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (6)].ival)), (yyvsp[(3) - (6)].pval), (yyvsp[(4) - (6)].pval), P_TOKEN("RPAREN ", (yyvsp[(5) - (6)].ival)), P_TOKEN("PERIOD ", (yyvsp[(6) - (6)].ival)),NULL,NULL,NULL,NULL);}
    break;

  case 330:
#line 891 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_selection", P_TOKEN("COMMA ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LBRKT ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RBRKT ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 331:
#line 892 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_selection", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 332:
#line 895 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name_list", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 333:
#line 896 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name_list", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 334:
#line 899 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 335:
#line 900 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_term", (yyvsp[(1) - (3)].pval), P_TOKEN("COLON ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 336:
#line 901 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_term", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 337:
#line 904 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_data", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 338:
#line 905 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_data", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 339:
#line 906 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_data", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 340:
#line 907 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_data", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 341:
#line 908 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_data", P_TOKEN("distinct_object ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 342:
#line 909 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_data", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 343:
#line 912 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_function", (yyvsp[(1) - (4)].pval), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 344:
#line 915 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_data", P_TOKEN("_DLR_thf ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 345:
#line 916 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_data", P_TOKEN("_DLR_tff ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 346:
#line 917 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_data", P_TOKEN("_DLR_fof ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 347:
#line 918 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_data", P_TOKEN("_DLR_cnf ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 348:
#line 919 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("formula_data", P_TOKEN("_DLR_fot ", (yyvsp[(1) - (4)].ival)), P_TOKEN("LPAREN ", (yyvsp[(2) - (4)].ival)), (yyvsp[(3) - (4)].pval), P_TOKEN("RPAREN ", (yyvsp[(4) - (4)].ival)),NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 349:
#line 922 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_list", P_TOKEN("LBRKT ", (yyvsp[(1) - (2)].ival)), P_TOKEN("RBRKT ", (yyvsp[(2) - (2)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 350:
#line 923 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_list", P_TOKEN("LBRKT ", (yyvsp[(1) - (3)].ival)), (yyvsp[(2) - (3)].pval), P_TOKEN("RBRKT ", (yyvsp[(3) - (3)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 351:
#line 926 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_terms", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 352:
#line 927 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("general_terms", (yyvsp[(1) - (3)].pval), P_TOKEN("COMMA ", (yyvsp[(2) - (3)].ival)), (yyvsp[(3) - (3)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 353:
#line 930 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name", (yyvsp[(1) - (1)].pval),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 354:
#line 931 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("name", P_TOKEN("integer ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 355:
#line 934 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_word", P_TOKEN("lower_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 356:
#line 935 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_word", P_TOKEN("single_quoted ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 357:
#line 938 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_defined_word", P_TOKEN("dollar_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 358:
#line 941 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("atomic_system_word", P_TOKEN("dollar_dollar_word ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 359:
#line 944 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("number", P_TOKEN("integer ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 360:
#line 945 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("number", P_TOKEN("rational ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 361:
#line 946 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("number", P_TOKEN("real ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 362:
#line 949 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("file_name", P_TOKEN("single_quoted ", (yyvsp[(1) - (1)].ival)),NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;

  case 363:
#line 952 "SyntaxBNF.y"
    {(yyval.pval) = P_BUILD("null",NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);}
    break;


/* Line 1267 of yacc.c.  */
#line 4512 "y.tab.c"
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



