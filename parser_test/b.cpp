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
     DEF = 258,
     CMD = 259,
     ELE = 260,
     MUO = 261,
     LEP = 262,
     PHO = 263,
     JET = 264,
     BJET = 265,
     QGJET = 266,
     NUMET = 267,
     METLV = 268,
     PHI = 269,
     ETA = 270,
     ABSETA = 271,
     PT = 272,
     PZ = 273,
     NBF = 274,
     DR = 275,
     DPHI = 276,
     NELE = 277,
     NMUO = 278,
     NLEP = 279,
     NPHO = 280,
     NJET = 281,
     NBJET = 282,
     NQGJET = 283,
     HT = 284,
     METMWT = 285,
     MWT = 286,
     MET = 287,
     ALL = 288,
     LEPSF = 289,
     FILLHISTOS = 290,
     NB = 291,
     ID = 292,
     SIN = 293,
     COS = 294,
     TAN = 295,
     INT = 296,
     OR = 297,
     AND = 298,
     LT = 299,
     GT = 300,
     LE = 301,
     GE = 302,
     EQ = 303,
     NE = 304,
     IRG = 305,
     ERG = 306,
     Unary = 307
   };
#endif
/* Tokens.  */
#define DEF 258
#define CMD 259
#define ELE 260
#define MUO 261
#define LEP 262
#define PHO 263
#define JET 264
#define BJET 265
#define QGJET 266
#define NUMET 267
#define METLV 268
#define PHI 269
#define ETA 270
#define ABSETA 271
#define PT 272
#define PZ 273
#define NBF 274
#define DR 275
#define DPHI 276
#define NELE 277
#define NMUO 278
#define NLEP 279
#define NPHO 280
#define NJET 281
#define NBJET 282
#define NQGJET 283
#define HT 284
#define METMWT 285
#define MWT 286
#define MET 287
#define ALL 288
#define LEPSF 289
#define FILLHISTOS 290
#define NB 291
#define ID 292
#define SIN 293
#define COS 294
#define TAN 295
#define INT 296
#define OR 297
#define AND 298
#define LT 299
#define GT 300
#define LE 301
#define GE 302
#define EQ 303
#define NE 304
#define IRG 305
#define ERG 306
#define Unary 307




/* Copy the first part of user declarations.  */
#line 1 "parse.y"
 
