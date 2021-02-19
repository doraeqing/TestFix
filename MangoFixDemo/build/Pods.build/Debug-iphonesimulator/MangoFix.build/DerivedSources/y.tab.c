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




/* Copy the first part of user declarations.  */
#line 1 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"

	#define YYDEBUG 1
	#define YYERROR_VERBOSE
	#import <Foundation/Foundation.h>
	#import "create.h"
	#import "mf_ast.h"
	

int yyerror(char const *str);
int yylex(void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
/* Line 193 of yacc.c.  */
#line 309 "/Users/ynwang/Desktop/Mango-master-4/MangoFixDemo/build/Pods.build/Debug-iphonesimulator/MangoFix.build/DerivedSources/y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 322 "/Users/ynwang/Desktop/Mango-master-4/MangoFixDemo/build/Pods.build/Debug-iphonesimulator/MangoFix.build/DerivedSources/y.tab.c"

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
#define YYFINAL  123
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1071

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  90
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  249
/* YYNRULES -- Number of states.  */
#define YYNSTATES  474

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   344

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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     6,     8,    11,    13,    15,    17,
      19,    20,    25,    39,    53,    55,    59,    60,    69,    70,
      80,    81,    93,    94,   107,   109,   113,   122,   130,   132,
     136,   138,   140,   142,   144,   146,   148,   150,   152,   157,
     162,   167,   172,   177,   182,   187,   192,   197,   202,   207,
     209,   211,   213,   215,   217,   219,   221,   223,   225,   227,
     229,   234,   237,   240,   242,   244,   246,   254,   262,   264,
     266,   268,   270,   273,   280,   282,   284,   286,   289,   291,
     293,   295,   297,   300,   304,   306,   308,   312,   314,   316,
     318,   320,   322,   324,   326,   332,   337,   339,   343,   345,
     349,   351,   355,   359,   361,   365,   369,   373,   377,   379,
     383,   387,   389,   393,   397,   401,   403,   406,   409,   411,
     414,   417,   419,   423,   427,   429,   433,   438,   442,   446,
     448,   452,   456,   458,   460,   463,   466,   469,   471,   475,
     477,   479,   481,   483,   485,   487,   489,   491,   493,   495,
     497,   500,   504,   508,   514,   521,   525,   530,   534,   539,
     541,   543,   545,   547,   549,   551,   553,   558,   561,   564,
     567,   570,   573,   575,   577,   582,   587,   591,   596,   598,
     600,   602,   608,   612,   619,   624,   627,   633,   635,   639,
     642,   645,   647,   649,   651,   653,   656,   660,   666,   669,
     674,   680,   688,   695,   704,   706,   709,   716,   725,   727,
     730,   735,   736,   740,   741,   743,   753,   763,   769,   777,
     786,   794,   797,   800,   804,   807,   808,   812,   813,   818,
     820,   823,   825,   827,   829,   831,   833,   835,   837,   839,
     841,   843,   845,   847,   849,   851,   853,   855,   857,   859
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      91,     0,    -1,    -1,    92,    -1,    93,    -1,    92,    93,
      -1,    97,    -1,    95,    -1,   173,    -1,   108,    -1,    -1,
      48,    16,   122,    17,    -1,    94,    51,    50,     3,    20,
       3,    13,     5,    15,     3,    13,    96,    21,    -1,    94,
      51,    50,     3,    20,     3,    13,    96,    15,     3,    13,
       5,    21,    -1,     3,    -1,    96,    15,     3,    -1,    -1,
      94,    49,     3,    13,     3,    20,    98,    21,    -1,    -1,
      94,    49,     3,    13,     3,    20,    99,   118,    21,    -1,
      -1,    94,    49,     3,    13,     3,    33,   102,    35,    20,
     100,    21,    -1,    -1,    94,    49,     3,    13,     3,    33,
     102,    35,    20,   101,   118,    21,    -1,     3,    -1,   102,
      15,     3,    -1,    94,    65,    16,   104,    17,   109,     3,
      14,    -1,    94,    65,    16,    17,   109,     3,    14,    -1,
     105,    -1,   104,    15,   105,    -1,   106,    -1,   107,    -1,
      66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,
      71,    -1,    89,    74,     3,    14,    -1,    89,    77,     3,
      14,    -1,    89,    76,     3,    14,    -1,    89,    78,     3,
      14,    -1,    89,    79,     3,    14,    -1,    89,    82,     3,
      14,    -1,    89,    84,     3,    14,    -1,    89,    80,     3,
      14,    -1,    89,    81,     3,    14,    -1,    89,    83,     3,
      14,    -1,    89,     3,     3,    14,    -1,    73,    -1,    74,
      -1,    77,    -1,    76,    -1,    78,    -1,    79,    -1,    82,
      -1,    80,    -1,    81,    -1,    84,    -1,    83,    -1,    88,
      33,   142,    35,    -1,     3,    72,    -1,    50,     3,    -1,
       3,    -1,   111,    -1,   112,    -1,    94,    37,    16,   109,
      17,   113,   168,    -1,    94,    39,    16,   109,    17,   113,
     168,    -1,   114,    -1,   115,    -1,     3,    -1,   116,    -1,
     115,   116,    -1,     3,    13,    16,   109,    17,     3,    -1,
     103,    -1,   110,    -1,   117,    -1,   118,   117,    -1,   120,
      -1,   121,    -1,     3,    -1,   143,    -1,   120,    13,    -1,
     121,   120,    13,    -1,   123,    -1,   125,    -1,   144,   124,
     125,    -1,    24,    -1,    38,    -1,    40,    -1,    41,    -1,
      43,    -1,    45,    -1,   126,    -1,   126,    22,   125,    13,
     125,    -1,   126,    22,    13,   125,    -1,   127,    -1,   126,
      29,   127,    -1,   128,    -1,   127,    28,   128,    -1,   129,
      -1,   128,    31,   129,    -1,   128,    32,   129,    -1,   130,
      -1,   129,    33,   130,    -1,   129,    34,   130,    -1,   129,
      35,   130,    -1,   129,    36,   130,    -1,   131,    -1,   130,
      39,   131,    -1,   130,    37,   131,    -1,   132,    -1,   131,
      72,   132,    -1,   131,    42,   132,    -1,   131,    44,   132,
      -1,   133,    -1,    30,   132,    -1,    37,   132,    -1,   144,
      -1,   144,    46,    -1,   144,    47,    -1,   123,    -1,   134,
      15,   123,    -1,   144,    13,   144,    -1,   135,    -1,   136,
      15,   135,    -1,    25,    20,   136,    21,    -1,    25,    20,
      21,    -1,     3,    13,   144,    -1,   138,    -1,   139,    15,
     138,    -1,    20,   139,    21,    -1,   143,    -1,     3,    -1,
      73,    72,    -1,    75,    72,    -1,    50,     3,    -1,   141,
      -1,   142,    15,   141,    -1,    82,    -1,    49,    -1,    80,
      -1,    68,    -1,    74,    -1,    77,    -1,    76,    -1,    78,
      -1,    81,    -1,    73,    -1,     3,    -1,    26,     3,    -1,
     144,    23,     3,    -1,   144,    23,   143,    -1,   144,    23,
     119,    16,    17,    -1,   144,    23,   119,    16,   134,    17,
      -1,   144,    16,    17,    -1,   144,    16,   134,    17,    -1,
      16,   122,    17,    -1,   144,    18,   122,    19,    -1,    11,
      -1,    12,    -1,     6,    -1,     4,    -1,     5,    -1,     9,
      -1,    10,    -1,    52,    16,   119,    17,    -1,    25,     6,
      -1,    25,     4,    -1,    25,     5,    -1,    25,    11,    -1,
      25,    12,    -1,     7,    -1,     8,    -1,    25,    16,   122,
      17,    -1,    25,    18,   134,    19,    -1,    25,    18,    19,
      -1,    88,    16,   122,    17,    -1,   137,    -1,   140,    -1,
     145,    -1,    27,   109,    16,    17,   168,    -1,    27,   109,
     168,    -1,    27,   109,    16,   146,    17,   168,    -1,    27,
      16,    17,   168,    -1,    27,   168,    -1,    27,    16,   146,
      17,   168,    -1,   147,    -1,   146,    15,   147,    -1,   109,
       3,    -1,   151,    14,    -1,    85,    -1,    86,    -1,    87,
      -1,   149,    -1,   150,   149,    -1,   150,   109,     3,    -1,
     150,   109,     3,    24,   122,    -1,   109,     3,    -1,   109,
       3,    24,   122,    -1,    54,    16,   122,    17,   168,    -1,
      54,    16,   122,    17,   168,    55,   168,    -1,    54,    16,
     122,    17,   168,   153,    -1,    54,    16,   122,    17,   168,
     153,    55,   168,    -1,   154,    -1,   153,   154,    -1,    55,
      54,    16,   122,    17,   168,    -1,    60,    16,   122,    17,
      20,   156,   158,    21,    -1,   157,    -1,   156,   157,    -1,
      61,   122,    13,   168,    -1,    -1,    62,    13,   168,    -1,
      -1,   122,    -1,    56,    16,   159,    14,   159,    14,   159,
      17,   168,    -1,    56,    16,   151,    14,   159,    14,   159,
      17,   168,    -1,    58,    16,   122,    17,   168,    -1,    59,
     168,    58,    16,   122,    17,    14,    -1,    56,    16,   109,
       3,    57,   122,    17,   168,    -1,    56,    16,     3,    57,
     122,    17,   168,    -1,    64,    14,    -1,    63,    14,    -1,
      53,   159,    14,    -1,   122,    14,    -1,    -1,    20,   169,
      21,    -1,    -1,    20,   170,   171,    21,    -1,   172,    -1,
     171,   172,    -1,   148,    -1,   152,    -1,   155,    -1,   160,
      -1,   163,    -1,   161,    -1,   162,    -1,   165,    -1,   164,
      -1,   166,    -1,   167,    -1,   148,    -1,   152,    -1,   155,
      -1,   160,    -1,   163,    -1,   161,    -1,   162,    -1,   167,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    83,    83,    84,    88,    89,    92,    97,   102,   107,
     112,   115,   122,   137,   154,   162,   175,   174,   187,   186,
     200,   199,   213,   212,   228,   235,   245,   254,   266,   267,
     274,   275,   278,   282,   286,   290,   296,   300,   306,   310,
     314,   318,   322,   326,   330,   334,   338,   342,   346,   352,
     356,   360,   364,   368,   372,   376,   380,   384,   388,   392,
     396,   401,   405,   409,   418,   419,   422,   433,   444,   445,
     448,   458,   465,   474,   485,   486,   489,   496,   505,   506,
     509,   510,   513,   519,   528,   531,   532,   542,   547,   551,
     555,   559,   563,   569,   570,   578,   587,   588,   597,   598,
     607,   608,   615,   624,   625,   632,   639,   646,   655,   656,
     663,   672,   673,   680,   687,   696,   697,   704,   713,   714,
     721,   730,   737,   746,   755,   762,   771,   778,   786,   795,
     802,   811,   820,   821,   822,   826,   830,   836,   843,   852,
     856,   860,   864,   868,   872,   876,   880,   884,   888,   894,
     901,   911,   919,   926,   939,   953,   960,   968,   972,   983,
     984,   985,   986,   987,   988,   989,   990,   996,  1003,  1011,
    1018,  1025,  1032,  1037,  1042,  1049,  1056,  1061,  1068,  1069,
    1070,  1076,  1085,  1094,  1104,  1111,  1118,  1129,  1136,  1145,
    1154,  1161,  1165,  1169,  1175,  1176,  1182,  1190,  1198,  1205,
    1217,  1224,  1232,  1240,  1251,  1258,  1267,  1276,  1286,  1293,
    1302,  1312,  1315,  1322,  1325,  1330,  1341,  1353,  1362,  1371,
    1380,  1391,  1399,  1407,  1415,  1425,  1424,  1436,  1435,  1450,
    1457,  1467,  1468,  1469,  1470,  1471,  1472,  1473,  1474,  1475,
    1476,  1477,  1480,  1481,  1482,  1483,  1484,  1485,  1486,  1487
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "DOUBLE_LITERAL",
  "STRING_LITERAL", "INTETER_LITERAL", "SELF", "SUPER", "NIL", "NULL_",
  "YES_", "NO_", "COLON", "SEMICOLON", "COMMA", "LP", "RP", "LB", "RB",
  "LC", "RC", "QUESTION", "DOT", "ASSIGN", "AT", "ADDRESS", "POWER", "AND",
  "OR", "NOT", "EQ", "NE", "LT", "LE", "GT", "GE", "SUB", "SUB_ASSIGN",
  "ADD", "ADD_ASSIGN", "ASTERISK_ASSIGN", "DIV", "DIV_ASSIGN", "MOD",
  "MOD_ASSIGN", "INCREMENT", "DECREMENT", "ANNOTATION_IF", "CLASS",
  "STRUCT", "DECLARE", "SELECTOR", "RETURN", "IF", "ELSE", "FOR", "IN",
  "WHILE", "DO", "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE",
  "PROPERTY", "WEAK", "STRONG", "COPY", "ASSIGN_MEM", "NONATOMIC",
  "ATOMIC", "ASTERISK", "VOID", "BOOL_", "CHAR", "U_INT", "INT", "DOUBLE",
  "C_STRING", "CLASS_", "SEL_", "ID", "POINTER", "BLOCK", "__WEAK",
  "__STRONG", "STATIC", "C_FUNCTION", "TYPEDEF", "$accept", "compile_util",
  "definition_list", "definition", "annotation_if", "declare_struct",
  "identifier_list", "class_definition", "@1", "@2", "@3", "@4",
  "protocol_list", "property_definition", "property_modifier_list",
  "property_modifier", "property_rc_modifier", "property_atomic_modifier",
  "typedef_definition", "type_specifier", "method_definition",
  "instance_method_definition", "class_method_definition", "method_name",
  "method_name_1", "method_name_2", "method_name_item",
  "member_definition", "member_definition_list", "selector", "selector_1",
  "selector_2", "expression", "assign_expression", "assignment_operator",
  "ternary_operator_expression", "logic_or_expression",
  "logic_and_expression", "equality_expression", "relational_expression",
  "additive_expression", "multiplication_expression", "unary_expression",
  "postfix_expression", "expression_list", "dic_entry", "dic_entry_list",
  "dic", "struct_entry", "struct_entry_list", "struct_literal",
  "c_type_identier", "c_type_identier_list", "key_work_identifier",
  "primary_expression", "block_body", "function_param_list",
  "function_param", "declaration_statement", "declaration_modifier",
  "declaration_modifier_list", "declaration", "if_statement",
  "else_if_list", "else_if", "switch_statement", "case_list", "one_case",
  "default_opt", "expression_opt", "for_statement", "while_statement",
  "do_while_statement", "foreach_statement", "continue_statement",
  "break_statement", "return_statement", "expression_statement",
  "block_statement", "@5", "@6", "statement_list", "statement",
  "top_statement", 0
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      94,    94,    95,    95,    96,    96,    98,    97,    99,    97,
     100,    97,   101,    97,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   112,   113,   113,
     114,   115,   115,   116,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   124,   124,   124,
     124,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   128,   129,   129,   129,   129,   129,   130,   130,
     130,   131,   131,   131,   131,   132,   132,   132,   133,   133,
     133,   134,   134,   135,   136,   136,   137,   137,   138,   139,
     139,   140,   141,   141,   141,   141,   141,   142,   142,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   145,   145,   145,   145,   145,   145,   146,   146,   147,
     148,   149,   149,   149,   150,   150,   151,   151,   151,   151,
     152,   152,   152,   152,   153,   153,   154,   155,   156,   156,
     157,   158,   158,   159,   159,   160,   160,   161,   162,   163,
     163,   164,   165,   166,   167,   169,   168,   170,   168,   171,
     171,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   173,   173,   173,   173,   173,   173,   173,   173
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     1,     1,     1,     1,
       0,     4,    13,    13,     1,     3,     0,     8,     0,     9,
       0,    11,     0,    12,     1,     3,     8,     7,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     2,     2,     1,     1,     1,     7,     7,     1,     1,
       1,     1,     2,     6,     1,     1,     1,     2,     1,     1,
       1,     1,     2,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     5,     4,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     2,     2,     1,     2,
       2,     1,     3,     3,     1,     3,     4,     3,     3,     1,
       3,     3,     1,     1,     2,     2,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     5,     6,     3,     4,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     2,     2,
       2,     2,     1,     1,     4,     4,     3,     4,     1,     1,
       1,     5,     3,     6,     4,     2,     5,     1,     3,     2,
       2,     1,     1,     1,     1,     2,     3,     5,     2,     4,
       5,     7,     6,     8,     1,     2,     6,     8,     1,     2,
       4,     0,     3,     0,     1,     9,     9,     5,     7,     8,
       7,     2,     2,     3,     2,     0,     3,     0,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      10,   149,   162,   163,   161,   172,   173,   164,   165,   159,
     160,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,    50,    52,    51,
      53,    54,    56,    57,    55,    59,    58,   191,   192,   193,
       0,     0,     0,    10,     4,     0,     7,     6,     9,     0,
       0,    84,    85,    93,    96,    98,   100,   103,   108,   111,
     115,   178,   179,   118,   180,   242,   194,     0,     0,   243,
     244,   245,   247,   248,   246,   249,     8,    61,   149,     0,
       0,     0,   129,     0,   168,   169,   167,   170,   171,     0,
       0,     0,   150,    63,     0,   227,     0,     0,   185,   116,
     118,   117,     0,    62,     0,     0,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     5,     0,     0,   198,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,    89,    90,
      91,    92,   119,   120,     0,     0,   195,   190,   157,     0,
       0,   131,     0,   176,   121,     0,   127,   124,     0,     0,
       0,     0,     0,   187,     0,     0,     0,   182,     0,    80,
     140,   142,   148,   143,   145,   144,   146,   141,   147,   139,
       0,    78,    79,    81,     0,   149,     0,   214,     0,     0,
       0,     0,     0,     0,   133,     0,   148,     0,   137,     0,
     132,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    97,    99,   101,
     102,   104,   105,   106,   107,   110,   109,   113,   114,   112,
     155,     0,     0,   151,     0,   152,    86,   196,   128,   130,
     174,     0,   175,     0,   126,     0,   184,   189,     0,     0,
     226,   213,     0,     0,   231,   232,   233,   234,   236,   237,
     235,   239,   238,   240,   241,     0,   229,     0,     0,    11,
     166,    82,     0,     0,     0,   198,   213,   213,     0,     0,
       0,   177,   136,   134,   135,     0,    60,    48,    38,    40,
      39,    41,    42,    45,    46,    43,    47,    44,     0,     0,
     199,    95,     0,   156,   158,     0,     0,   122,   125,   123,
     188,   186,     0,   222,   221,   228,   230,   181,     0,    83,
     200,     0,     0,     0,     0,   217,     0,     0,   138,     0,
       0,    94,   153,     0,   197,   223,   183,     0,   202,   204,
       0,     0,   213,   213,     0,     0,   211,   208,    18,     0,
       0,   154,     0,   201,     0,   205,   220,     0,     0,     0,
     218,     0,     0,   209,     0,     0,    10,    24,     0,     0,
       0,   203,   219,     0,     0,     0,     0,   207,    17,     0,
      74,    75,    64,    65,    76,    10,     0,     0,    14,     0,
       0,     0,   216,   215,   210,   212,     0,     0,     0,    19,
      77,    25,    22,     0,     0,     0,     0,     0,     0,     0,
      10,     0,    15,   206,     0,     0,     0,    32,    33,    34,
      35,    36,    37,     0,    28,    30,    31,    21,    10,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,    70,
       0,    68,    69,    71,     0,     0,    29,     0,     0,    12,
      13,     0,    66,     0,    72,    67,    27,     0,    15,     0,
      26,     0,     0,    73
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,    43,    44,   389,    46,   400,    47,   375,   376,
     419,   420,   378,   390,   433,   434,   435,   436,    48,    49,
     391,   392,   393,   450,   451,   452,   453,   394,   395,   190,
     191,   192,   197,    51,   154,    52,    53,    54,    55,    56,
      57,    58,    59,    60,   165,   167,   168,    61,    82,    83,
      62,   208,   209,   193,    63,    64,   172,   173,    65,    66,
      67,    68,    69,   348,   349,    70,   356,   357,   374,   199,
      71,    72,    73,    74,   271,   272,   273,    75,    98,   174,
     175,   275,   276,    76
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -379
static const yytype_int16 yypact[] =
{
     409,    11,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,   832,    58,    83,    63,   899,   832,   832,   130,   147,
     144,   164,   173,   176,     6,   192,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
      23,    75,   133,   499,  -379,    59,  -379,  -379,  -379,   226,
     224,  -379,  -379,    20,   225,    49,   188,   126,   -21,  -379,
    -379,  -379,  -379,   432,  -379,  -379,  -379,   850,   238,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   239,
     240,   243,  -379,    42,  -379,  -379,  -379,  -379,  -379,   832,
     303,   869,  -379,   186,   952,   241,   228,    80,  -379,  -379,
      18,  -379,   832,  -379,   638,   832,   190,   832,   201,   832,
     832,   551,   277,   278,   279,   280,   281,   282,   283,   284,
     286,   287,   288,  -379,  -379,   289,   244,   271,  -379,   370,
     832,   832,   832,   832,   832,   832,   832,   832,   832,   832,
     832,   832,   832,   758,   832,   989,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,   832,   293,  -379,  -379,  -379,   936,
      58,  -379,   285,  -379,  -379,   124,  -379,  -379,    69,   191,
       6,   294,   220,  -379,   295,   672,   968,  -379,   300,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
     301,   290,   638,  -379,   304,    10,   296,  -379,   311,   312,
     314,   316,   317,   318,  -379,   297,   232,   265,  -379,     9,
    -379,   324,   325,   328,   329,   331,   332,   333,   334,   335,
     336,   337,   339,   298,   832,   832,   340,   225,    49,   188,
     188,   126,   126,   126,   126,   -21,   -21,  -379,  -379,  -379,
    -379,   229,   338,    30,   342,    89,  -379,   330,   146,  -379,
    -379,   832,  -379,   936,  -379,   936,  -379,  -379,    94,     6,
    -379,   832,   350,   351,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,   586,  -379,     6,   230,  -379,
    -379,  -379,   343,     6,   832,    -2,   832,   832,     6,   832,
     346,  -379,  -379,  -379,  -379,   551,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   364,   348,
    -379,  -379,   832,  -379,  -379,   795,   832,  -379,  -379,   146,
    -379,  -379,   355,  -379,  -379,  -379,  -379,  -379,     6,  -379,
     315,   354,   832,   358,   371,  -379,   372,   326,  -379,    65,
     385,  -379,  -379,   233,  -379,  -379,  -379,     0,   344,  -379,
       6,   376,   832,   832,   380,   832,   151,  -379,   377,   400,
     391,  -379,   389,  -379,     0,  -379,  -379,     6,   393,   406,
    -379,   395,   411,  -379,   405,   407,   384,  -379,    13,   200,
     832,  -379,  -379,     6,     6,     6,     6,  -379,  -379,   -12,
    -379,  -379,  -379,  -379,  -379,    -3,   403,   413,  -379,   422,
     423,   424,  -379,  -379,  -379,  -379,   426,   427,   428,  -379,
    -379,  -379,   419,   442,   444,     6,    94,    94,     2,   430,
     384,   436,   439,  -379,   443,   445,    94,  -379,  -379,  -379,
    -379,  -379,  -379,   234,  -379,  -379,  -379,  -379,    14,   450,
     459,   463,   463,   468,   117,    94,  -379,    71,   453,   467,
       6,  -379,   473,  -379,     6,   470,  -379,   478,   497,  -379,
    -379,   485,  -379,   467,  -379,  -379,  -379,   498,  -379,    94,
    -379,   496,   511,  -379
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,  -379,  -379,   474,    16,  -379,    77,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,    74,  -379,  -379,  -379,   -15,
    -379,  -379,  -379,    78,  -379,  -379,    70,  -378,   101,   378,
     341,  -379,     4,   -85,  -379,  -121,  -379,   397,   399,    86,
      97,    87,    -6,  -379,  -134,   275,  -379,  -379,   374,  -379,
    -379,   236,  -379,  -105,   -14,  -379,   356,   292,  -168,   471,
    -379,   429,  -163,  -379,   189,  -146,  -379,   183,  -379,  -211,
    -145,  -144,  -143,  -138,  -379,  -379,  -379,  -137,   -23,  -379,
    -379,  -379,   266,  -379
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -226
static const yytype_int16 yytable[] =
{
      97,   108,   100,   100,    50,   164,   210,   264,   226,   241,
      99,   101,   265,   -63,   -63,    80,    45,   410,   409,   426,
      95,   140,   224,   141,   295,   406,    95,   407,   396,   266,
     267,   268,   269,   246,   143,   446,   144,   270,   274,   110,
     245,   145,   129,   -80,   296,    18,   -80,    50,   397,   130,
     322,   142,   155,   408,   362,   332,   111,   160,   164,    45,
     410,    81,    18,   161,   152,   153,    92,   284,   427,   428,
     429,   430,   431,   432,   177,   333,   334,   169,   112,   171,
     132,   133,    77,    77,   253,   358,   458,    84,    85,    86,
     254,   196,   459,   162,    87,    88,   176,    93,   359,    89,
      95,    90,   -81,    91,   311,   -81,   178,   264,   125,   194,
     126,   200,   265,   202,   203,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   266,
     267,   268,   269,   123,   237,   238,   239,   270,   274,   251,
     100,   368,   369,   252,    19,   248,   102,   256,   242,   113,
     103,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     104,   171,   143,   138,   144,   139,   317,    26,    27,   145,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    50,
     105,   343,    96,   427,   428,   429,   430,   431,   432,   106,
     210,   341,   107,   195,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   398,   255,   399,    11,   143,   109,   144,
      12,   100,   355,   372,   145,    13,    14,    15,   229,   230,
      16,   134,   135,   136,   137,   235,   236,    17,   310,   127,
     164,   231,   232,   233,   234,   258,   321,   259,   128,   169,
      19,   319,    20,   171,   251,   258,   313,   328,   251,   444,
     361,   445,   157,   131,   327,   110,   159,   158,    77,   201,
     330,   111,  -225,    26,    27,   335,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    50,
     211,   212,   213,   214,   215,   216,   217,   218,   331,   219,
     220,   221,   222,   336,   223,   224,   247,   257,   100,   285,
     292,   309,   250,   281,   293,   346,    78,     2,     3,     4,
       5,     6,     7,     8,     9,    10,   260,   279,   280,    11,
     344,   283,   163,    12,   363,   286,   287,   366,    13,    14,
      15,   288,   289,    16,   290,   291,   351,   294,   297,   298,
      17,   381,   299,   300,   382,   301,   302,   303,   304,   305,
     306,   307,   308,   312,   316,    20,   329,   314,   315,   371,
     402,   403,   404,   405,   323,   324,   337,   339,   340,   345,
     347,   350,   352,    78,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   225,   401,   353,    11,   355,   360,   354,
      12,    79,   423,   367,   370,    13,    14,    15,   -16,   364,
      16,   424,   425,   377,   379,   380,   411,    17,   385,    -2,
     383,   443,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    20,   384,   386,    11,   387,   462,   388,    12,
     457,   465,    18,   412,    13,    14,    15,   413,   414,    16,
     -20,   415,   416,   417,   418,   421,    17,   422,   143,   439,
     144,   437,   440,   398,   471,   145,   146,    18,    79,    19,
     441,    20,   442,    21,   448,    22,   449,    23,    24,    25,
     147,   455,   148,   149,   460,   150,   463,   151,   152,   153,
     461,   467,    26,    27,   466,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -3,
     468,   469,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,   470,   472,   473,    11,   447,   124,   456,    12,
     454,   438,   464,   244,    13,    14,    15,   227,   318,    16,
     228,   338,   278,   282,   249,   198,    17,   365,   156,   373,
       0,   326,     0,     0,     0,     0,     0,    18,     0,    19,
     320,    20,     0,    21,   204,    22,     0,    23,    24,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
     180,   205,    11,     0,     0,     0,    12,   325,     0,     0,
       0,    13,    14,    15,     0,     0,    16,     0,     0,   181,
       0,     0,     0,    17,   206,   183,   207,   184,   185,   186,
       0,   187,   188,   189,     0,     0,    19,     0,    20,   261,
      21,   179,    22,     0,    23,    24,    25,     0,     0,   262,
     263,     0,     0,     0,     0,     0,     0,     0,     0,    26,
      27,     0,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,   180,    11,     0,
       0,     0,    12,     0,     0,     0,     0,    13,    14,    15,
       0,     0,    16,     0,     0,     0,   181,     0,     0,    17,
       0,   182,   183,     0,   184,   185,   186,     0,   187,   188,
     189,     0,    19,     0,    20,   261,    21,     0,    22,     0,
      23,    24,    25,     0,     0,   262,   263,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    78,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    11,   240,     0,     0,    12,     0,
       0,     0,     0,    13,    14,    15,     0,     0,    16,     0,
       0,     0,     0,     0,     0,    17,     0,     0,    78,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
      20,    11,   342,     0,     0,    12,     0,     0,     0,     0,
      13,    14,    15,     0,     0,    16,     0,     0,     0,     0,
       0,     0,    17,     0,     0,    78,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,    79,    20,    11,     0,
       0,     0,    12,    93,     0,     0,     0,    13,    14,    15,
       0,     0,    16,     0,     0,     0,     0,     0,     0,    17,
       0,     0,    78,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,    79,    20,    11,     0,     0,     0,    12,
     166,     0,     0,     0,    13,    14,    15,     0,     0,     0,
      19,     0,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,    95,
      79,    20,     0,    26,    27,     0,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    96,    78,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    19,
       0,     0,    11,     0,     0,    93,    12,    79,     0,     0,
       0,    13,    14,    15,     0,     0,     0,     0,     0,   170,
       0,    93,    26,    27,     0,    28,    29,    30,    31,    32,
      33,    34,    35,    36,     0,   277,     0,    96,    20,     0,
       0,     0,   243,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,     0,
       0,     0,     0,     0,    79,    26,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,   180,     0,
      96,    26,    27,     0,    28,    29,    30,    31,    32,    33,
      34,    35,    36,     0,     0,     0,    96,   181,     0,     0,
       0,     0,   182,   183,     0,   184,   185,   186,     0,   187,
     188,   189
};

static const yytype_int16 yycheck[] =
{
      15,    24,    16,    17,     0,    90,   111,   175,   129,   143,
      16,    17,   175,     3,     3,    11,     0,   395,    21,    17,
      20,    42,    24,    44,    15,    37,    20,    39,    15,   175,
     175,   175,   175,   154,    16,    21,    18,   175,   175,    16,
     145,    23,    22,    13,    35,    48,    16,    43,    35,    29,
     261,    72,    67,    65,    54,    57,    33,    15,   143,    43,
     438,     3,    48,    21,    46,    47,     3,    57,    66,    67,
      68,    69,    70,    71,    97,   286,   287,    91,     3,    94,
      31,    32,    72,    72,    15,    20,    15,     4,     5,     6,
      21,   106,    21,    89,    11,    12,    16,     3,    33,    16,
      20,    18,    13,    20,   225,    16,   102,   275,    49,   105,
      51,   107,   275,   109,   110,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   275,
     275,   275,   275,     0,   140,   141,   142,   275,   275,    15,
     154,   352,   353,    19,    50,   159,    16,   170,   144,    74,
       3,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      16,   176,    16,    37,    18,    39,   251,    73,    74,    23,
      76,    77,    78,    79,    80,    81,    82,    83,    84,   175,
      16,   315,    88,    66,    67,    68,    69,    70,    71,    16,
     295,   312,    16,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,     3,    13,     5,    16,    16,    16,    18,
      20,   225,    61,    62,    23,    25,    26,    27,   132,   133,
      30,    33,    34,    35,    36,   138,   139,    37,   224,     3,
     315,   134,   135,   136,   137,    15,   259,    17,    14,   253,
      50,   255,    52,   258,    15,    15,    17,    17,    15,    15,
      17,    17,    14,    28,   277,    16,    13,    17,    72,    58,
     283,    33,    21,    73,    74,   288,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   275,
       3,     3,     3,     3,     3,     3,     3,     3,   284,     3,
       3,     3,     3,   289,    50,    24,     3,     3,   312,     3,
       3,     3,    17,    13,    72,   328,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    21,    17,    17,    16,
     316,    17,    19,    20,   347,    14,    14,   350,    25,    26,
      27,    17,    16,    30,    17,    17,   332,    72,    14,    14,
      37,   364,    14,    14,   367,    14,    14,    14,    14,    14,
      14,    14,    13,    13,    24,    52,    13,    19,    16,   355,
     383,   384,   385,   386,    14,    14,    20,     3,    20,    14,
      55,    17,    14,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,   380,    14,    16,    61,     3,    17,
      20,    88,   415,    17,    14,    25,    26,    27,    21,    55,
      30,   416,   417,     3,    13,    16,     3,    37,    13,     0,
      17,   426,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    52,    17,    13,    16,    21,   450,    21,    20,
     445,   454,    48,    20,    25,    26,    27,    15,    15,    30,
      21,    17,    16,    16,    16,     3,    37,     3,    16,    13,
      18,    21,    13,     3,   469,    23,    24,    48,    88,    50,
      17,    52,    17,    54,     5,    56,     3,    58,    59,    60,
      38,     3,    40,    41,    21,    43,     3,    45,    46,    47,
      13,     3,    73,    74,    14,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
       3,    16,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    14,    17,     3,    16,   439,    43,   444,    20,
     442,   420,   452,   145,    25,    26,    27,   130,   253,    30,
     131,   295,   176,   192,   160,   106,    37,   348,    67,   356,
      -1,   275,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
     258,    52,    -1,    54,     3,    56,    -1,    58,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      49,    50,    16,    -1,    -1,    -1,    20,    21,    -1,    -1,
      -1,    25,    26,    27,    -1,    -1,    30,    -1,    -1,    68,
      -1,    -1,    -1,    37,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    -1,    -1,    50,    -1,    52,    53,
      54,     3,    56,    -1,    58,    59,    60,    -1,    -1,    63,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    -1,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    -1,    49,    16,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    25,    26,    27,
      -1,    -1,    30,    -1,    -1,    -1,    68,    -1,    -1,    37,
      -1,    73,    74,    -1,    76,    77,    78,    -1,    80,    81,
      82,    -1,    50,    -1,    52,    53,    54,    -1,    56,    -1,
      58,    59,    60,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    25,    26,    27,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    -1,    -1,
      52,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      25,    26,    27,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    -1,    88,    52,    16,    -1,
      -1,    -1,    20,     3,    -1,    -1,    -1,    25,    26,    27,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    88,    52,    16,    -1,    -1,    -1,    20,
      21,    -1,    -1,    -1,    25,    26,    27,    -1,    -1,    -1,
      50,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    -1,    -1,    -1,    20,
      88,    52,    -1,    73,    74,    -1,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    50,
      -1,    -1,    16,    -1,    -1,     3,    20,    88,    -1,    -1,
      -1,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    17,
      -1,     3,    73,    74,    -1,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    17,    -1,    88,    52,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    88,    73,    74,    -1,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    49,    -1,
      88,    73,    74,    -1,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    88,    68,    -1,    -1,
      -1,    -1,    73,    74,    -1,    76,    77,    78,    -1,    80,
      81,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    16,    20,    25,    26,    27,    30,    37,    48,    50,
      52,    54,    56,    58,    59,    60,    73,    74,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    91,    92,    93,    94,    95,    97,   108,   109,
     122,   123,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   137,   140,   144,   145,   148,   149,   150,   151,   152,
     155,   160,   161,   162,   163,   167,   173,    72,     3,    88,
     122,     3,   138,   139,     4,     5,     6,    11,    12,    16,
      18,    20,     3,     3,    16,    20,    88,   109,   168,   132,
     144,   132,    16,     3,    16,    16,    16,    16,   168,    16,
      16,    33,     3,    74,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,    93,    49,    51,     3,    14,    22,
      29,    28,    31,    32,    33,    34,    35,    36,    37,    39,
      42,    44,    72,    16,    18,    23,    24,    38,    40,    41,
      43,    45,    46,    47,   124,   109,   149,    14,    17,    13,
      15,    21,   122,    19,   123,   134,    21,   135,   136,   144,
      17,   109,   146,   147,   169,   170,    16,   168,   122,     3,
      49,    68,    73,    74,    76,    77,    78,    80,    81,    82,
     119,   120,   121,   143,   122,     3,   109,   122,   151,   159,
     122,    58,   122,   122,     3,    50,    73,    75,   141,   142,
     143,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,    50,    24,    13,   125,   127,   128,   129,
     129,   130,   130,   130,   130,   131,   131,   132,   132,   132,
      17,   134,   122,     3,   119,   143,   125,     3,   144,   138,
      17,    15,    19,    15,    21,    13,   168,     3,    15,    17,
      21,    53,    63,    64,   148,   152,   155,   160,   161,   162,
     163,   164,   165,   166,   167,   171,   172,    17,   146,    17,
      17,    13,   120,    17,    57,     3,    14,    14,    17,    16,
      17,    17,     3,    72,    72,    15,    35,    14,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    13,     3,
     122,   125,    13,    17,    19,    16,    24,   123,   135,   144,
     147,   168,   159,    14,    14,    21,   172,   168,    17,    13,
     168,   122,    57,   159,   159,   168,   122,    20,   141,     3,
      20,   125,    17,   134,   122,    14,   168,    55,   153,   154,
      17,   122,    14,    14,    17,    61,   156,   157,    20,    33,
       3,    17,    54,   168,    55,   154,   168,    17,   159,   159,
      14,   122,    62,   157,   158,    98,    99,     3,   102,    13,
      16,   168,   168,    17,    17,    13,    13,    21,    21,    94,
     103,   110,   111,   112,   117,   118,    15,    35,     3,     5,
      96,   122,   168,   168,   168,   168,    37,    39,    65,    21,
     117,     3,    20,    15,    15,    17,    16,    16,    16,   100,
     101,     3,     3,   168,   109,   109,    17,    66,    67,    68,
      69,    70,    71,   104,   105,   106,   107,    21,   118,    13,
      13,    17,    17,   109,    15,    17,    21,    96,     5,     3,
     113,   114,   115,   116,   113,     3,   105,   109,    15,    21,
      21,    13,   168,     3,   116,   168,    14,     3,     3,    16,
      14,   109,    17,     3
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
        case 6:
#line 93 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFClassDefinition *classDefinition = (__bridge_transfer YTXMFClassDefinition *)(yyvsp[(1) - (1)].class_definition);
				mf_add_class_definition(classDefinition);
			}
    break;

  case 7:
#line 98 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFStructDeclare *structDeclare = (__bridge_transfer YTXMFStructDeclare *)(yyvsp[(1) - (1)].declare_struct);
				mf_add_struct_declare(structDeclare);
			}
    break;

  case 8:
#line 103 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFStatement *statement = (__bridge_transfer YTXMFStatement *)(yyvsp[(1) - (1)].statement);
				mf_add_statement(statement);
			}
    break;

  case 10:
