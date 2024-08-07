
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 ".\\parser.y"

	int yylineno;
	char data_type[200];


/* Line 189 of yacc.c  */
#line 79 "parser.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NO_ELSE = 258,
     ELSE = 259,
     ELIF = 260,
     NE_OP = 261,
     EQ_OP = 262,
     LE_OP = 263,
     GE_OP = 264,
     IDENTIFIER = 265,
     CONSTANT = 266,
     STRING_LITERAL = 267,
     SIZEOF = 268,
     PTR_OP = 269,
     INC_OP = 270,
     DEC_OP = 271,
     LEFT_OP = 272,
     RIGHT_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     MUL_ASSIGN = 276,
     DIV_ASSIGN = 277,
     MOD_ASSIGN = 278,
     ADD_ASSIGN = 279,
     SUB_ASSIGN = 280,
     LEFT_ASSIGN = 281,
     RIGHT_ASSIGN = 282,
     AND_ASSIGN = 283,
     XOR_ASSIGN = 284,
     OR_ASSIGN = 285,
     DEFINE = 286,
     TYPEDEF = 287,
     EXTERN = 288,
     STATIC = 289,
     AUTO = 290,
     REGISTER = 291,
     CHAR = 292,
     SHORT = 293,
     INT = 294,
     LONG = 295,
     SIGNED = 296,
     UNSIGNED = 297,
     FLOAT = 298,
     DOUBLE = 299,
     CONST = 300,
     VOLATILE = 301,
     VOID = 302,
     STRUCT = 303,
     UNION = 304,
     ENUM = 305,
     CASE = 306,
     DEFAULT = 307,
     IF = 308,
     SWITCH = 309,
     WHILE = 310,
     DO = 311,
     FOR = 312,
     GOTO = 313,
     CONTINUE = 314,
     BREAK = 315,
     RETURN = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 26 ".\\parser.y"

	char str[1000];