#include <math.h>
#include "stdlib.h"
#include <iostream>
#include <string>
#include <map>
#include <list>
#include <iterator>
extern int yylex();
extern int yyparse();
void yyerror(const char *s) { std::cout << s << std::endl; } 
int cutcount;
using namespace std;
string tmp;
int pnum;
struct myParticle{
        string type;
        int index;
}; 
map<string,string> vars;
list<string> parts; //for def of particles as given by user
map<string,list<myParticle> > ListParts;//for particle definition
list<myParticle> TmpParticle;
list<myParticle> TmpParticle1;//to be used for list of 2 particles
map<int,string> cuts;


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
#line 27 "parse.y"
{
	double real;
	char* s;
}
/* Line 193 of yacc.c.  */
#line 232 "b.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 245 "b.cpp"

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
#define YYLAST   394

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  16
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      68,    69,    54,    52,    65,    53,     2,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    58,     2,
       2,     2,     2,    67,     2,     2,     2,     2,     2,    64,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    57,    66,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    61,
       2,     2,     2,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,    60,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    10,    15,    20,    25,    30,
      35,    40,    45,    50,    55,    60,    65,    70,    73,    76,
      78,    80,    82,    84,    86,    88,    90,    92,    94,    96,
      98,   100,   102,   103,   110,   113,   115,   119,   123,   127,
     131,   135,   139,   143,   147,   151,   153,   156,   158,   161,
     162,   165,   168,   171,   177,   179,   181,   183,   187,   191,
     195,   199,   203,   207,   212,   217,   221,   225,   229,   233,
     237,   241,   245,   249,   252,   257,   262,   267,   271,   273,
     275,   277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    72,    80,    -1,    72,    73,    -1,    -1,
       3,    37,    58,    77,    -1,     3,    37,    58,    85,    -1,
      59,    77,    60,    61,    -1,    59,    77,    60,    62,    -1,
      59,    77,    60,    63,    -1,    59,    77,    60,    64,    -1,
      59,    77,    60,    14,    -1,    59,    77,    60,    15,    -1,
      59,    77,    60,    16,    -1,    59,    77,    60,    17,    -1,
      59,    77,    60,    18,    -1,    59,    77,    60,    19,    -1,
      75,    20,    -1,    75,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    -1,    59,    77,    76,    65,    77,    60,    -1,
      77,    78,    -1,    78,    -1,     5,    66,    79,    -1,     6,
      66,    79,    -1,     7,    66,    79,    -1,     8,    66,    79,
      -1,     9,    66,    79,    -1,    10,    66,    79,    -1,    11,
      66,    79,    -1,    12,    66,    79,    -1,    13,    66,    79,
      -1,    37,    -1,    53,    41,    -1,    41,    -1,    80,    81,
      -1,    -1,     4,    84,    -1,     4,    33,    -1,     4,    82,
      -1,    84,    67,    83,    58,    83,    -1,    84,    -1,    33,
      -1,    82,    -1,    85,    44,    85,    -1,    85,    45,    85,
      -1,    85,    46,    85,    -1,    85,    47,    85,    -1,    85,
      48,    85,    -1,    85,    49,    85,    -1,    85,    50,    36,
      36,    -1,    85,    51,    36,    36,    -1,    84,    43,    84,
      -1,    84,    42,    84,    -1,    68,    84,    69,    -1,    85,
      52,    85,    -1,    85,    53,    85,    -1,    85,    54,    85,
      -1,    85,    55,    85,    -1,    85,    57,    85,    -1,    53,
      85,    -1,    39,    68,    85,    69,    -1,    38,    68,    85,
      69,    -1,    40,    68,    85,    69,    -1,    68,    85,    69,
      -1,    36,    -1,    41,    -1,    74,    -1,    37,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    54,    55,    57,    87,   105,   120,   135,
     144,   152,   160,   168,   176,   184,   192,   200,   225,   251,
     256,   261,   266,   271,   276,   281,   286,   291,   296,   301,
     306,   311,   317,   317,   325,   333,   347,   357,   365,   373,
     381,   389,   397,   405,   413,   421,   441,   442,   444,   445,
     447,   452,   457,   463,   468,   469,   470,   472,   476,   480,
     484,   488,   492,   496,   500,   504,   508,   512,   517,   521,
     525,   529,   533,   537,   541,   545,   549,   553,   557,   558,
     559,   561
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DEF", "CMD", "ELE", "MUO", "LEP", "PHO",
  "JET", "BJET", "QGJET", "NUMET", "METLV", "PHI", "ETA", "ABSETA", "PT",
  "PZ", "NBF", "DR", "DPHI", "NELE", "NMUO", "NLEP", "NPHO", "NJET",
  "NBJET", "NQGJET", "HT", "METMWT", "MWT", "MET", "ALL", "LEPSF",
  "FILLHISTOS", "NB", "ID", "SIN", "COS", "TAN", "INT", "OR", "AND", "LT",
  "GT", "LE", "GE", "EQ", "NE", "IRG", "ERG", "'+'", "'-'", "'*'", "'/'",
  "Unary", "'^'", "':'", "'{'", "'}'", "'m'", "'q'", "'P'", "'E'", "','",
  "'_'", "'?'", "'('", "')'", "$accept", "input", "definitions",
  "definition", "function", "list", "@1", "particules", "particule",
  "index", "commands", "command", "ifstatement", "action", "condition",
  "e", 0
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
     305,   306,    43,    45,    42,    47,   307,    94,    58,   123,
     125,   109,   113,    80,    69,    44,    95,    63,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    76,    75,    77,    77,    78,    78,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    80,    80,
      81,    81,    81,    82,    83,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     2,     1,     2,     0,
       2,     2,     2,     5,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     4,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     4,     4,     4,     3,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,    49,     1,     0,     3,     2,     0,     0,    48,
       0,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    78,    81,     0,     0,     0,    79,
       0,     0,     0,    80,     0,    52,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,    45,     0,
       5,    35,     6,     0,     0,     0,    73,    45,    32,     0,
       0,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,    67,    77,    66,    65,    30,
      56,     0,    54,    57,    58,    59,    60,    61,    62,     0,
       0,    68,    69,    70,    71,    72,    47,     0,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    75,    74,    76,
      11,    12,    13,    14,    15,    16,     7,     8,     9,    10,
       0,     0,    63,    64,    46,     0,    53,    33
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,    33,    34,    94,    50,    51,   118,
       6,     9,   100,   101,   102,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -50
