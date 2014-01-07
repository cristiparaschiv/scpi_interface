
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     AM_SOURCE = 258,
     AM_DEPTH = 259,
     AM_FREQ = 260,
     AM_FREQ1 = 261,
     INTERNAL = 262,
     EXTERNAL = 263,
     NUMBER = 264,
     START = 265,
     VIRGULA = 266,
     VOLTAGE = 267,
     FM_SOURCE = 268,
     FM_FREQ = 269,
     FM_PEAK = 270,
     FREQ = 271,
     FM_START = 272,
     OK = 273,
     SW_START = 274,
     SW_FR_START = 275,
     SW_FR_STOP = 276,
     SW_LIN_LOG = 277,
     SW_UP_DOWN = 278,
     SW_TIME = 279,
     LINEAR = 280,
     LOGARITHMIC = 281,
     SW_UP = 282,
     SW_DOWN = 283,
     PM_SOURCE = 284,
     PM_FREQ = 285,
     PM_DEVIATION = 286,
     PM_START = 287,
     SINUSOID = 288,
     FUNCTION = 289,
     TRIGGER = 290,
     NOISE = 291,
     TRIANGLE = 292,
     FSK_SOURCE = 293,
     FSK_MARK = 294,
     FSK_SPACE = 295,
     FSK_START = 296
   };
#endif
/* Tokens.  */
#define AM_SOURCE 258
#define AM_DEPTH 259
#define AM_FREQ 260
#define AM_FREQ1 261
#define INTERNAL 262
#define EXTERNAL 263
#define NUMBER 264
#define START 265
#define VIRGULA 266
#define VOLTAGE 267
#define FM_SOURCE 268
#define FM_FREQ 269
#define FM_PEAK 270
#define FREQ 271
#define FM_START 272
#define OK 273
#define SW_START 274
#define SW_FR_START 275
#define SW_FR_STOP 276
#define SW_LIN_LOG 277
#define SW_UP_DOWN 278
#define SW_TIME 279
#define LINEAR 280
#define LOGARITHMIC 281
#define SW_UP 282
#define SW_DOWN 283
#define PM_SOURCE 284
#define PM_FREQ 285
#define PM_DEVIATION 286
#define PM_START 287
#define SINUSOID 288
#define FUNCTION 289
#define TRIGGER 290
#define NOISE 291
#define TRIANGLE 292
#define FSK_SOURCE 293
#define FSK_MARK 294
#define FSK_SPACE 295
#define FSK_START 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


