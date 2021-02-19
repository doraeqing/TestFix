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
     IDENTIFIER = 258,
     DOUBLE_LITERAL = 259,
     STRING_LITERAL = 260,
     INTETER_LITERAL = 261,
     SELF = 262,
     SUPER = 263,
     NIL = 264,
     NULL_ = 265,
     YES_ = 266,
     NO_ = 267,
     COLON = 268,
     SEMICOLON = 269,
     COMMA = 270,
     LP = 271,
     RP = 272,
     LB = 273,
     RB = 274,
     LC = 275,
     RC = 276,
     QUESTION = 277,
     DOT = 278,
     ASSIGN = 279,
     AT = 280,
     ADDRESS = 281,
     POWER = 282,
     AND = 283,
     OR = 284,
     NOT = 285,
     EQ = 286,
     NE = 287,
     LT = 288,
     LE = 289,
     GT = 290,
     GE = 291,
     SUB = 292,
     SUB_ASSIGN = 293,
     ADD = 294,
     ADD_ASSIGN = 295,
     ASTERISK_ASSIGN = 296,
     DIV = 297,
     DIV_ASSIGN = 298,
     MOD = 299,
     MOD_ASSIGN = 300,
     INCREMENT = 301,
     DECREMENT = 302,
     ANNOTATION_IF = 303,
     CLASS = 304,
     STRUCT = 305,
     DECLARE = 306,
     SELECTOR = 307,
     RETURN = 308,
     IF = 309,
     ELSE = 310,
     FOR = 311,
     IN = 312,
     WHILE = 313,
     DO = 314,
     SWITCH = 315,
     CASE = 316,
     DEFAULT = 317,
     BREAK = 318,
     CONTINUE = 319,
     PROPERTY = 320,
     WEAK = 321,
     STRONG = 322,
     COPY = 323,
     ASSIGN_MEM = 324,
     NONATOMIC = 325,
     ATOMIC = 326,
     ASTERISK = 327,
     VOID = 328,
     BOOL_ = 329,
     CHAR = 330,
     U_INT = 331,
     INT = 332,
     DOUBLE = 333,
     C_STRING = 334,
     CLASS_ = 335,
     SEL_ = 336,
     ID = 337,
     POINTER = 338,
     BLOCK = 339,
     __WEAK = 340,
     __STRONG = 341,
     STATIC = 342,
     C_FUNCTION = 343,
     TYPEDEF = 344
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define DOUBLE_LITERAL 259
#define STRING_LITERAL 260
#define INTETER_LITERAL 261
#define SELF 262
#define SUPER 263
#define NIL 264
#define NULL_ 265
#define YES_ 266
#define NO_ 267
#define COLON 268
#define SEMICOLON 269
#define COMMA 270
#define LP 271
#define RP 272
#define LB 273
#define RB 274
#define LC 275
#define RC 276
#define QUESTION 277
#define DOT 278
#define ASSIGN 279
#define AT 280
#define ADDRESS 281
#define POWER 282
#define AND 283
#define OR 284
#define NOT 285
#define EQ 286
#define NE 287
#define LT 288
#define LE 289
#define GT 290
#define GE 291
#define SUB 292
#define SUB_ASSIGN 293
#define ADD 294
#define ADD_ASSIGN 295
#define ASTERISK_ASSIGN 296
#define DIV 297
#define DIV_ASSIGN 298
#define MOD 299
#define MOD_ASSIGN 300
#define INCREMENT 301
#define DECREMENT 302
#define ANNOTATION_IF 303
#define CLASS 304
#define STRUCT 305
#define DECLARE 306
#define SELECTOR 307
#define RETURN 308
#define IF 309
#define ELSE 310
#define FOR 311
#define IN 312
#define WHILE 313
#define DO 314
#define SWITCH 315
#define CASE 316
#define DEFAULT 317
#define BREAK 318
#define CONTINUE 319
#define PROPERTY 320
#define WEAK 321
#define STRONG 322
#define COPY 323
#define ASSIGN_MEM 324
#define NONATOMIC 325
#define ATOMIC 326
#define ASTERISK 327
#define VOID 328
#define BOOL_ 329
#define CHAR 330
#define U_INT 331
#define INT 332
#define DOUBLE 333
#define C_STRING 334
#define CLASS_ 335
#define SEL_ 336
#define ID 337
#define POINTER 338
#define BLOCK 339
#define __WEAK 340
#define __STRONG 341
#define STATIC 342
#define C_FUNCTION 343
#define TYPEDEF 344




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 14 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
{
	void	*identifier;
	void	*expression;
	void	*statement;
	void    *struct_entry;
	void	*dic_entry;
	void	*type_specifier;
	void	*one_case;
	void	*else_if;
	void	*class_definition;
	void	*declare_struct;
	void	*member_definition;
	void	*block_statement;
	void	*list;
	void	*method_name_item;
	void	*function_param;
	void	*declaration;
	MFAssignKind assignment_operator;
	MFPropertyModifier property_modifier_list;
    MFDeclarationModifier declaration_modifier;
}
/* Line 1529 of yacc.c.  */
#line 249 "/Users/ynwang/Desktop/Mango-master-4/MangoFixDemo/build/Pods.build/Debug-iphonesimulator/MangoFix.build/DerivedSources/y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