static const yytype_int16 yypact[] =
{
     -50,    11,    14,   -50,   -23,   -50,    32,   -19,   139,   -50,
      92,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,    38,   -50,   -50,   -50,   -25,   -24,   -14,   -50,
     186,   317,   233,   -50,   -16,   -50,   -30,   337,   -11,   -10,
      13,    27,    29,    40,    41,    42,    44,   -50,   142,   186,
     317,   -50,   149,   186,   186,   186,    -5,   -50,    20,   -35,
     311,   -50,   -50,   233,   233,   280,   186,   186,   186,   186,
     186,   186,    75,    91,   186,   186,   186,   186,   186,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -34,   -50,
      -4,    21,   136,   123,    12,   -50,   -50,    69,   -50,     6,
     -50,    77,   -30,   149,   149,   149,   149,   149,   149,    98,
     107,    37,    37,    -5,    -5,    -5,   -50,   103,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     317,   280,   -50,   -50,   -50,    76,   -50,   -50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -31,   -49,    72,
     -50,   -50,   138,     7,     8,    -8
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -82
static const yytype_int16 yytable[] =
{
      58,    89,    52,   116,    61,    62,   -55,    63,    64,    89,
     -55,     3,    63,    64,     7,   117,    36,     4,    74,    75,
      76,    77,    56,    78,    60,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    95,    96,     8,    65,   -51,    10,
      59,    88,   -51,    53,    54,    90,    91,    92,    74,    75,
      76,    77,    78,    78,    55,    79,    80,    57,   103,   104,
     105,   106,   107,   108,   -55,   127,   111,   112,   113,   114,
     115,    97,    98,    74,    75,    76,    77,   140,    78,    81,
      93,    38,    39,    40,    41,    42,    43,    44,    45,    46,
     128,    76,    77,    82,    78,    83,    89,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    84,    85,    86,   145,
      87,   109,    64,    57,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    47,    23,   110,    24,    48,
      26,    27,    28,    29,   142,   141,   147,   130,   131,   132,
     133,   134,   135,   143,   144,    30,    35,     0,   146,     0,
       0,    31,   119,   120,   121,   122,   123,   124,   125,   126,
      49,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,    27,    28,
      29,     0,     0,     0,   136,   137,   138,   139,    74,    75,
      76,    77,    30,    78,   -81,   -81,   -81,   -81,    31,   -81,
       0,    74,    75,    76,    77,   129,    78,    32,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    47,
      23,     0,    24,    25,    26,    27,    28,    29,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    47,    23,     0,    24,
      25,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    99,    23,     0,    24,    25,    26,    27,
      28,    29,    38,    39,    40,    41,    42,    43,    44,    45,
      46,     0,     0,    30,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
       0,     0,     0,     0,    57,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      96,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,    78
};

static const yytype_int16 yycheck[] =
{
      31,    50,    10,    41,    20,    21,     0,    42,    43,    58,
       4,     0,    42,    43,    37,    53,     8,     3,    52,    53,
      54,    55,    30,    57,    32,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    69,    69,     4,    67,     0,    58,
      32,    49,     4,    68,    68,    53,    54,    55,    52,    53,
      54,    55,    57,    57,    68,    66,    66,    37,    66,    67,
      68,    69,    70,    71,    58,    69,    74,    75,    76,    77,
      78,    63,    64,    52,    53,    54,    55,    65,    57,    66,
      60,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      69,    54,    55,    66,    57,    66,   145,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    66,    66,    66,   140,
      66,    36,    43,    37,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    36,    36,    37,
      38,    39,    40,    41,    36,    58,    60,    14,    15,    16,
      17,    18,    19,    36,    41,    53,     8,    -1,   141,    -1,
      -1,    59,    80,    81,    82,    83,    84,    85,    86,    87,
      68,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    61,    62,    63,    64,    52,    53,
      54,    55,    53,    57,    52,    53,    54,    55,    59,    57,
      -1,    52,    53,    54,    55,    69,    57,    68,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    -1,    36,    37,    38,    39,
      40,    41,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    37,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    -1,    57
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    72,     0,     3,    73,    80,    37,     4,    81,
      58,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    36,    37,    38,    39,    40,    41,
      53,    59,    68,    74,    75,    82,    84,    85,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    33,    37,    68,
      77,    78,    85,    68,    68,    68,    85,    37,    77,    84,
      85,    20,    21,    42,    43,    67,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    57,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    85,    78,
      85,    85,    85,    60,    76,    69,    69,    84,    84,    33,
      82,    83,    84,    85,    85,    85,    85,    85,    85,    36,
      36,    85,    85,    85,    85,    85,    41,    53,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    69,    69,    69,
      14,    15,    16,    17,    18,    19,    61,    62,    63,    64,
      65,    58,    36,    36,    41,    77,    83,    60
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
        case 5:
#line 57 "parse.y"
    {

                                        pnum=0;
                                        map<string,list<myParticle> >::iterator it ;
                                        string name = (yyvsp[(2) - (4)].s);
                                        it = ListParts.find(name);
                        
                                        if(it != ListParts.end()) {
                                                cout <<name<<" : " ;
                                                yyerror("Particule already defined");
                                                YYERROR;//stops parsing if variable already defined
                                                
                                        }
                                        
                                        parts.push_back(name+" : "+(yyvsp[(4) - (4)].s));
                                        //List part 
                                        
                                                std::cout<<"\n TMP List: \n";
                                                list<myParticle>::iterator myiterator;
                                                myiterator = TmpParticle.begin();
                                                while (myiterator != TmpParticle.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }
                                        
                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);
                                        ListParts.insert(make_pair(name,newList));
                                                                                
				;}
    break;

  case 6:
#line 87 "parse.y"
    {//create node and insert it in map string->node
                                        pnum=0;
                                        map<string, string>::iterator it ;
                                        string name = (yyvsp[(2) - (4)].s);
                                        it = vars.find(name);
                        
                                        if(it != vars.end()) {
                                                cout <<name<<" : " ;
                                                yyerror("Variable already defined");
                                                YYERROR;//stops parsing if variable already defined
                                                
                                        }
                                         
                                         string phrase= (yyvsp[(4) - (4)].s);
                                         vars.insert(make_pair(name,phrase));
                                         
				;}
    break;

  case 7:
#line 105 "parse.y"
    {     //have to empty list in here and ready to create the node
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }m";                        
                                        (yyval.s)=strdup(tmp.c_str());
                                        std::cout<<"\n M List: \n";
                                                list<myParticle>::iterator myiterator;
                                                myiterator = TmpParticle.begin();
                                                while (myiterator != TmpParticle.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }
                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node

                                ;}
    break;

  case 8:
#line 120 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }q";                        
                                        (yyval.s)=strdup(tmp.c_str());
                                        std::cout<<"\n Q List: \n";
                                                list<myParticle>::iterator myiterator;
                                                myiterator = TmpParticle.begin();
                                                while (myiterator != TmpParticle.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }
                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node

                                ;}
    break;

  case 9:
#line 135 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }P";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node

                                ;}
    break;

  case 10:
#line 144 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }E";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 11:
#line 152 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }Phi";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 12:
#line 160 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }Eta";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 13:
#line 168 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }AbsEta";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 14:
#line 176 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }Pt";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 15:
#line 184 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }Pz";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 16:
#line 192 "parse.y"
    {     
                                        string s=(yyvsp[(2) - (4)].s);
                                        tmp="{ "+s+" }ndf";                        
                                        (yyval.s)=strdup(tmp.c_str());

                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);//then add newList to node
                                ;}
    break;

  case 17:
#line 200 "parse.y"
    {     //create Node with TmpParticle1,TmpParticle
                                        
                                        string s=(yyvsp[(1) - (2)].s);                                       
                                        s=s+"dR";                        
                                        (yyval.s)=strdup(s.c_str());
                                        std::cout<<"\n DR TMP1 List: \n";
                                                list<myParticle>::iterator myiterator;
                                                myiterator = TmpParticle1.begin();
                                                while (myiterator != TmpParticle1.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }
                                                std::cout<<"\n DR TMP List: \n";
                                                
                                                myiterator = TmpParticle.begin();
                                                while (myiterator != TmpParticle.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }
                                        
                                        list<myParticle> newList;
                                        TmpParticle.swap(newList);
                                        list<myParticle> newList1;
                                        TmpParticle1.swap(newList1);
                                ;}
    break;

  case 18:
#line 225 "parse.y"
    {    //create Node with TmpParticle1,TmpParticle
                                        
                                        string s=(yyvsp[(1) - (2)].s);                                       
                                        s=s+"dPhi";                        
                                        (yyval.s)=strdup(s.c_str());

                                        std::cout<<"\n Dphi TMP1 List: \n";
                                                list<myParticle>::iterator myiterator;
                                                myiterator = TmpParticle1.begin();
                                                while (myiterator != TmpParticle1.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }
                                                std::cout<<"\n Dphi TMP List: \n";
                                                
                                                myiterator = TmpParticle.begin();
                                                while (myiterator != TmpParticle.end()) {
                                                std::cout << "type: " << myiterator->type << " index: " << myiterator->index << endl;
                                                myiterator++;
                                                }

                                                list<myParticle> newList;
                                                TmpParticle.swap(newList);
                                                list<myParticle> newList1;
                                                TmpParticle1.swap(newList1);
                                ;}
    break;

  case 19:
#line 251 "parse.y"
    {    
                                        
                                        string s="NELE";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 20:
#line 256 "parse.y"
    {    
                                        
                                        string s="NMUO";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 21:
#line 261 "parse.y"
    {    
                                        
                                        string s="NLEP";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 22:
#line 266 "parse.y"
    {    
                                        
                                        string s="NPHO";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 23:
#line 271 "parse.y"
    {    
                                        
                                        string s="NJET";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 24:
#line 276 "parse.y"
    {    
                                        
                                        string s="NBJET";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 25:
#line 281 "parse.y"
    {    
                                        
                                        string s="NQGJET";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 26:
#line 286 "parse.y"
    {    
                                        
                                        string s="HT";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 27:
#line 291 "parse.y"
    {    
                                        
                                        string s="METMWT";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 28:
#line 296 "parse.y"
    {    
                                        
                                        string s="MWT";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 29:
#line 301 "parse.y"
    {    
                                        
                                        string s="MET";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 30:
#line 306 "parse.y"
    {    
                                        
                                        string s="ALL";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 31:
#line 311 "parse.y"
    {    
                                        
                                        string s="LEPSF";                                                              
                                        (yyval.s)=strdup(s.c_str());
                                ;}
    break;

  case 32:
#line 317 "parse.y"
    { pnum=0; TmpParticle.swap(TmpParticle1); ;}
    break;

  case 33:
#line 317 "parse.y"
    { 
                                                        string s=(yyvsp[(2) - (6)].s);
                                                        string s2=(yyvsp[(5) - (6)].s);
                                                        s="{ "+s+" , "+s2+" }";                        
                                                        (yyval.s)=strdup(s.c_str());

                                                        ;}
    break;

  case 34:
#line 325 "parse.y"
    {                                                 
                                                char s [512];
                                                strcpy(s,(yyval.s)); 
                                                strcat(s," ");
                                                strcat(s,(yyvsp[(2) - (2)].s));
                                                strcpy((yyval.s),s);                                       

                                        ;}
    break;

  case 35:
#line 333 "parse.y"
    {if (pnum==0){
                                                (yyval.s)=strdup((yyvsp[(1) - (1)].s));
                                                   
                                                                                              
                                        }
                                        else{                                                
                                                char s [512];
                                                strcpy(s,(yyval.s)); 
                                                strcat(s," ");
                                                strcat(s,(yyvsp[(1) - (1)].s));
                                                strcpy((yyval.s),s);
                                        }
                                        pnum++;;}
    break;

  case 36:
#line 347 "parse.y"
    {
                            //create particle add it to list of Particles
                                myParticle a;
                                a.type = "ELE";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);                            
                                tmp="ele_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                                        
                            ;}
    break;

  case 37:
#line 357 "parse.y"
    {       tmp="muo_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "MUO";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 38:
#line 365 "parse.y"
    {       tmp="lep_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "LEP";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 39:
#line 373 "parse.y"
    {       tmp="pho_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "PHO";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 40:
#line 381 "parse.y"
    {       tmp="jet_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "JET";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 41:
#line 389 "parse.y"
    {       tmp="bjet_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "BJET";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 42:
#line 397 "parse.y"
    {       tmp="qgjet_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "QGJET";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 43:
#line 405 "parse.y"
    {       tmp="numet_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "NUMET";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 44:
#line 413 "parse.y"
    {     tmp="metlv_"+to_string((int)(yyvsp[(3) - (3)].real));                        
                                (yyval.s)=strdup(tmp.c_str());
                                myParticle a;
                                a.type = "METLV";
                                a.index = (int)(yyvsp[(3) - (3)].real);
                                TmpParticle.push_back(a);  
                                
                        ;}
    break;

  case 45:
#line 421 "parse.y"
    { //we want the original defintions as well -> put it in parts and put the rest in ListParts
                
                map<string,list<myParticle> >::iterator it;
                it = ListParts.find((yyvsp[(1) - (1)].s));
     
                if(it == ListParts.end()) {
                        cout <<(yyvsp[(1) - (1)].s)<<" : " ;
                        yyerror("Particule not defined");
                        YYERROR;//stops parsing if particle not found
                        
                }
                else {
                        list<myParticle> newList= it->second ;
                        TmpParticle.splice(TmpParticle.end(), newList);
                        (yyval.s)=(yyvsp[(1) - (1)].s);

                }

               ;}
    break;

  case 46:
#line 441 "parse.y"
    {(yyval.real)=-(yyvsp[(2) - (2)].real);;}
    break;

  case 47:
#line 442 "parse.y"
    {(yyval.real)= (yyvsp[(1) - (1)].real);;}
    break;

  case 50:
#line 447 "parse.y"
    {                                         
                                         string phrase= (yyvsp[(2) - (2)].s);
                                         cuts.insert(make_pair(cutcount++,phrase));
    
				;}
    break;

  case 51:
#line 452 "parse.y"
    {                                         
                                         string phrase= " all ";
                                         cuts.insert(make_pair(cutcount++,phrase));
    
				;}
    break;

  case 52:
#line 457 "parse.y"
    {                                         
                                         string phrase= (yyvsp[(2) - (2)].s);
                                         cuts.insert(make_pair(cutcount++,phrase));
    
				;}
    break;

  case 53:
#line 463 "parse.y"
    { string s1=(yyvsp[(1) - (5)].s); string s3=(yyvsp[(3) - (5)].s);string s4=(yyvsp[(5) - (5)].s);
                        tmp=s1+" ? "+s3+" : "+s4;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 54:
#line 468 "parse.y"
    {(yyval.s)=(yyvsp[(1) - (1)].s);;}
    break;

  case 55:
#line 469 "parse.y"
    {tmp= " all " ;(yyval.s)=strdup(tmp.c_str());;}
    break;

  case 56:
#line 470 "parse.y"
    {(yyval.s)=(yyvsp[(1) - (1)].s);;}
    break;

  case 57:
#line 472 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s); 
                        tmp=s1+" < "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 58:
#line 476 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" > "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 59:
#line 480 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" <= "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 60:
#line 484 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" >= "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 61:
#line 488 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" == "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 62:
#line 492 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" != "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 63:
#line 496 "parse.y"
    { string s1=(yyvsp[(1) - (4)].s); string s3=to_string((yyvsp[(3) - (4)].real));string s4=to_string((yyvsp[(4) - (4)].real));
                        tmp=s1+" [] "+s3+" "+s4;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 64:
#line 500 "parse.y"
    { string s1=(yyvsp[(1) - (4)].s); string s3=to_string((yyvsp[(3) - (4)].real));string s4=to_string((yyvsp[(4) - (4)].real));
                        tmp=s1+" ][ "+s3+" "+s4; 
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 65:
#line 504 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" and "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 66:
#line 508 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
                        tmp=s1+" or "+s3;   
                        (yyval.s)=strdup(tmp.c_str()); 
                        ;}
    break;

  case 67:
#line 512 "parse.y"
    { string s3=(yyvsp[(2) - (3)].s);
                                tmp=" ( "+s3+" ) ";   
                                (yyval.s)=strdup(tmp.c_str()); 
                                ;}
    break;

  case 68:
#line 517 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
               tmp=s1+" + "+s3;   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 69:
#line 521 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
               tmp=s1+" - "+s3;   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 70:
#line 525 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
               tmp=s1+" * "+s3;   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 71:
#line 529 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
               tmp=s1+" / "+s3;   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 72:
#line 533 "parse.y"
    { string s1=(yyvsp[(1) - (3)].s); string s3=(yyvsp[(3) - (3)].s);
               tmp=s1+" ^ "+s3;   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 73:
#line 537 "parse.y"
    { string s1=(yyvsp[(2) - (2)].s);
               tmp=" -"+s1;   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 74:
#line 541 "parse.y"
    { string s3=(yyvsp[(3) - (4)].s);
               tmp=" cos( "+s3+" ) ";   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 75:
#line 545 "parse.y"
    { string s3=(yyvsp[(3) - (4)].s);
               tmp=" sin( "+s3+" ) ";   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 76:
#line 549 "parse.y"
    { string s3=(yyvsp[(3) - (4)].s);
               tmp=" tan( "+s3+" ) ";   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 77:
#line 553 "parse.y"
    { string s3=(yyvsp[(2) - (3)].s);
               tmp=" ( "+s3+" ) ";   
               (yyval.s)=strdup(tmp.c_str()); 
               ;}
    break;

  case 78:
#line 557 "parse.y"
    { tmp=to_string((yyvsp[(1) - (1)].real)); (yyval.s)=strdup(tmp.c_str()); ;}
    break;

  case 79:
#line 558 "parse.y"
    { tmp=to_string((int)(yyvsp[(1) - (1)].real)); (yyval.s)=strdup(tmp.c_str()); ;}
    break;

  case 80:
#line 559 "parse.y"
    {(yyval.s)=(yyvsp[(1) - (1)].s); pnum=0;;}
    break;

  case 81:
#line 561 "parse.y"
    { //we want the original defintions as well
                map<string, string>::iterator it ;
                it = vars.find((yyvsp[(1) - (1)].s));
     
                if(it == vars.end()) {
                        cout <<(yyvsp[(1) - (1)].s)<<" : " ;
                        yyerror("Variable not defined");
                        YYERROR;//stops parsing if variable not found
                        
                }
                else {
                        tmp= it->second ;
                        (yyval.s)=strdup(tmp.c_str());
                }
               ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2431 "b.cpp"
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


#line 577 "parse.y"

int main(void) {
        yyparse(); 

cout<<"\n Particle Lists: \n";
        
        for (map<string,list<myParticle> >::iterator it1 = ListParts.begin(); it1 != ListParts.end(); it1++)
                {
                cout << it1->first << ": ";
                for (list<myParticle>::iterator lit = it1->second.begin(); lit  != it1->second.end(); lit++)
                cout << lit->type << "_" << lit->index << " ";
                cout << "\n";
                }
                
        
        cout<<"\n Particles defintions as given by user: \n";
	 
        std::list<std::string>::iterator it = parts.begin();
        while(it != parts.end())
        {
                std::cout<<(*it)<<std::endl;
                it++;
        }

        cout<<"\n Variables results: \n";
	map<string,string >::iterator itv = vars.begin();
        while(itv != vars.end())
        {
                std::cout<<itv->first<<" :: "<<itv->second<<std::endl;
                itv++;
        }

	cout<<"\n CUTS : \n";
	std::map<int, string>::iterator iter = cuts.begin();
        while(iter != cuts.end())
        {
                cout<<iter->first<<" :: "<<iter->second<<endl;
                iter++;
        }		
                }


                // simple calculator
// e : e '+' e  { $$ = $1 + $3 ;string s=$2;
//                                         tmp="{ "+s+" }m";                        
//                                         $$=strdup(tmp.c_str()); }
//    | e '-' e { $$ = $1 - $3 ; }
//    | e '*' e { $$ = $1 * $3 ; }
//    | e '/' e { $$ = $1 / $3*1.0 ; }
//    | e '^' e { $$ = pow($1,$3) ;  } 	
//    |'-' e %prec Unary { $$ = - $2 ; }
//    | COS '(' e ')' { $$ = cos($3) ;}
//    | SIN '(' e ')' { $$ = sin($3) ;}
//    | TAN '(' e ')' { $$ = tan($3) ;}
//    |'(' e ')' { $$ = $2 ;}
//    | NB { $$ = $1 ;} 
//    | INT { $$ = $1 ;}	
//    | function 
//    ;

