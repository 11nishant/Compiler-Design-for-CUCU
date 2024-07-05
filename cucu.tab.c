/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"


#include <stdio.h>
#include <string.h>
#include <math.h>
int yylex();
void yyerror(char const *);
extern FILE *yyin,*yyout,*lexout;


#line 82 "cucu.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "cucu.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_CHAR = 4,                       /* CHAR  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_IF = 6,                         /* IF  */
  YYSYMBOL_ELSE = 7,                       /* ELSE  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_COMMA = 9,                      /* COMMA  */
  YYSYMBOL_ASSIGN = 10,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_MUL = 14,                       /* MUL  */
  YYSYMBOL_SEMI = 15,                      /* SEMI  */
  YYSYMBOL_LEFT_CURLY = 16,                /* LEFT_CURLY  */
  YYSYMBOL_RIGHT_CURLY = 17,               /* RIGHT_CURLY  */
  YYSYMBOL_LEFT_BRAC = 18,                 /* LEFT_BRAC  */
  YYSYMBOL_RIGHT_BRAC = 19,                /* RIGHT_BRAC  */
  YYSYMBOL_LEFT_SQBRAC = 20,               /* LEFT_SQBRAC  */
  YYSYMBOL_RIGHT_SQBRAC = 21,              /* RIGHT_SQBRAC  */
  YYSYMBOL_GREATER_THAN = 22,              /* GREATER_THAN  */
  YYSYMBOL_LESS_THAN = 23,                 /* LESS_THAN  */
  YYSYMBOL_COMPARE_EQUAL = 24,             /* COMPARE_EQUAL  */
  YYSYMBOL_LESS_THAN_EQUAL = 25,           /* LESS_THAN_EQUAL  */
  YYSYMBOL_GREATER_THAN_EQUAL = 26,        /* GREATER_THAN_EQUAL  */
  YYSYMBOL_COMPARE_NOT_EQUAL = 27,         /* COMPARE_NOT_EQUAL  */
  YYSYMBOL_NUM = 28,                       /* NUM  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_STRING = 30,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 31,                  /* $accept  */
  YYSYMBOL_programs = 32,                  /* programs  */
  YYSYMBOL_program = 33,                   /* program  */
  YYSYMBOL_var_decl = 34,                  /* var_decl  */
  YYSYMBOL_func_decl = 35,                 /* func_decl  */
  YYSYMBOL_func_def = 36,                  /* func_def  */
  YYSYMBOL_func_args = 37,                 /* func_args  */
  YYSYMBOL_int = 38,                       /* int  */
  YYSYMBOL_char = 39,                      /* char  */
  YYSYMBOL_func_body = 40,                 /* func_body  */
  YYSYMBOL_stmt_list = 41,                 /* stmt_list  */
  YYSYMBOL_stmt = 42,                      /* stmt  */
  YYSYMBOL_assign_stmt = 43,               /* assign_stmt  */
  YYSYMBOL_return_stmt = 44,               /* return_stmt  */
  YYSYMBOL_func_call = 45,                 /* func_call  */
  YYSYMBOL_condition = 46,                 /* condition  */
  YYSYMBOL_loop = 47,                      /* loop  */
  YYSYMBOL_bool = 48,                      /* bool  */
  YYSYMBOL_ident = 49,                     /* ident  */
  YYSYMBOL_number = 50,                    /* number  */
  YYSYMBOL_string = 51,                    /* string  */
  YYSYMBOL_expr = 52                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  118

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   285


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    26,    26,    29,    30,    31,    32,    33,    34,    37,
      38,    39,    40,    43,    44,    45,    46,    49,    50,    51,
      52,    55,    56,    57,    58,    61,    64,    67,    68,    71,
      72,    75,    76,    77,    78,    79,    80,    83,    86,    87,
      90,    91,    94,    95,    98,   101,   102,   103,   104,   105,
     106,   107,   110,   113,   116,   119,   120,   121,   122,   123,
     124,   125
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "CHAR", "WHILE",
  "IF", "ELSE", "RETURN", "COMMA", "ASSIGN", "PLUS", "MINUS", "DIV", "MUL",
  "SEMI", "LEFT_CURLY", "RIGHT_CURLY", "LEFT_BRAC", "RIGHT_BRAC",
  "LEFT_SQBRAC", "RIGHT_SQBRAC", "GREATER_THAN", "LESS_THAN",
  "COMPARE_EQUAL", "LESS_THAN_EQUAL", "GREATER_THAN_EQUAL",
  "COMPARE_NOT_EQUAL", "NUM", "ID", "STRING", "$accept", "programs",
  "program", "var_decl", "func_decl", "func_def", "func_args", "int",
  "char", "func_body", "stmt_list", "stmt", "assign_stmt", "return_stmt",
  "func_call", "condition", "loop", "bool", "ident", "number", "string",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-57)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      46,   -57,   -57,    28,    46,   -57,   -57,   -57,    32,    32,
     -57,   -57,   -57,   -57,   -57,    56,   137,    34,   -57,     6,
       1,   -57,    10,    34,   -57,   -57,   -57,   196,    95,    51,
      32,    32,   -57,    20,   122,    53,    93,    34,    34,    34,
      34,   -57,    65,    76,   -11,   -57,   194,   -57,    32,    32,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,    84,   226,   128,
     100,   105,   -57,   -57,   -57,   155,   -57,   108,   108,   -57,
     -57,    34,    34,   -57,   230,   161,   -57,    22,    74,    40,
      34,   -57,   -57,    46,    46,   -57,   -57,    54,   163,   202,
     -57,   -57,   -57,   114,   163,   235,   -57,   -57,   188,    34,
      34,    34,    34,    34,    34,   188,   -57,   -57,   -57,   208,
     208,   208,   208,   208,   208,   132,   188,   -57
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    25,    26,     0,     2,     3,     4,     5,     0,     0,
       1,     6,     7,     8,    52,     0,     0,     0,     9,     0,
       0,    11,     0,     0,    53,    61,    60,     0,     0,     0,
       0,     0,    54,     0,     0,     0,     0,     0,     0,     0,
       0,    10,     0,     0,     0,    14,     0,    36,     0,     0,
      18,    28,    31,    33,    32,    34,    35,    61,     0,     0,
      21,    23,    12,    16,    20,     0,    55,    56,    57,    59,
      58,     0,     0,    38,     0,     0,    30,     0,     0,     0,
       0,    13,    17,     0,     0,    15,    19,     0,    51,     0,
      39,    27,    29,     0,    41,     0,    22,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    40,    37,    44,    46,
      45,    47,    49,    50,    48,    42,     0,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -57,   -57,   -57,    15,   131,   138,   -19,     2,     8,   -23,
     -57,   -41,   -57,   -57,   -57,   -57,   -57,   -56,    -8,   -57,
     -57,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,    47,     6,     7,    29,    48,    49,    50,
      75,    51,    52,    53,    54,    55,    56,    87,    25,    26,
      33,    58
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      15,    16,     8,    35,    73,    76,     8,    23,     9,     1,
       2,    64,     9,     1,     2,     5,    89,    24,    14,    11,
      57,    30,    60,    61,    30,    28,    57,    31,    10,    34,
      31,    32,    17,    27,    92,    62,    82,    18,    57,    36,
      77,    78,    86,   109,   110,   111,   112,   113,   114,     1,
       2,    57,    23,    67,    68,    69,    70,    57,    23,    93,
      74,    14,    24,    14,    96,    97,    17,    57,    24,    14,
      59,    18,    65,    98,    19,   108,    99,   100,   101,   102,
     103,   104,   115,    71,    20,    30,    30,    88,    88,    21,
      57,    31,    31,   117,    72,    94,    95,    57,     1,     2,
      42,    43,    79,    44,    37,    38,    39,    40,    57,    83,
      45,    46,    66,    23,    84,    88,    88,    88,    88,    88,
      88,    39,    40,    24,    14,     1,     2,    42,    43,   106,
      44,     1,     2,    42,    43,    12,    44,    63,    46,   116,
      23,     0,    13,    81,    46,     0,    23,    20,     0,     0,
      24,    14,    21,     0,     0,    22,    24,    14,     1,     2,
      42,    43,     0,    44,     1,     2,    42,    43,     0,    44,
      85,    46,     0,    23,    37,    38,    39,    40,    91,    23,
       0,     0,     0,    24,    14,     0,     0,     0,     0,    24,
      14,     1,     2,    42,    43,     0,    44,     1,     2,    42,
      43,     0,    44,     0,    46,     0,    23,    37,    38,    39,
      40,    41,    23,     0,     0,     0,    24,    14,     0,     0,
       0,   105,    24,    14,    99,   100,   101,   102,   103,   104,
      99,   100,   101,   102,   103,   104,    80,    37,    38,    39,
      40,    37,    38,    39,    40,    90,    37,    38,    39,    40,
     107
};