/* Line 214 of yacc.c  */
#line 182 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 194 "parser.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   923

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNRULES -- Number of states.  */
#define YYNSTATES  289

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,     2,     2,     2,    17,    19,     2,
      72,    73,    15,    13,    77,    14,    76,    16,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    83,
       6,     8,     7,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    18,    85,    78,     2,     2,     2,
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
       5,     9,    10,    11,    12,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    11,    13,    15,    17,    21,
      23,    25,    30,    34,    39,    43,    47,    50,    53,    55,
      59,    61,    64,    67,    70,    73,    78,    80,    82,    84,
      86,    88,    90,    92,    97,    99,   103,   107,   111,   113,
     117,   121,   123,   127,   131,   133,   137,   141,   145,   149,
     151,   155,   159,   161,   165,   167,   171,   173,   177,   179,
     183,   185,   189,   191,   197,   199,   203,   205,   207,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   231,
     233,   236,   240,   242,   245,   247,   250,   252,   256,   258,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   295,   297,   300,   302,
     309,   315,   319,   321,   323,   325,   328,   332,   334,   338,
     341,   343,   345,   349,   354,   358,   363,   368,   372,   374,
     377,   379,   383,   386,   388,   390,   394,   396,   399,   401,
     405,   410,   412,   416,   418,   420,   422,   424,   426,   429,
     433,   437,   442,   444,   447,   449,   452,   454,   457,   463,
     470,   476,   479,   486,   492,   500,   507,   515,   518,   521,
     524,   528,   530,   532,   537,   541,   545
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      87,     0,    -1,   140,    -1,    87,   140,    -1,    89,    87,
      -1,    20,    -1,    21,    -1,    22,    -1,    72,   108,    73,
      -1,    41,    -1,    88,    -1,    90,    74,   108,    75,    -1,
      90,    72,    73,    -1,    90,    72,    91,    73,    -1,    90,
      76,    20,    -1,    90,    24,    20,    -1,    90,    25,    -1,
      90,    26,    -1,   106,    -1,    91,    77,   106,    -1,    90,
      -1,    25,    92,    -1,    26,    92,    -1,    93,    94,    -1,
      23,    92,    -1,    23,    72,   128,    73,    -1,    19,    -1,
      15,    -1,    13,    -1,    14,    -1,    78,    -1,    79,    -1,
      92,    -1,    72,   128,    73,    94,    -1,    94,    -1,    95,
      15,    94,    -1,    95,    16,    94,    -1,    95,    17,    94,
      -1,    95,    -1,    96,    13,    95,    -1,    96,    14,    95,
      -1,    96,    -1,    97,    27,    96,    -1,    97,    28,    96,
      -1,    97,    -1,    98,     6,    97,    -1,    98,     7,    97,
      -1,    98,    11,    97,    -1,    98,    12,    97,    -1,    98,
      -1,    99,    10,    98,    -1,    99,     9,    98,    -1,    99,
      -1,   100,    19,    99,    -1,   100,    -1,   101,    80,   100,
      -1,   101,    -1,   102,    18,   101,    -1,   102,    -1,   103,
      29,   102,    -1,   103,    -1,   104,    30,   103,    -1,   104,
      -1,   104,    81,   108,    82,   105,    -1,   105,    -1,    92,
     107,   106,    -1,     8,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    39,    -1,    40,    -1,   106,    -1,   108,    77,   106,
      -1,   105,    -1,   111,    83,    -1,   111,   112,    83,    -1,
     114,    -1,   114,   111,    -1,   115,    -1,   115,   111,    -1,
     113,    -1,   112,    77,   113,    -1,   122,    -1,   122,     8,
     129,    -1,    42,    -1,    43,    -1,    44,    -1,    45,    -1,
      46,    -1,    57,    -1,    47,    -1,    48,    -1,    49,    -1,
      50,    -1,    53,    -1,    54,    -1,    51,    -1,    52,    -1,
     117,    -1,   115,   116,    -1,   115,    -1,    55,   116,    -1,
      55,    -1,   118,    20,    84,   119,    85,    83,    -1,   118,
      84,   119,    85,    83,    -1,   118,    20,    83,    -1,    58,
      -1,    59,    -1,   120,    -1,   119,   120,    -1,   116,   121,
      83,    -1,   122,    -1,   121,    77,   122,    -1,   124,   123,
      -1,   123,    -1,    20,    -1,    72,   122,    73,    -1,   123,
      74,   109,    75,    -1,   123,    74,    75,    -1,   123,    72,
     125,    73,    -1,   123,    72,   127,    73,    -1,   123,    72,
      73,    -1,    15,    -1,    15,   124,    -1,   126,    -1,   125,
      77,   126,    -1,   111,   122,    -1,   111,    -1,    20,    -1,
     127,    77,    20,    -1,   116,    -1,   116,   122,    -1,   106,
      -1,    84,   130,    85,    -1,    84,   130,    77,    85,    -1,
     129,    -1,   130,    77,   129,    -1,   132,    -1,   135,    -1,
     136,    -1,   138,    -1,   139,    -1,    84,    85,    -1,    84,
     134,    85,    -1,    84,   133,    85,    -1,    84,   133,   134,
      85,    -1,   110,    -1,   133,   110,    -1,   131,    -1,   134,
     131,    -1,    83,    -1,   108,    83,    -1,    63,    72,   108,
      73,   131,    -1,    63,    72,   108,    73,   131,   137,    -1,
       5,    72,   108,    73,   131,    -1,     4,   131,    -1,     5,
      72,   108,    73,   131,   137,    -1,    65,    72,   108,    73,
     131,    -1,    66,   131,    65,    72,   108,    73,    83,    -1,
      67,    72,   135,   135,    73,   131,    -1,    67,    72,   135,
     135,   108,    73,   131,    -1,    69,    83,    -1,    70,    83,
      -1,    71,    83,    -1,    71,   108,    83,    -1,   141,    -1,
     110,    -1,   111,   122,   133,   132,    -1,   111,   122,   132,
      -1,   122,   133,   132,    -1,   122,   132,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    33,    33,    34,    35,    39,    40,    41,    42,    46,
      50,    51,    52,    53,    54,    55,    56,    57,    61,    62,
      66,    67,    68,    69,    70,    71,    75,    76,    77,    78,
      79,    80,    84,    85,    89,    90,    91,    92,    96,    97,
      98,   102,   103,   104,   108,   109,   110,   111,   112,   116,
     117,   118,   122,   123,   127,   128,   132,   133,   137,   138,
     142,   143,   147,   148,   152,   153,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   171,   172,   176,
     180,   181,   185,   186,   187,   188,   192,   193,   197,   198,
     202,   203,   204,   205,   206,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   223,   224,   225,   226,   230,
     231,   232,   236,   237,   241,   242,   246,   251,   252,   256,
     257,   261,   262,   263,   264,   265,   266,   267,   271,   272,
     276,   277,   281,   282,   286,   287,   291,   292,   296,   297,
     298,   302,   303,   307,   308,   309,   310,   311,   315,   316,
     317,   318,   322,   323,   327,   328,   332,   333,   337,   338,
     342,   343,   344,   348,   349,   350,   351,   355,   356,   357,
     358,   362,   363,   367,   368,   369,   370
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NO_ELSE", "ELSE", "ELIF", "'<'", "'>'",
  "'='", "NE_OP", "EQ_OP", "LE_OP", "GE_OP", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'|'", "'&'", "IDENTIFIER", "CONSTANT", "STRING_LITERAL",
  "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "DEFINE", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "CASE",
  "DEFAULT", "IF", "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','", "'~'",
  "'!'", "'^'", "'?'", "':'", "';'", "'{'", "'}'", "$accept", "begin",
  "primary_expression", "Define", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "declarator", "direct_declarator", "pointer",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "initializer", "initializer_list", "statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "else_clause",
  "iteration_statement", "jump_statement", "external_declaration",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    60,    62,    61,   261,
     262,   263,   264,    43,    45,    42,    47,    37,   124,    38,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,    91,    93,    46,    44,   126,    33,
      94,    63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    88,    88,    88,    88,    89,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    94,    94,    95,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    98,    99,
      99,    99,   100,   100,   101,   101,   102,   102,   103,   103,
     104,   104,   105,   105,   106,   106,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   108,   108,   109,
     110,   110,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   116,   116,   116,   116,   117,
     117,   117,   118,   118,   119,   119,   120,   121,   121,   122,
     122,   123,   123,   123,   123,   123,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   131,   131,   131,   131,   131,   132,   132,
     132,   132,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   137,   137,   138,   138,   138,   138,   139,   139,   139,
     139,   140,   140,   141,   141,   141,   141
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     3,     1,
       1,     4,     3,     4,     3,     3,     2,     2,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       2,     3,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     6,
       5,     3,     1,     1,     1,     2,     3,     1,     3,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       1,     3,     2,     1,     1,     3,     1,     2,     1,     3,
       4,     1,     3,     1,     1,     1,     1,     1,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     5,     6,
       5,     2,     6,     5,     7,     6,     7,     2,     2,     2,
       3,     1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   128,   121,     9,    90,    91,    92,    93,    94,    96,
      97,    98,    99,   102,   103,   100,   101,    95,   112,   113,
       0,     0,     0,   172,     0,    82,    84,   104,     0,     0,
     120,     0,     2,   171,   129,     0,     1,     3,     4,    80,
       0,    86,    88,    83,    85,     0,     0,     0,   152,     0,
     176,     0,     0,     0,   119,   122,     0,    81,     0,   174,
       0,   111,     0,   108,   106,     0,     0,   114,    28,    29,
      27,    26,     5,     6,     7,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,   156,   148,
      10,    20,    32,     0,    34,    38,    41,    44,    49,    52,
      54,    56,    58,    60,    62,    64,    77,     0,   154,   143,
       0,     0,   144,   145,   146,   147,    88,   153,   175,   134,
     127,   133,     0,   130,     0,   124,    32,    79,     0,    87,
       0,   138,    89,   173,     0,   107,   105,     0,   117,     0,
     115,     0,    24,     0,    21,    22,     0,     0,     0,     0,
     167,   168,   169,     0,     0,   136,     0,     0,    16,    17,
       0,     0,     0,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    23,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   157,   150,     0,   149,
     155,   132,   125,     0,   126,     0,   123,   141,     0,     0,
       0,   116,   110,     0,     0,     0,     0,     0,   170,     8,
     137,     0,    15,    12,     0,    18,     0,    14,    65,    35,
      36,    37,    39,    40,    42,    43,    45,    46,    47,    48,
      51,    50,    53,    55,    57,    59,    61,     0,    78,   151,
     131,   135,     0,   139,   109,   118,    25,     0,     0,     0,
       0,    33,    13,     0,    11,     0,   140,   142,   158,   163,
       0,     0,     0,    19,    63,     0,     0,   159,     0,   165,
       0,   161,     0,   164,   166,     0,     0,   160,   162
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    21,    90,    22,    91,   224,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   174,   107,   128,    23,    49,    40,    41,    25,    26,
      65,    27,    28,    66,    67,   137,    29,    30,    31,   122,
     123,   124,   156,   132,   208,   108,   109,    51,   111,   112,
     113,   277,   114,   115,    32,    33
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -139
static const yytype_int16 yypact[] =
{
     728,    48,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
      16,   436,   728,  -139,    -5,   864,   864,  -139,    -8,   821,
     126,    -4,  -139,  -139,  -139,     7,  -139,  -139,   768,  -139,
     -31,  -139,   173,  -139,  -139,   -66,   137,   226,  -139,    -5,
    -139,   821,   803,   551,   126,  -139,    16,  -139,   484,  -139,
     821,  -139,   137,   137,   137,    16,   744,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,  -139,   661,   675,   675,    17,    92,
     450,    95,    21,    87,   517,   599,  -139,  -139,  -139,  -139,
    -139,    77,   227,   689,  -139,   194,   108,   120,    37,   165,
     182,   123,   196,   205,     5,  -139,  -139,   -30,  -139,  -139,
     293,   360,  -139,  -139,  -139,  -139,   230,  -139,  -139,  -139,
    -139,    16,   -15,  -139,    32,  -139,  -139,  -139,   175,  -139,
     484,  -139,  -139,  -139,   834,  -139,  -139,   -22,  -139,   172,
    -139,   599,  -139,   689,  -139,  -139,   689,   689,   191,   532,
    -139,  -139,  -139,     8,    73,    16,   208,   262,  -139,  -139,
     565,   689,   266,  -139,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,  -139,  -139,   689,  -139,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,  -139,  -139,   383,  -139,
    -139,  -139,  -139,   864,  -139,   267,  -139,  -139,   -57,   207,
      16,  -139,  -139,   215,    81,    83,   222,   532,  -139,  -139,
    -139,   689,  -139,  -139,    84,  -139,   129,  -139,  -139,  -139,
    -139,  -139,   194,   194,   108,   108,   120,   120,   120,   120,
      37,    37,   165,   182,   123,   196,   205,   -17,  -139,  -139,
    -139,  -139,    93,  -139,  -139,  -139,  -139,   450,   450,   689,
     647,  -139,  -139,   689,  -139,   689,  -139,  -139,   224,  -139,
      86,   450,    89,  -139,  -139,   450,   228,  -139,   216,  -139,
     450,  -139,   689,  -139,  -139,    96,   450,   224,  -139
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -139,   279,  -139,  -139,  -139,  -139,   -53,  -139,   -79,    57,
      61,   -91,    66,   113,   127,   112,   128,   130,  -139,   -52,
     -19,  -139,   -77,  -139,   -10,     4,  -139,   265,  -139,    11,
     -58,  -139,  -139,   260,   -63,  -139,   -11,   294,   323,  -139,
     124,  -139,   185,  -109,  -139,   -78,    30,    40,   218,  -138,
    -139,    42,  -139,  -139,    13,  -139
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     126,   127,   148,   140,    24,   135,   136,   153,   154,    35,
       1,   217,    45,    42,   175,     2,     2,    61,    62,    48,
     252,   207,   142,   144,   145,    24,    24,   155,   253,    43,
      44,     1,    48,   200,    37,   193,     2,    48,   116,   131,
     126,   117,    24,   183,   184,   116,    56,   195,   185,   186,
     117,    37,    57,   196,   138,   210,   121,    64,   202,    50,
     195,   211,   203,     1,   154,   265,   154,    20,    20,   214,
     215,   140,    59,    64,    64,    64,    46,    64,    39,   260,
      55,   118,    60,   155,   226,   195,   194,   110,    20,   146,
     133,   218,   236,   237,   238,   239,    64,   229,   230,   231,
     117,   157,   158,   159,   150,   204,    68,    69,    70,   205,
     201,   131,    71,    72,    73,    74,    75,   247,    76,    77,
     200,   179,   180,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   225,   261,   267,   220,    64,   219,   181,   182,   160,
     195,   161,    64,   162,   257,   228,   258,   262,   195,   278,
     195,   263,   280,   195,   147,    85,   195,   149,   126,   286,
     151,    86,    87,   195,   187,   188,   248,   130,   266,   268,
     269,    58,   270,   272,     9,    10,    11,    12,    13,    14,
      15,    16,    63,   279,    17,    18,    19,   281,    52,   255,
      53,   189,   284,   190,   264,   285,   195,   121,   287,   176,
     177,   178,   126,   274,   191,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   275,   276,
      17,    18,    19,   131,   192,   163,   232,   233,    58,    68,
      69,    70,   234,   235,   273,    71,    72,    73,    74,    75,
     206,    76,    77,   240,   241,   212,   216,    47,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   221,   222,    17,    18,    19,   227,   251,   256,    78,
     254,    79,    80,    81,   259,    82,    83,    84,    85,   283,
     282,    38,   242,   244,    86,    87,    68,    69,    70,    88,
      47,    89,    71,    72,    73,    74,    75,   243,    76,    77,
     245,   129,   134,   246,    34,    54,   213,   250,   198,   288,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      17,    18,    19,     0,     0,     0,    78,     0,    79,    80,
      81,     0,    82,    83,    84,    85,     0,     0,     0,     0,
       0,    86,    87,    68,    69,    70,    88,    47,   197,    71,
      72,    73,    74,    75,     0,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,     0,
       0,     0,    71,    72,    73,    74,    75,     0,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,     0,    79,    80,    81,     0,    82,
      83,    84,    85,     0,     0,     0,    36,     0,    86,    87,
       0,     0,     0,    88,    47,   199,    78,     0,    79,    80,
      81,     1,    82,    83,    84,    85,     2,     0,     0,     0,
       0,    86,    87,    68,    69,    70,    88,    47,   249,    71,
      72,    73,    74,    75,     0,    76,    77,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,     0,     0,    17,    18,    19,     0,    68,    69,    70,
       0,     0,     0,    71,    72,    73,    74,    75,    20,    76,
      77,     0,     0,    78,     0,    79,    80,    81,     0,    82,
      83,    84,    85,     0,     0,     0,     0,     0,    86,    87,
      68,    69,    70,    88,    47,     0,    71,    72,    73,    74,
      75,     0,    76,    77,     0,    68,    69,    70,     0,     0,
       0,    71,    72,    73,    74,    75,    85,    76,    77,     0,
       0,     0,    86,    87,    68,    69,    70,     0,   130,     0,
      71,    72,    73,    74,    75,     0,    76,    77,    68,    69,
      70,     0,     0,     0,    71,    72,    73,    74,    75,    85,
      76,    77,     0,     0,     0,    86,    87,     0,     0,     0,
     152,     0,     0,     0,    85,     0,     0,     0,     0,     0,
      86,    87,    68,    69,    70,    88,     0,     0,    71,    72,
      73,    74,    75,    85,    76,    77,   125,     0,     0,    86,
      87,     0,     0,     0,     0,     0,     0,    85,   223,     0,
       0,     0,     0,    86,    87,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    63,     0,    17,    18,    19,     0,
      68,    69,    70,     0,     0,     0,    71,    72,    73,    74,
      75,    85,    76,    77,    68,    69,    70,    86,    87,     0,
      71,    72,    73,    74,    75,     0,    76,    77,    68,    69,
      70,     0,     0,     0,    71,    72,    73,    74,    75,     0,
      76,    77,    68,    69,    70,     0,     0,     0,    71,    72,
      73,    74,    75,     0,    76,    77,     0,     0,     0,    85,
     271,     0,     0,     0,     0,    86,    87,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,     0,    86,
      87,     0,     0,     1,     0,     0,     0,   143,     2,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,    86,    87,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,     1,     0,    17,    18,    19,     2,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    63,
      20,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   119,     0,    17,    18,    19,     0,   139,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
      17,    18,    19,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   120,     0,    17,    18,
      19,     9,    10,    11,    12,    13,    14,    15,    16,    63,
       0,    17,    18,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    47,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   209,
       0,    17,    18,    19
};

