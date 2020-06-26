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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 148 "SyntaxBNF.y"
{int ival; double dval; char* sval; void* pval;}
/* Line 1529 of yacc.c.  */
#line 129 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