#line 112 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.expression) = nil;
			}
    break;

  case 11:
#line 116 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.expression) = (yyvsp[(3) - (4)].expression);
			}
    break;

  case 12:
#line 126 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (13)].expression);
				NSString *structName = (__bridge_transfer NSString *)(yyvsp[(4) - (13)].identifier);
				NSString *typeEncodingKey = (__bridge_transfer NSString *)(yyvsp[(6) - (13)].identifier);
                YTXMFExpression *typeEncodingValueExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(8) - (13)].expression);
				NSString *keysKey = (__bridge_transfer NSString *)(yyvsp[(10) - (13)].identifier);
				NSArray *keysValue = (__bridge_transfer NSArray *)(yyvsp[(12) - (13)].list);
				YTXMFStructDeclare *structDeclare = mf_create_struct_declare(annotaionIfConditionExpr, structName, typeEncodingKey, typeEncodingValueExpr, keysKey, keysValue);
				(yyval.declare_struct) = (__bridge_retained void *)structDeclare;
				
			}
    break;

  case 13:
#line 141 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (13)].expression);
				NSString *structName = (__bridge_transfer NSString *)(yyvsp[(4) - (13)].identifier);
				NSString *keysKey = (__bridge_transfer NSString *)(yyvsp[(6) - (13)].identifier);
				NSArray *keysValue = (__bridge_transfer NSArray *)(yyvsp[(8) - (13)].list);
				NSString *typeEncodingKey = (__bridge_transfer NSString *)(yyvsp[(10) - (13)].identifier);
                YTXMFExpression *typeEncodingValueExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(12) - (13)].expression);
				YTXMFStructDeclare *structDeclare = mf_create_struct_declare(annotaionIfConditionExpr, structName, typeEncodingKey, typeEncodingValueExpr, keysKey, keysValue);
				(yyval.declare_struct) = (__bridge_retained void *)structDeclare;
				
			}
    break;

  case 14:
#line 155 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(1) - (1)].identifier);
				[list addObject:identifier];
				(yyval.list) = (__bridge_retained void *)list;
				
			}
    break;

  case 15:
#line 163 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
				NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].identifier);
				[list addObject:identifier];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 16:
#line 175 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (6)].expression);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(3) - (6)].identifier);
				NSString *superNmae = (__bridge_transfer NSString *)(yyvsp[(5) - (6)].identifier);
				mf_start_class_definition(annotaionIfConditionExpr, name, superNmae,nil);
			}
    break;

  case 17:
#line 182 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFClassDefinition *classDefinition = mf_end_class_definition(nil);
				(yyval.class_definition) = (__bridge_retained void *)classDefinition;
			}
    break;

  case 18:
#line 187 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (6)].expression);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(3) - (6)].identifier);
				NSString *superNmae = (__bridge_transfer NSString *)(yyvsp[(5) - (6)].identifier);
				mf_start_class_definition(annotaionIfConditionExpr, name, superNmae,nil);
			}
    break;

  case 19:
#line 194 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSArray *members = (__bridge_transfer NSArray *)(yyvsp[(8) - (9)].list);
				YTXMFClassDefinition *classDefinition = mf_end_class_definition(members);
				(yyval.class_definition) = (__bridge_retained void *)classDefinition;
			}
    break;

  case 20:
#line 200 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (9)].expression);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(3) - (9)].identifier);
				NSString *superNmae = (__bridge_transfer NSString *)(yyvsp[(5) - (9)].identifier);
				NSArray *protocolNames = (__bridge_transfer NSArray *)(yyvsp[(7) - (9)].list);
				mf_start_class_definition(annotaionIfConditionExpr, name, superNmae,protocolNames);
			}
    break;

  case 21:
#line 208 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFClassDefinition *classDefinition = mf_end_class_definition(nil);
				(yyval.class_definition) = (__bridge_retained void *)classDefinition;
			}
    break;

  case 22:
#line 213 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (9)].expression);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(3) - (9)].identifier);
				NSString *superNmae = (__bridge_transfer NSString *)(yyvsp[(5) - (9)].identifier);
				NSArray *protocolNames = (__bridge_transfer NSArray *)(yyvsp[(7) - (9)].list);
				mf_start_class_definition(annotaionIfConditionExpr, name, superNmae,protocolNames);
			}
    break;

  case 23:
#line 221 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSArray *members = (__bridge_transfer NSArray *)(yyvsp[(11) - (12)].list);
				YTXMFClassDefinition *classDefinition = mf_end_class_definition(members);
				(yyval.class_definition) = (__bridge_retained void *)classDefinition;
			}
    break;

  case 24:
#line 229 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(1) - (1)].identifier);
				[list addObject:identifier];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 25:
#line 236 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
				NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].identifier);
				[list addObject:identifier];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 26:
#line 246 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (8)].expression);
				MFPropertyModifier modifier = (yyvsp[(4) - (8)].property_modifier_list);
				YTXMFTypeSpecifier *typeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(6) - (8)].type_specifier);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(7) - (8)].identifier);
				MFPropertyDefinition *propertyDefinition = mf_create_property_definition(annotaionIfConditionExpr, modifier, typeSpecifier, name);
				(yyval.member_definition) = (__bridge_retained void *)propertyDefinition;
			}
    break;

  case 27:
#line 255 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (7)].expression);
				YTXMFTypeSpecifier *typeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(5) - (7)].type_specifier);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(6) - (7)].identifier);
				MFPropertyDefinition *propertyDefinition = mf_create_property_definition(annotaionIfConditionExpr, 0x00, typeSpecifier, name);
				(yyval.member_definition) = (__bridge_retained void *)propertyDefinition;
			}
    break;

  case 29:
#line 268 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = (yyvsp[(1) - (3)].property_modifier_list) | (yyvsp[(3) - (3)].property_modifier_list);
			}
    break;

  case 32:
#line 279 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = MFPropertyModifierMemWeak;
			}
    break;

  case 33:
#line 283 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = MFPropertyModifierMemStrong;
			}
    break;

  case 34:
#line 287 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = MFPropertyModifierMemCopy;
			}
    break;

  case 35:
#line 291 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = MFPropertyModifierMemAssign;
			}
    break;

  case 36:
#line 297 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = MFPropertyModifierNonatomic;
			}
    break;

  case 37:
#line 301 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.property_modifier_list) = MFPropertyModifierAtomic;
			}
    break;

  case 38:
#line 307 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_BOOL, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 39:
#line 311 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_INT, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 40:
#line 315 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_U_INT, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 41:
#line 319 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_DOUBLE, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 42:
#line 323 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_C_STRING, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 43:
#line 327 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_OBJECT, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 44:
#line 331 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_BLOCK, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 45:
#line 335 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_CLASS, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 46:
#line 339 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_SEL, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 47:
#line 343 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef(MF_TYPE_POINTER, (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 48:
#line 347 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                mf_add_typedef_from_alias((__bridge_transfer NSString *)(yyvsp[(2) - (4)].identifier),(__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier));
            }
    break;

  case 49:
#line 353 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_VOID);
			}
    break;

  case 50:
#line 357 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_BOOL);
			}
    break;

  case 51:
#line 361 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_INT);
			}
    break;

  case 52:
#line 365 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_U_INT);
			}
    break;

  case 53:
#line 369 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_DOUBLE);
			}
    break;

  case 54:
#line 373 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_C_STRING);
			}
    break;

  case 55:
#line 377 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_OBJECT);
			}
    break;

  case 56:
#line 381 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_CLASS);
			}
    break;

  case 57:
#line 385 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_SEL);
			}
    break;

  case 58:
#line 389 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_BLOCK);
			}
    break;

  case 59:
#line 393 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_POINTER);
			}
    break;

  case 60:
#line 397 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                NSArray *typeList = (__bridge_transfer NSArray *)(yyvsp[(3) - (4)].list);
                (yyval.type_specifier) =  (__bridge_retained void *)mf_create_cfuntion_type_specifier(typeList);
            }
    break;

  case 61:
#line 402 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_type_specifier(MF_TYPE_OBJECT);
			}
    break;

  case 62:
#line 406 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.type_specifier) =  (__bridge_retained void *)mf_create_struct_type_specifier((__bridge_transfer NSString *)(yyvsp[(2) - (2)].identifier));
			}
    break;

  case 63:
#line 410 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypedefTable *typedefTable = [YTXMFTypedefTable shareInstance];
                MFTypeSpecifierKind type = [typedefTable typeWtihIdentifer:(__bridge_transfer NSString *)(yyvsp[(1) - (1)].identifier)];
				(yyval.type_specifier) = (__bridge_retained void *)mf_create_type_specifier(type);
			}
    break;

  case 66:
#line 423 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (7)].expression);
				YTXMFTypeSpecifier *returnTypeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(4) - (7)].type_specifier);
				NSArray *items = (__bridge_transfer NSArray *)(yyvsp[(6) - (7)].list);
				YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(7) - (7)].block_statement);
				MFMethodDefinition *methodDefinition = mf_create_method_definition(annotaionIfConditionExpr, NO, returnTypeSpecifier, items, block);
				(yyval.member_definition) = (__bridge_retained void *)methodDefinition;
			}
    break;

  case 67:
#line 434 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *annotaionIfConditionExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (7)].expression);
				YTXMFTypeSpecifier *returnTypeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(4) - (7)].type_specifier);
				NSArray *items = (__bridge_transfer NSArray *)(yyvsp[(6) - (7)].list);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(7) - (7)].block_statement);
				MFMethodDefinition *methodDefinition = mf_create_method_definition(annotaionIfConditionExpr, YES, returnTypeSpecifier, items, block);
				(yyval.member_definition) = (__bridge_retained void *)methodDefinition;
			}
    break;

  case 70:
#line 449 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(1) - (1)].identifier);
				MFMethodNameItem *item = mf_create_method_name_item(name, nil, nil);
				NSMutableArray *list = [NSMutableArray array];
				[list addObject:item];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 71:
#line 459 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFMethodNameItem *item = (__bridge_transfer MFMethodNameItem *)(yyvsp[(1) - (1)].method_name_item);
				[list addObject:item];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 72:
#line 466 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (2)].list);
				MFMethodNameItem *item = (__bridge_transfer MFMethodNameItem *)(yyvsp[(2) - (2)].method_name_item);
				[list addObject:item];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 73:
#line 475 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(1) - (6)].identifier);
				name = [NSString stringWithFormat:@"%@:",name];
				YTXMFTypeSpecifier *typeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(4) - (6)].type_specifier);
				NSString *paramName = (__bridge_transfer NSString *)(yyvsp[(6) - (6)].identifier);
				MFMethodNameItem *item = mf_create_method_name_item(name, typeSpecifier, paramName);
				(yyval.method_name_item) = (__bridge_retained void *)item;
			}
    break;

  case 76:
#line 490 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFMemberDefinition *memberDefinition = (__bridge_transfer MFMemberDefinition *)(yyvsp[(1) - (1)].member_definition);
				[list addObject:memberDefinition];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 77:
#line 497 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (2)].list);
				MFMemberDefinition *memberDefinition = (__bridge_transfer MFMemberDefinition *)(yyvsp[(2) - (2)].member_definition);
				[list addObject:memberDefinition];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 82:
#line 514 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(1) - (2)].identifier);
				NSString *selector = [NSString stringWithFormat:@"%@:",name];
				(yyval.identifier) = (__bridge_retained void *)selector;
			}
    break;

  case 83:
#line 520 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSString *name1 = (__bridge_transfer NSString *)(yyvsp[(1) - (3)].identifier);
				NSString *name2 = (__bridge_transfer NSString *)(yyvsp[(2) - (3)].identifier);
				NSString *selector = [NSString stringWithFormat:@"%@%@:", name1, name2];
				(yyval.identifier) = (__bridge_retained void *)selector;
			}
    break;

  case 86:
#line 533 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFAssignExpression *expr = (MFAssignExpression *)mf_create_expression(MF_ASSIGN_EXPRESSION);
				expr.assignKind = (yyvsp[(2) - (3)].assignment_operator);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 87:
#line 543 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
					(yyval.assignment_operator) = MF_NORMAL_ASSIGN;
					
				}
    break;

  case 88:
#line 548 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
					(yyval.assignment_operator) = MF_SUB_ASSIGN;
				}
    break;

  case 89:
#line 552 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
					(yyval.assignment_operator) = MF_ADD_ASSIGN;
				}
    break;

  case 90:
#line 556 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
					(yyval.assignment_operator) = MF_MUL_ASSIGN;
				}
    break;

  case 91:
#line 560 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
					(yyval.assignment_operator) = MF_DIV_ASSIGN;
				}
    break;

  case 92:
#line 564 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
					(yyval.assignment_operator) = MF_MOD_ASSIGN;
				}
    break;

  case 94:
#line 571 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFTernaryExpression *expr = (MFTernaryExpression *)mf_create_expression(MF_TERNARY_EXPRESSION);
				expr.condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (5)].expression);
				expr.trueExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (5)].expression);
				expr.falseExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(5) - (5)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 95:
#line 579 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFTernaryExpression *expr = (MFTernaryExpression *)mf_create_expression(MF_TERNARY_EXPRESSION);
				expr.condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (4)].expression);
				expr.falseExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(4) - (4)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 97:
#line 589 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_LOGICAL_OR_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 99:
#line 599 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_LOGICAL_AND_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 101:
#line 609 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_EQ_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 102:
#line 616 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_NE_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 104:
#line 626 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_LT_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 105:
#line 633 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_LE_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 106:
#line 640 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_GT_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 107:
#line 647 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_GE_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 109:
#line 657 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_ADD_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 110:
#line 664 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_SUB_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 112:
#line 674 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_MUL_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 113:
#line 681 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_DIV_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 114:
#line 688 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBinaryExpression *expr = (MFBinaryExpression *)mf_create_expression(MF_MOD_EXPRESSION);
				expr.left = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.right = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 116:
#line 698 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_LOGICAL_NOT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 117:
#line 705 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(NSC_NEGATIVE_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 119:
#line 715 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_INCREMENT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 120:
#line 722 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_DECREMENT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 121:
#line 731 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (1)].expression);
				[list addObject:expr];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 122:
#line 738 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				[list addObject:expr];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 123:
#line 747 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *keyExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
                YTXMFExpression *valueExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				MFDicEntry *dicEntry = mf_create_dic_entry(keyExpr, valueExpr);
				(yyval.dic_entry) = (__bridge_retained void *)dicEntry;
			}
    break;

  case 124:
#line 756 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFDicEntry *dicEntry = (__bridge_transfer MFDicEntry *)(yyvsp[(1) - (1)].dic_entry);
				[list addObject:dicEntry];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 125:
#line 763 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
				MFDicEntry *dicEntry = (__bridge_transfer MFDicEntry *)(yyvsp[(3) - (3)].dic_entry);
				[list addObject:dicEntry];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 126:
#line 772 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFDictionaryExpression *expr = (MFDictionaryExpression *)mf_create_expression(MF_DIC_LITERAL_EXPRESSION);
				NSArray *entriesExpr = (__bridge_transfer NSArray *)(yyvsp[(3) - (4)].list);
				expr.entriesExpr = entriesExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 127:
#line 779 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFDictionaryExpression *expr = (MFDictionaryExpression *)mf_create_expression(MF_DIC_LITERAL_EXPRESSION);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 128:
#line 787 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSString *key = (__bridge_transfer NSString *)(yyvsp[(1) - (3)].identifier);
                YTXMFExpression *valueExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (3)].expression);
				MFStructEntry *structEntry = mf_create_struct_entry(key, valueExpr);
				(yyval.struct_entry) = (__bridge_retained void *)structEntry;
			}
    break;

  case 129:
#line 796 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFStructEntry *structEntry = (__bridge_transfer MFStructEntry *)(yyvsp[(1) - (1)].struct_entry);
				[list addObject:structEntry];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 130:
#line 803 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
				MFStructEntry *structEntry = (__bridge_transfer MFStructEntry *)(yyvsp[(3) - (3)].struct_entry);
				[list addObject:structEntry];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 131:
#line 812 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFStructpression *expr = (MFStructpression *)mf_create_expression(MF_STRUCT_LITERAL_EXPRESSION);
				NSArray *entriesExpr = (__bridge_transfer NSArray *)(yyvsp[(2) - (3)].list);
				expr.entriesExpr = entriesExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 134:
#line 823 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"void *";
            }
    break;

  case 135:
#line 827 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"char *";
            }
    break;

  case 136:
#line 831 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)[NSString stringWithFormat:@"struct %@",(__bridge_transfer NSString *)(yyvsp[(2) - (2)].identifier)];
            }
    break;

  case 137:
#line 837 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                NSMutableArray *list = [NSMutableArray array];
                NSString *identifer = (__bridge_transfer NSString *)(yyvsp[(1) - (1)].identifier);
                [list addObject:identifer];
                (yyval.list) = (__bridge_retained void *)list;
            }
    break;

  case 138:
#line 844 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                    NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
                    NSString *identifer = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].identifier);
                    [list addObject:identifer];
                    (yyval.list) = (__bridge_retained void *)list;
            }
    break;

  case 139:
#line 853 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"id";
            }
    break;

  case 140:
#line 857 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"class";
            }
    break;

  case 141:
#line 861 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"Class";
            }
    break;

  case 142:
#line 865 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"copy";
            }
    break;

  case 143:
#line 869 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"BOOL";
            }
    break;

  case 144:
#line 873 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"int";
            }
    break;

  case 145:
#line 877 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"uint";
            }
    break;

  case 146:
#line 881 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"double";
            }
    break;

  case 147:
#line 885 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"SEL";
            }
    break;

  case 148:
#line 889 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.identifier) = (__bridge_retained void *)@"void";
            }
    break;

  case 149:
#line 895 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFIdentifierExpression *expr = (MFIdentifierExpression *)mf_create_expression(MF_IDENTIFIER_EXPRESSION);
				NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(1) - (1)].identifier);;
				expr.identifier = identifier;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 150:
#line 902 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                MFIdentifierExpression *identiferExpr = (MFIdentifierExpression *)mf_create_expression(MF_IDENTIFIER_EXPRESSION);
                NSString *identifier = (__bridge_transfer NSString *)(yyvsp[(2) - (2)].identifier);;
                identiferExpr.identifier = identifier;
                
                MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_GET_ADDRESS_EXPRESSION);
                expr.expr = identiferExpr;
                (yyval.expression) = (__bridge_retained void *)expr;
            }
    break;

  case 151:
#line 912 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFMemberExpression *expr = (MFMemberExpression *)mf_create_expression(MF_MEMBER_EXPRESSION);
				expr.expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				expr.memberName = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].identifier);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 152:
#line 920 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                MFMemberExpression *expr = (MFMemberExpression *)mf_create_expression(MF_MEMBER_EXPRESSION);
                expr.expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
                expr.memberName = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].identifier);
                (yyval.expression) = (__bridge_retained void *)expr;
            }
    break;

  case 153:
#line 927 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (5)].expression);
				NSString *selector = (__bridge_transfer NSString *)(yyvsp[(3) - (5)].identifier);
				MFMemberExpression *memberExpr = (MFMemberExpression *)mf_create_expression(MF_MEMBER_EXPRESSION);
				memberExpr.expr = expr;
				memberExpr.memberName = selector;
				
				MFFunctonCallExpression *funcCallExpr = (MFFunctonCallExpression *)mf_create_expression(MF_FUNCTION_CALL_EXPRESSION);
				funcCallExpr.expr = memberExpr;
				
				(yyval.expression) = (__bridge_retained void *)funcCallExpr;
			}
    break;

  case 154:
#line 940 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (6)].expression);
				NSString *selector = (__bridge_transfer NSString *)(yyvsp[(3) - (6)].identifier);
				MFMemberExpression *memberExpr = (MFMemberExpression *)mf_create_expression(MF_MEMBER_EXPRESSION);
				memberExpr.expr = expr;
				memberExpr.memberName = selector;
				
				MFFunctonCallExpression *funcCallExpr = (MFFunctonCallExpression *)mf_create_expression(MF_FUNCTION_CALL_EXPRESSION);
				funcCallExpr.expr = memberExpr;
				funcCallExpr.args = (__bridge_transfer NSArray<YTXMFExpression *> *)(yyvsp[(5) - (6)].list);
				
				(yyval.expression) = (__bridge_retained void *)funcCallExpr;
			}
    break;

  case 155:
#line 954 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (3)].expression);
				MFFunctonCallExpression *funcCallExpr = (MFFunctonCallExpression *)mf_create_expression(MF_FUNCTION_CALL_EXPRESSION);
				funcCallExpr.expr = expr;
				(yyval.expression) = (__bridge_retained void *)funcCallExpr;
			}
    break;

  case 156:
#line 961 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (4)].expression);
				MFFunctonCallExpression *funcCallExpr = (MFFunctonCallExpression *)mf_create_expression(MF_FUNCTION_CALL_EXPRESSION);
				funcCallExpr.expr = expr;
				funcCallExpr.args = (__bridge_transfer NSArray<YTXMFExpression *> *)(yyvsp[(3) - (4)].list);
				(yyval.expression) = (__bridge_retained void *)funcCallExpr;
			}
    break;

  case 157:
#line 969 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.expression) = (yyvsp[(2) - (3)].expression);
			}
    break;

  case 158:
#line 973 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *arrExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (4)].expression);
                YTXMFExpression *indexExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (4)].expression);
				
				MFSubScriptExpression *expr = (MFSubScriptExpression *)mf_create_expression(MF_SUB_SCRIPT_EXPRESSION);
				expr.aboveExpr = arrExpr;
				expr.bottomExpr = indexExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
				
			}
    break;

  case 166:
#line 991 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = mf_create_expression(MF_SELECTOR_EXPRESSION);
				expr.selectorName = (__bridge_transfer NSString *)(yyvsp[(3) - (4)].identifier);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 167:
#line 997 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_AT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 168:
#line 1004 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_AT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 169:
#line 1012 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_AT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 170:
#line 1019 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_AT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 171:
#line 1026 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_AT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (2)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 172:
#line 1033 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = mf_create_expression(MF_SELF_EXPRESSION);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 173:
#line 1038 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = mf_create_expression(MF_SUPER_EXPRESSION);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 174:
#line 1043 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFUnaryExpression *expr = (MFUnaryExpression *)mf_create_expression(MF_AT_EXPRESSION);
                YTXMFExpression *subExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (4)].expression);
				expr.expr = subExpr;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 175:
#line 1050 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFArrayExpression *expr = (MFArrayExpression *)mf_create_expression(MF_ARRAY_LITERAL_EXPRESSION);
				NSArray *itemExpressions = (__bridge_transfer NSArray *)(yyvsp[(3) - (4)].list);
				expr.itemExpressions = itemExpressions;
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 176:
#line 1057 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFArrayExpression *expr = (MFArrayExpression *)mf_create_expression(MF_ARRAY_LITERAL_EXPRESSION);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 177:
#line 1062 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                MFCFuntionExpression *expr = (MFCFuntionExpression *)mf_create_expression(MF_C_FUNCTION_EXPRESSION);
                YTXMFExpression *cfunNameOrPointerExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (4)].expression);
                expr.cfunNameOrPointerExpr = cfunNameOrPointerExpr;
                (yyval.expression) = (__bridge_retained void *)expr;
            }
    break;

  case 181:
#line 1077 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFTypeSpecifier *returnTypeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(2) - (5)].type_specifier);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (5)].block_statement);
				MFBlockExpression *expr = (MFBlockExpression *)mf_create_expression(MF_BLOCK_EXPRESSION);
				mf_build_block_expr(expr,returnTypeSpecifier,nil,block);
				(yyval.expression) = (__bridge_retained void *)expr;
				
			}
    break;

  case 182:
#line 1086 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFTypeSpecifier *returnTypeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(2) - (3)].type_specifier);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(3) - (3)].block_statement);
				MFBlockExpression *expr = (MFBlockExpression *)mf_create_expression(MF_BLOCK_EXPRESSION);
				mf_build_block_expr(expr,returnTypeSpecifier,nil,block);
				(yyval.expression) = (__bridge_retained void *)expr;
				
			}
    break;

  case 183:
#line 1095 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *returnTypeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(2) - (6)].type_specifier);
				NSArray<MFParameter *> *parameter = (__bridge_transfer NSArray<MFParameter *> *)(yyvsp[(4) - (6)].list);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(6) - (6)].block_statement);
				MFBlockExpression *expr = (MFBlockExpression *)mf_create_expression(MF_BLOCK_EXPRESSION);
				mf_build_block_expr(expr,returnTypeSpecifier,parameter,block);
				(yyval.expression) = (__bridge_retained void *)expr;
				
			}
    break;

  case 184:
#line 1105 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(4) - (4)].block_statement);
				MFBlockExpression *expr = (MFBlockExpression *)mf_create_expression(MF_BLOCK_EXPRESSION);
				mf_build_block_expr(expr,nil,nil,block);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 185:
#line 1112 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(2) - (2)].block_statement);
				MFBlockExpression *expr = (MFBlockExpression *)mf_create_expression(MF_BLOCK_EXPRESSION);
				mf_build_block_expr(expr,nil,nil,block);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 186:
#line 1119 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSArray<MFParameter *> *parameter = (__bridge_transfer NSArray<MFParameter *> *)(yyvsp[(3) - (5)].list);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (5)].block_statement);
				MFBlockExpression *expr = (MFBlockExpression *)mf_create_expression(MF_BLOCK_EXPRESSION);
				mf_build_block_expr(expr,nil,parameter,block);
				(yyval.expression) = (__bridge_retained void *)expr;
			}
    break;

  case 187:
#line 1130 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFParameter *parameter = (__bridge_transfer MFParameter *)(yyvsp[(1) - (1)].function_param);
				[list addObject:parameter];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 188:
#line 1137 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (3)].list);
				MFParameter *parameter = (__bridge_transfer MFParameter *)(yyvsp[(3) - (3)].function_param);
				[list addObject:parameter];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 189:
#line 1146 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *type = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(1) - (2)].type_specifier);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(2) - (2)].identifier);
				MFParameter *parameter = mf_create_parameter(type, name);
				(yyval.function_param) = (__bridge_retained void *)parameter;
			}
    break;

  case 190:
#line 1155 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFDeclaration *declaration = (__bridge_transfer YTXMFDeclaration *)(yyvsp[(1) - (2)].declaration);
				MFDeclarationStatement *statement = mf_create_declaration_statement(declaration);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 191:
#line 1162 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
               (yyval.declaration_modifier) = MFDeclarationModifierWeak;
            }
    break;

  case 192:
#line 1166 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
               (yyval.declaration_modifier) = MFDeclarationModifierStrong;
            }
    break;

  case 193:
#line 1170 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.declaration_modifier) = MFDeclarationModifierStatic;
            }
    break;

  case 195:
#line 1177 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                (yyval.declaration_modifier) = (yyvsp[(1) - (2)].declaration_modifier) | (yyvsp[(2) - (2)].declaration_modifier);
            }
    break;

  case 196:
#line 1183 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *type = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(2) - (3)].type_specifier);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(3) - (3)].identifier);
				YTXMFDeclaration *declaration = mf_create_declaration((yyvsp[(1) - (3)].declaration_modifier),type, name, nil);
                
				(yyval.declaration) = (__bridge_retained void *)declaration;
			}
    break;

  case 197:
#line 1191 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *type = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(2) - (5)].type_specifier);
				NSString *name = (__bridge_transfer NSString *)(yyvsp[(3) - (5)].identifier);
                YTXMFExpression *initializer = (__bridge_transfer YTXMFExpression *)(yyvsp[(5) - (5)].expression);
				YTXMFDeclaration *declaration = mf_create_declaration((yyvsp[(1) - (5)].declaration_modifier),type, name, initializer);
				(yyval.declaration) = (__bridge_retained void *)declaration;
			}
    break;

  case 198:
#line 1199 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *type = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(1) - (2)].type_specifier);
                NSString *name = (__bridge_transfer NSString *)(yyvsp[(2) - (2)].identifier);
                YTXMFDeclaration *declaration = mf_create_declaration(MFDeclarationModifierNone,type, name, nil);
                (yyval.declaration) = (__bridge_retained void *)declaration;
            }
    break;

  case 199:
#line 1206 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *type = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(1) - (4)].type_specifier);
                NSString *name = (__bridge_transfer NSString *)(yyvsp[(2) - (4)].identifier);
                YTXMFExpression *initializer = (__bridge_transfer YTXMFExpression *)(yyvsp[(4) - (4)].expression);
                YTXMFDeclaration *declaration = mf_create_declaration(MFDeclarationModifierNone,type, name, initializer);
                (yyval.declaration) = (__bridge_retained void *)declaration;
            }
    break;

  case 200:
#line 1218 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (5)].expression);
                YTXMFBlockBody  *thenBlock = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (5)].block_statement);
				MFIfStatement *statement = mf_create_if_statement(condition, thenBlock, nil, nil);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 201:
#line 1225 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (7)].expression);
                YTXMFBlockBody  *thenBlock = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (7)].block_statement);
                YTXMFBlockBody  *elseBlocl = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(7) - (7)].block_statement);
				MFIfStatement *statement = mf_create_if_statement(condition, thenBlock, nil, elseBlocl);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 202:
#line 1233 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (6)].expression);
                YTXMFBlockBody  *thenBlock = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (6)].block_statement);
				NSArray<MFElseIf *> *elseIfList = (__bridge_transfer NSArray<MFElseIf *> *)(yyvsp[(6) - (6)].list);
				MFIfStatement *statement = mf_create_if_statement(condition, thenBlock, elseIfList, nil);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 203:
#line 1241 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (8)].expression);
                YTXMFBlockBody  *thenBlock = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (8)].block_statement);
				NSArray<MFElseIf *> *elseIfList = (__bridge_transfer NSArray<MFElseIf *> *)(yyvsp[(6) - (8)].list);
                YTXMFBlockBody  *elseBlocl = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(8) - (8)].block_statement);
				MFIfStatement *statement = mf_create_if_statement(condition, thenBlock, elseIfList, elseBlocl);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 204:
#line 1252 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFElseIf *elseIf = (__bridge_transfer MFElseIf *)(yyvsp[(1) - (1)].else_if);
				[list addObject:elseIf];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 205:
#line 1259 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (2)].list);
				MFElseIf *elseIf = (__bridge_transfer MFElseIf *)(yyvsp[(2) - (2)].else_if);
				[list addObject:elseIf];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 206:
#line 1268 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(4) - (6)].expression);
                YTXMFBlockBody  *thenBlock = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(6) - (6)].block_statement);
				MFElseIf *elseIf = mf_create_else_if(condition, thenBlock);
				(yyval.else_if) = (__bridge_retained void *)elseIf;
			}
    break;

  case 207:
#line 1277 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (8)].expression);
				NSArray<MFCase *> *caseList = (__bridge_transfer NSArray *)(yyvsp[(6) - (8)].list);
                YTXMFBlockBody  *defaultBlock = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(7) - (8)].block_statement);
				MFSwitchStatement *statement = mf_create_switch_statement(expr,caseList, defaultBlock);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 208:
#line 1287 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				MFCase *case_ = (__bridge_transfer MFCase *)(yyvsp[(1) - (1)].one_case);
				[list addObject:case_];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 209:
#line 1294 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (2)].list);
				MFCase *case_ = (__bridge_transfer MFCase *)(yyvsp[(2) - (2)].one_case);
				[list addObject:case_];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 210:
#line 1303 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (4)].expression);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(4) - (4)].block_statement);
				MFCase *case_ = mf_create_case(expr, block);
				(yyval.one_case) = (__bridge_retained void *)case_;
			}
    break;

  case 211:
#line 1312 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.block_statement) = nil;
			}
    break;

  case 212:
#line 1316 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.block_statement) = (yyvsp[(3) - (3)].block_statement);
			}
    break;

  case 213:
#line 1322 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				(yyval.expression) = nil;
			}
    break;

  case 215:
#line 1331 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *initializerExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (9)].expression);
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(5) - (9)].expression);
                YTXMFExpression *post = (__bridge_transfer YTXMFExpression *)(yyvsp[(7) - (9)].expression);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(9) - (9)].block_statement);
				MFForStatement *statement = mf_create_for_statement(initializerExpr, nil,
				condition, post, block);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 216:
#line 1342 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				YTXMFDeclaration *declaration = (__bridge_transfer YTXMFDeclaration *)(yyvsp[(3) - (9)].declaration);
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(5) - (9)].expression);
                YTXMFExpression *post = (__bridge_transfer YTXMFExpression *)(yyvsp[(7) - (9)].expression);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(9) - (9)].block_statement);
				MFForStatement *statement = mf_create_for_statement(nil, declaration,
				condition, post, block);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 217:
#line 1354 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(3) - (5)].expression);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(5) - (5)].block_statement);
				MFWhileStatement *statement = mf_create_while_statement( condition, block);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 218:
#line 1363 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(2) - (7)].block_statement);
                YTXMFExpression *condition = (__bridge_transfer YTXMFExpression *)(yyvsp[(5) - (7)].expression);
				MFDoWhileStatement *statement = mf_create_do_while_statement(block, condition);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 219:
#line 1372 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFTypeSpecifier *typeSpecifier = (__bridge_transfer YTXMFTypeSpecifier *)(yyvsp[(3) - (8)].type_specifier);
				NSString *varName = (__bridge_transfer NSString *)(yyvsp[(4) - (8)].identifier);
                YTXMFExpression *arrayExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(6) - (8)].expression);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(8) - (8)].block_statement);
				MFForEachStatement *statement = mf_create_for_each_statement(typeSpecifier, varName, arrayExpr, block);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 220:
#line 1381 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSString *varName = (__bridge_transfer NSString *)(yyvsp[(3) - (7)].identifier);
                YTXMFExpression *arrayExpr = (__bridge_transfer YTXMFExpression *)(yyvsp[(5) - (7)].expression);
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(7) - (7)].block_statement);
				MFForEachStatement *statement = mf_create_for_each_statement(nil, varName, arrayExpr, block);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 221:
#line 1392 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFContinueStatement *statement = mf_create_continue_statement();
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 222:
#line 1400 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				MFBreakStatement *statement = mf_create_break_statement();
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 223:
#line 1408 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(2) - (3)].expression);
				MFReturnStatement *statement = mf_create_return_statement(expr);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 224:
#line 1416 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFExpression *expr = (__bridge_transfer YTXMFExpression *)(yyvsp[(1) - (2)].expression);
				MFExpressionStatement *statement  = mf_create_expression_statement(expr);
				(yyval.statement) = (__bridge_retained void *)statement;
			}
    break;

  case 225:
#line 1425 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = mf_open_block_statement();
				(yyval.block_statement) = (__bridge_retained void *)block;
			}
    break;

  case 226:
#line 1430 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(2) - (3)].block_statement);
				block = mf_close_block_statement(block,nil);
				(yyval.block_statement) = (__bridge_retained void *)block;
			}
    break;

  case 227:
#line 1436 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = mf_open_block_statement();
				(yyval.block_statement) = (__bridge_retained void *)block;
			}
    break;

  case 228:
#line 1441 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
                YTXMFBlockBody  *block = (__bridge_transfer YTXMFBlockBody  *)(yyvsp[(2) - (4)].block_statement);
				NSArray *list = (__bridge_transfer NSArray *)(yyvsp[(3) - (4)].list);
				block = mf_close_block_statement(block,list);
				(yyval.block_statement) = (__bridge_retained void *)block;
			}
    break;

  case 229:
#line 1451 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = [NSMutableArray array];
				YTXMFStatement *statement = (__bridge_transfer YTXMFStatement *)(yyvsp[(1) - (1)].statement);
				[list addObject:statement];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;

  case 230:
#line 1458 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"
    {
				NSMutableArray *list = (__bridge_transfer NSMutableArray *)(yyvsp[(1) - (2)].list);
				YTXMFStatement *statement = (__bridge_transfer YTXMFStatement *)(yyvsp[(2) - (2)].statement);
				[list addObject:statement];
				(yyval.list) = (__bridge_retained void *)list;
			}
    break;


/* Line 1267 of yacc.c.  */
#line 3822 "/Users/ynwang/Desktop/Mango-master-4/MangoFixDemo/build/Pods.build/Debug-iphonesimulator/MangoFix.build/DerivedSources/y.tab.c"
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


#line 1490 "/Users/ynwang/Desktop/Mango-master-4/MangoFix/Compiler/lex_yacc/mango.y"