static const yytype_int8 yycheck[] =
{
       8,     9,     0,    22,    15,    46,     4,    18,     0,     3,
       4,    34,     4,     3,     4,     0,    72,    28,    29,     4,
      28,    19,    30,    31,    22,    19,    34,    19,     0,    19,
      22,    30,    10,    17,    75,    15,    59,    15,    46,    23,
      48,    49,    65,    99,   100,   101,   102,   103,   104,     3,
       4,    59,    18,    37,    38,    39,    40,    65,    18,    19,
      44,    29,    28,    29,    83,    84,    10,    75,    28,    29,
      19,    15,    19,    19,    18,    98,    22,    23,    24,    25,
      26,    27,   105,    18,    10,    83,    84,    71,    72,    15,
      98,    83,    84,   116,    18,    79,    80,   105,     3,     4,
       5,     6,    18,     8,    11,    12,    13,    14,   116,     9,
      15,    16,    19,    18,     9,    99,   100,   101,   102,   103,
     104,    13,    14,    28,    29,     3,     4,     5,     6,    15,
       8,     3,     4,     5,     6,     4,     8,    15,    16,     7,
      18,    -1,     4,    15,    16,    -1,    18,    10,    -1,    -1,
      28,    29,    15,    -1,    -1,    18,    28,    29,     3,     4,
       5,     6,    -1,     8,     3,     4,     5,     6,    -1,     8,
      15,    16,    -1,    18,    11,    12,    13,    14,    17,    18,
      -1,    -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    28,
      29,     3,     4,     5,     6,    -1,     8,     3,     4,     5,
       6,    -1,     8,    -1,    16,    -1,    18,    11,    12,    13,
      14,    15,    18,    -1,    -1,    -1,    28,    29,    -1,    -1,
      -1,    19,    28,    29,    22,    23,    24,    25,    26,    27,
      22,    23,    24,    25,    26,    27,    10,    11,    12,    13,
      14,    11,    12,    13,    14,    15,    11,    12,    13,    14,
      15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,    32,    33,    34,    35,    36,    38,    39,
       0,    34,    35,    36,    29,    49,    49,    10,    15,    18,
      10,    15,    18,    18,    28,    49,    50,    52,    19,    37,
      38,    39,    30,    51,    19,    37,    52,    11,    12,    13,
      14,    15,     5,     6,     8,    15,    16,    34,    38,    39,
      40,    42,    43,    44,    45,    46,    47,    49,    52,    19,
      49,    49,    15,    15,    40,    19,    19,    52,    52,    52,
      52,    18,    18,    15,    52,    41,    42,    49,    49,    18,
      10,    15,    40,     9,     9,    15,    40,    48,    52,    48,
      15,    17,    42,    19,    52,    52,    37,    37,    19,    22,
      23,    24,    25,    26,    27,    19,    15,    15,    40,    48,
      48,    48,    48,    48,    48,    40,     7,    40
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    31,    32,    33,    33,    33,    33,    33,    33,    34,
      34,    34,    34,    35,    35,    35,    35,    36,    36,    36,
      36,    37,    37,    37,    37,    38,    39,    40,    40,    41,
      41,    42,    42,    42,    42,    42,    42,    43,    44,    44,
      45,    45,    46,    46,    47,    48,    48,    48,    48,    48,
      48,    48,    49,    50,    51,    52,    52,    52,    52,    52,
      52,    52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     2,     2,     2,     3,
       5,     3,     5,     6,     5,     6,     5,     6,     5,     6,
       5,     2,     4,     2,     4,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     3,
       4,     3,     5,     7,     5,     3,     3,     3,     3,     3,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 3: /* program: var_decl  */
#line 29 "cucu.y"
                            {fprintf(yyout,"\n");}
#line 1223 "cucu.tab.c"
    break;

  case 4: /* program: func_decl  */
#line 30 "cucu.y"
                            {fprintf(yyout,"\n");}
#line 1229 "cucu.tab.c"
    break;

  case 5: /* program: func_def  */
#line 31 "cucu.y"
                            {fprintf(yyout,"\n");}
#line 1235 "cucu.tab.c"
    break;

  case 6: /* program: program var_decl  */
#line 32 "cucu.y"
                            {fprintf(yyout,"\n");}
#line 1241 "cucu.tab.c"
    break;

  case 7: /* program: program func_decl  */
#line 33 "cucu.y"
                            {fprintf(yyout,"\n");}
#line 1247 "cucu.tab.c"
    break;

  case 8: /* program: program func_def  */
#line 34 "cucu.y"
                            {fprintf(yyout,"\n");}
#line 1253 "cucu.tab.c"
    break;

  case 10: /* var_decl: int ident ASSIGN expr SEMI  */
#line 38 "cucu.y"
                                        {fprintf(yyout,"Assignment : =\n");}
#line 1259 "cucu.tab.c"
    break;

  case 12: /* var_decl: char ident ASSIGN string SEMI  */
#line 40 "cucu.y"
                                        {fprintf(yyout,"Assignment : =\n");}
#line 1265 "cucu.tab.c"
    break;

  case 13: /* func_decl: int ident LEFT_BRAC func_args RIGHT_BRAC SEMI  */
#line 43 "cucu.y"
                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1271 "cucu.tab.c"
    break;

  case 14: /* func_decl: int ident LEFT_BRAC RIGHT_BRAC SEMI  */
#line 44 "cucu.y"
                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1277 "cucu.tab.c"
    break;

  case 15: /* func_decl: char ident LEFT_BRAC func_args RIGHT_BRAC SEMI  */
#line 45 "cucu.y"
                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1283 "cucu.tab.c"
    break;

  case 16: /* func_decl: char ident LEFT_BRAC RIGHT_BRAC SEMI  */
#line 46 "cucu.y"
                                                                    {fprintf(yyout,"Function declared above\n\n");}
#line 1289 "cucu.tab.c"
    break;

  case 17: /* func_def: int ident LEFT_BRAC func_args RIGHT_BRAC func_body  */
#line 49 "cucu.y"
                                                                    {fprintf(yyout,"Function Defined above\n\n");}
#line 1295 "cucu.tab.c"
    break;

  case 18: /* func_def: int ident LEFT_BRAC RIGHT_BRAC func_body  */
#line 50 "cucu.y"
                                                                    {fprintf(yyout,"Function Defined above\n\n");}
#line 1301 "cucu.tab.c"
    break;

  case 19: /* func_def: char ident LEFT_BRAC func_args RIGHT_BRAC func_body  */
#line 51 "cucu.y"
                                                                    {fprintf(yyout,"Function Defined above\n\n");}
#line 1307 "cucu.tab.c"
    break;

  case 20: /* func_def: char ident LEFT_BRAC RIGHT_BRAC func_body  */
#line 52 "cucu.y"
                                                                    {fprintf(yyout,"Function Defined above\n\n");}
#line 1313 "cucu.tab.c"
    break;

  case 21: /* func_args: int ident  */
#line 55 "cucu.y"
                                        {fprintf(yyout,"Function Arguments Passed Above\n\n");}
#line 1319 "cucu.tab.c"
    break;

  case 23: /* func_args: char ident  */
#line 57 "cucu.y"
                                        {fprintf(yyout,"Function Arguments Passed Above\n\n");}
#line 1325 "cucu.tab.c"
    break;

  case 25: /* int: INT  */
#line 61 "cucu.y"
                {fprintf(yyout,"Datatype : int\n");}
#line 1331 "cucu.tab.c"
    break;

  case 26: /* char: CHAR  */
#line 64 "cucu.y"
                {fprintf(yyout,"Datatype : char *\n");}
#line 1337 "cucu.tab.c"
    break;

  case 32: /* stmt: func_call  */
#line 76 "cucu.y"
                            {fprintf(yyout,"Function call ends \n\n");}
#line 1343 "cucu.tab.c"
    break;

  case 33: /* stmt: return_stmt  */
#line 77 "cucu.y"
                            {fprintf(yyout,"Return statement \n\n");}
#line 1349 "cucu.tab.c"
    break;

  case 34: /* stmt: condition  */
#line 78 "cucu.y"
                            {fprintf(yyout,"If Condition Ends \n\n");}
#line 1355 "cucu.tab.c"
    break;

  case 35: /* stmt: loop  */
#line 79 "cucu.y"
                            {fprintf(yyout,"While Loop Ends \n\n");}
#line 1361 "cucu.tab.c"
    break;

  case 45: /* bool: bool LESS_THAN bool  */
#line 101 "cucu.y"
                                        {fprintf(yyout,"Operator : < \n");}
#line 1367 "cucu.tab.c"
    break;

  case 46: /* bool: bool GREATER_THAN bool  */
#line 102 "cucu.y"
                                        {fprintf(yyout,"Operator : > \n");}
#line 1373 "cucu.tab.c"
    break;

  case 47: /* bool: bool COMPARE_EQUAL bool  */
#line 103 "cucu.y"
                                        {fprintf(yyout,"Operator : == \n");}
#line 1379 "cucu.tab.c"
    break;

  case 48: /* bool: bool COMPARE_NOT_EQUAL bool  */
#line 104 "cucu.y"
                                        {fprintf(yyout,"Operator : != \n");}
#line 1385 "cucu.tab.c"
    break;

  case 49: /* bool: bool LESS_THAN_EQUAL bool  */
#line 105 "cucu.y"
                                        {fprintf(yyout,"Operator : <= \n");}
#line 1391 "cucu.tab.c"
    break;

  case 50: /* bool: bool GREATER_THAN_EQUAL bool  */
#line 106 "cucu.y"
                                        {fprintf(yyout,"Operator : >= \n");}
#line 1397 "cucu.tab.c"
    break;

  case 52: /* ident: ID  */
#line 110 "cucu.y"
                {fprintf(yyout,"Varibale : %s \n", (yyvsp[0].str));}
#line 1403 "cucu.tab.c"
    break;

  case 53: /* number: NUM  */
#line 113 "cucu.y"
                {fprintf(yyout,"Value : %d \n", (yyvsp[0].num));}
#line 1409 "cucu.tab.c"
    break;

  case 54: /* string: STRING  */
#line 116 "cucu.y"
                {fprintf(yyout,"Value : %s \n", (yyvsp[0].str));}
#line 1415 "cucu.tab.c"
    break;

  case 56: /* expr: expr PLUS expr  */
#line 120 "cucu.y"
                                {fprintf(yyout,"Operator : + \n");}
#line 1421 "cucu.tab.c"
    break;

  case 57: /* expr: expr MINUS expr  */
#line 121 "cucu.y"
                                {fprintf(yyout,"Operator : - \n");}
#line 1427 "cucu.tab.c"
    break;

  case 58: /* expr: expr MUL expr  */
#line 122 "cucu.y"
                                {fprintf(yyout,"Operator : * \n");}
#line 1433 "cucu.tab.c"
    break;

  case 59: /* expr: expr DIV expr  */
#line 123 "cucu.y"
                                {fprintf(yyout,"Operator : / \n");}
#line 1439 "cucu.tab.c"
    break;


#line 1443 "cucu.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 128 "cucu.y"


int main()
{
    yyin=fopen("Sample1.cu","r");
    //yyin=fopen("Sample2.cu","r");
    yyout=fopen("parser.txt","w");
    lexout=fopen("lexer.txt","w");
    yyparse();
    return 0;
}

void yyerror(char const *s){
    printf("Syntax Error\n");
}