static const yytype_int16 yycheck[] =
{
      53,    53,    80,    66,     0,    63,    64,    84,    85,    20,
      15,   149,    20,    24,    93,    20,    20,    83,    84,    29,
      77,   130,    75,    76,    77,    21,    22,    85,    85,    25,
      26,    15,    42,   111,    21,    30,    20,    47,    49,    58,
      93,    51,    38,     6,     7,    56,    77,    77,    11,    12,
      60,    38,    83,    83,    65,    77,    52,    46,    73,    29,
      77,    83,    77,    15,   141,    82,   143,    72,    72,   146,
     147,   134,    42,    62,    63,    64,    84,    66,    83,   217,
      73,    51,    42,   141,   161,    77,    81,    47,    72,    72,
      60,    83,   183,   184,   185,   186,    85,   176,   177,   178,
     110,    24,    25,    26,    83,    73,    13,    14,    15,    77,
     121,   130,    19,    20,    21,    22,    23,   194,    25,    26,
     198,    13,    14,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   160,   221,   252,   155,   134,    73,    27,    28,    72,
      77,    74,   141,    76,    73,   174,    73,    73,    77,    73,
      77,    77,    73,    77,    72,    72,    77,    72,   221,    73,
      83,    78,    79,    77,     9,    10,   195,    84,    85,   257,
     258,     8,   259,   260,    47,    48,    49,    50,    51,    52,
      53,    54,    55,   271,    57,    58,    59,   275,    72,   210,
      74,    19,   280,    80,    75,   282,    77,   203,   286,    15,
      16,    17,   265,   265,    18,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     4,     5,
      57,    58,    59,   252,    29,     8,   179,   180,     8,    13,
      14,    15,   181,   182,   263,    19,    20,    21,    22,    23,
      75,    25,    26,   187,   188,    83,    65,    84,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    73,    20,    57,    58,    59,    20,    20,    73,    63,
      83,    65,    66,    67,    72,    69,    70,    71,    72,    83,
      72,    22,   189,   191,    78,    79,    13,    14,    15,    83,
      84,    85,    19,    20,    21,    22,    23,   190,    25,    26,
     192,    56,    62,   193,     1,    31,   141,   203,   110,   287,
      -1,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    58,    59,    -1,    -1,    -1,    63,    -1,    65,    66,
      67,    -1,    69,    70,    71,    72,    -1,    -1,    -1,    -1,
      -1,    78,    79,    13,    14,    15,    83,    84,    85,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    22,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,     0,    -1,    78,    79,
      -1,    -1,    -1,    83,    84,    85,    63,    -1,    65,    66,
      67,    15,    69,    70,    71,    72,    20,    -1,    -1,    -1,
      -1,    78,    79,    13,    14,    15,    83,    84,    85,    19,
      20,    21,    22,    23,    -1,    25,    26,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    57,    58,    59,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    72,    25,
      26,    -1,    -1,    63,    -1,    65,    66,    67,    -1,    69,
      70,    71,    72,    -1,    -1,    -1,    -1,    -1,    78,    79,
      13,    14,    15,    83,    84,    -1,    19,    20,    21,    22,
      23,    -1,    25,    26,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    22,    23,    72,    25,    26,    -1,
      -1,    -1,    78,    79,    13,    14,    15,    -1,    84,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    72,
      25,    26,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      78,    79,    13,    14,    15,    83,    -1,    -1,    19,    20,
      21,    22,    23,    72,    25,    26,    75,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    78,    79,    -1,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    -1,    57,    58,    59,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    22,
      23,    72,    25,    26,    13,    14,    15,    78,    79,    -1,
      19,    20,    21,    22,    23,    -1,    25,    26,    13,    14,
      15,    -1,    -1,    -1,    19,    20,    21,    22,    23,    -1,
      25,    26,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    22,    23,    -1,    25,    26,    -1,    -1,    -1,    72,
      73,    -1,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    15,    -1,    -1,    -1,    72,    20,    -1,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    78,    79,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    15,    -1,    57,    58,    59,    20,    -1,
      -1,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      72,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    20,    -1,    57,    58,    59,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    -1,    -1,
      57,    58,    59,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    73,    -1,    57,    58,
      59,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    85,
      -1,    57,    58,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    20,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    57,    58,    59,
      72,    87,    89,   110,   111,   114,   115,   117,   118,   122,
     123,   124,   140,   141,   124,   122,     0,   140,    87,    83,
     112,   113,   122,   111,   111,    20,    84,    84,   110,   111,
     132,   133,    72,    74,   123,    73,    77,    83,     8,   132,
     133,    83,    84,    55,   115,   116,   119,   120,    13,    14,
      15,    19,    20,    21,    22,    23,    25,    26,    63,    65,
      66,    67,    69,    70,    71,    72,    78,    79,    83,    85,
      88,    90,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   108,   131,   132,
     133,   134,   135,   136,   138,   139,   122,   110,   132,    20,
      73,   111,   125,   126,   127,    75,    92,   105,   109,   113,
      84,   106,   129,   132,   119,   116,   116,   121,   122,    85,
     120,    72,    92,    72,    92,    92,    72,    72,   131,    72,
      83,    83,    83,   108,   108,   116,   128,    24,    25,    26,
      72,    74,    76,     8,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   107,    94,    15,    16,    17,    13,
      14,    27,    28,     6,     7,    11,    12,     9,    10,    19,
      80,    18,    29,    30,    81,    77,    83,    85,   134,    85,
     131,   122,    73,    77,    73,    77,    75,   129,   130,    85,
      77,    83,    83,   128,   108,   108,    65,   135,    83,    73,
     122,    73,    20,    73,    91,   106,   108,    20,   106,    94,
      94,    94,    95,    95,    96,    96,    97,    97,    97,    97,
      98,    98,    99,   100,   101,   102,   103,   108,   106,    85,
     126,    20,    77,    85,    83,   122,    73,    73,    73,    72,
     135,    94,    73,    77,    75,    82,    85,   129,   131,   131,
     108,    73,   108,   106,   105,     4,     5,   137,    73,   131,
      73,   131,    72,    83,   131,   108,    73,   131,   137
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
        case 5:

/* Line 1455 of yacc.c  */
#line 39 ".\\parser.y"
    { insertToHash((yyvsp[(1) - (1)].str), data_type , yylineno); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 187 ".\\parser.y"
    { strcpy(data_type, (yyvsp[(1) - (1)].str)); ;}
    break;



/* Line 1455 of yacc.c  */
#line 1828 "parser.tab.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 372 ".\\parser.y"


#include "lex.yy.c"
#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	if(!yyparse())
		printf("\nParsing complete\n");
	else{
		printf("\nParsing failed\n");
		return 1;
	}

	fclose(yyin);
	display();
	disp();
	return 0;
}
//extern int lineno;
extern char *yytext;
yyerror(char *s) {
	printf("\nLine %d : %s\n", (yylineno+1), s);
	return 1;
}         

