/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 148 "SyntaxBNF.y"
{int ival; double dval; char* sval; void* pval;}
/* Line 1529 of yacc.c.  */
#line 205 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

