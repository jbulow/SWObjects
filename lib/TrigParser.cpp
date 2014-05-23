/* A Bison parser, made by GNU Bison 2.5.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2011 Free Software Foundation, Inc.
   
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

// Take the name prefix into account.
#define yylex   w3c_swlex

/* First part of user declarations.  */


/* Line 293 of lalr1.cc  */
#line 41 "lib/TrigParser.cpp"


#include "TrigParser.hpp"

/* User implementation prologue.  */

/* Line 299 of lalr1.cc  */
#line 125 "lib/TrigParser.ypp"

#include "TrigScanner.hpp"

/* Line 299 of lalr1.cc  */
#line 166 "lib/TrigParser.ypp"

#include "TrigScanner.hpp"

/* this "connects" the bison parser in the driver to the flex scanner class
 * object. it defines the yylex() function call to pull the next token from the
 * current lexer object of the driver context. */
#undef yylex
#define yylex driver.lexer->lexWrapper

#include "RdfDB.hpp"


/* Line 299 of lalr1.cc  */
#line 68 "lib/TrigParser.cpp"

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                               \
 do                                                                    \
   if (N)                                                              \
     {                                                                 \
       (Current).begin = YYRHSLOC (Rhs, 1).begin;                      \
       (Current).end   = YYRHSLOC (Rhs, N).end;                        \
     }                                                                 \
   else                                                                \
     {                                                                 \
       (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;        \
     }                                                                 \
 while (false)
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace w3c_sw {

/* Line 382 of lalr1.cc  */
#line 154 "lib/TrigParser.cpp"

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  TrigParser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
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
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  TrigParser::TrigParser (class TrigDriver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {
  }

  TrigParser::~TrigParser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  TrigParser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  TrigParser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  TrigParser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  TrigParser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  TrigParser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  TrigParser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  TrigParser::debug_level_type
  TrigParser::debug_level () const
  {
    return yydebug_;
  }

  void
  TrigParser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  TrigParser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  TrigParser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  TrigParser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* User initialization code.  */
    
/* Line 565 of lalr1.cc  */
#line 31 "lib/TrigParser.ypp"
{
    // initialize the initial location object
    yylloc.begin.filename = yylloc.end.filename = &driver.streamname;
}

/* Line 565 of lalr1.cc  */
#line 348 "lib/TrigParser.cpp"

    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 2:

/* Line 690 of lalr1.cc  */
#line 183 "lib/TrigParser.ypp"
    {
	driver.root = driver.defaultBGP;
	// driver.root = $<p_DefaultGraphPattern>1;
    }
    break;

  case 9:

/* Line 690 of lalr1.cc  */
#line 204 "lib/TrigParser.ypp"
    {
	driver.curSubject = (yysemantic_stack_[(1) - (1)].p_TTerm);
      }
    break;

  case 11:

/* Line 690 of lalr1.cc  */
#line 207 "lib/TrigParser.ypp"
    {
	driver.curSubject = (yysemantic_stack_[(1) - (1)].p_TTerm);
      }
    break;

  case 13:

/* Line 690 of lalr1.cc  */
#line 213 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 14:

/* Line 690 of lalr1.cc  */
#line 216 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 17:

/* Line 690 of lalr1.cc  */
#line 227 "lib/TrigParser.ypp"
    {
	driver.curBGP = driver.db->ensureGraph(driver.curSubject);
	driver.curSubject = NULL;
      }
    break;

  case 19:

/* Line 690 of lalr1.cc  */
#line 231 "lib/TrigParser.ypp"
    {
	driver.curBGP = driver.db->ensureGraph(NULL);
	driver.neededBGP = NULL;
      }
    break;

  case 21:

/* Line 690 of lalr1.cc  */
#line 238 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 22:

/* Line 690 of lalr1.cc  */
#line 241 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 25:

/* Line 690 of lalr1.cc  */
#line 252 "lib/TrigParser.ypp"
    {
	driver.curBGP = driver.db->ensureGraph(driver.curSubject);
	driver.curSubject = NULL;
      }
    break;

  case 27:

/* Line 690 of lalr1.cc  */
#line 256 "lib/TrigParser.ypp"
    {
	driver.curBGP = driver.db->ensureGraph(NULL);
	driver.neededBGP = NULL;
      }
    break;

  case 29:

/* Line 690 of lalr1.cc  */
#line 264 "lib/TrigParser.ypp"
    {
	driver.curBGP = driver.db->ensureGraph((yysemantic_stack_[(3) - (2)].p_TTerm));
	driver.neededBGP = NULL;
      }
    break;

  case 31:

/* Line 690 of lalr1.cc  */
#line 271 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 32:

/* Line 690 of lalr1.cc  */
#line 274 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 33:

/* Line 690 of lalr1.cc  */
#line 277 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 34:

/* Line 690 of lalr1.cc  */
#line 280 "lib/TrigParser.ypp"
    {
      (yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 35:

/* Line 690 of lalr1.cc  */
#line 287 "lib/TrigParser.ypp"
    {
	driver.curBGP = driver.defaultBGP;
	driver.neededBGP = NULL;
      }
    break;

  case 41:

/* Line 690 of lalr1.cc  */
#line 303 "lib/TrigParser.ypp"
    {
	driver.ignorePrefix(true);
      }
    break;

  case 42:

/* Line 690 of lalr1.cc  */
#line 305 "lib/TrigParser.ypp"
    {
	  driver.ignorePrefix(false);
      }
    break;

  case 43:

/* Line 690 of lalr1.cc  */
#line 307 "lib/TrigParser.ypp"
    {
	  std::string prefix((yysemantic_stack_[(5) - (3)].p_URI)->getLexicalValue());
	  driver.addPrefix(prefix.substr(0, prefix.length()-1), (yysemantic_stack_[(5) - (5)].p_URI));
      }
    break;

  case 45:

/* Line 690 of lalr1.cc  */
#line 315 "lib/TrigParser.ypp"
    {
	driver.ignorePrefix(true);
      }
    break;

  case 46:

/* Line 690 of lalr1.cc  */
#line 317 "lib/TrigParser.ypp"
    {
	  driver.ignorePrefix(false);
      }
    break;

  case 47:

/* Line 690 of lalr1.cc  */
#line 319 "lib/TrigParser.ypp"
    {
	  std::string prefix((yysemantic_stack_[(5) - (3)].p_URI)->getLexicalValue());
	  driver.addPrefix(prefix.substr(0, prefix.length()-1), (yysemantic_stack_[(5) - (5)].p_URI));
      }
    break;

  case 48:

/* Line 690 of lalr1.cc  */
#line 327 "lib/TrigParser.ypp"
    {
	driver.setBase((yysemantic_stack_[(3) - (2)].p_URI)->getLexicalValue());
    }
    break;

  case 49:

/* Line 690 of lalr1.cc  */
#line 334 "lib/TrigParser.ypp"
    {
	driver.setBase((yysemantic_stack_[(2) - (2)].p_URI)->getLexicalValue());
    }
    break;

  case 50:

/* Line 690 of lalr1.cc  */
#line 343 "lib/TrigParser.ypp"
    {
	driver.neededBGP = NULL;
    }
    break;

  case 54:

/* Line 690 of lalr1.cc  */
#line 360 "lib/TrigParser.ypp"
    {
	driver.curSubject = (yysemantic_stack_[(1) - (1)].p_TTerm);
    }
    break;

  case 56:

/* Line 690 of lalr1.cc  */
#line 363 "lib/TrigParser.ypp"
    {
	driver.curSubject = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 70:

/* Line 690 of lalr1.cc  */
#line 414 "lib/TrigParser.ypp"
    {
	if (!driver.curBGP)
	    driver.neededBGP = driver.curBGP = new DefaultGraphPattern();
	driver.curBGP->addTriplePattern(driver.atomFactory->getTriple(driver.curSubject, driver.curPredicate, (yysemantic_stack_[(1) - (1)].p_TTerm)));
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_TTerm);
    }
    break;

  case 71:

/* Line 690 of lalr1.cc  */
#line 423 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_TTerm);
	driver.curPredicate = (yyval.p_TTerm);
    }
    break;

  case 72:

/* Line 690 of lalr1.cc  */
#line 427 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = driver.getURI("http://www.w3.org/1999/02/22-rdf-syntax-ns#type");
	driver.curPredicate = (yyval.p_TTerm);
    }
    break;

  case 73:

/* Line 690 of lalr1.cc  */
#line 434 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 74:

/* Line 690 of lalr1.cc  */
#line 437 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 75:

/* Line 690 of lalr1.cc  */
#line 440 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 76:

/* Line 690 of lalr1.cc  */
#line 446 "lib/TrigParser.ypp"
    {
	(yyval.p_BNode) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 77:

/* Line 690 of lalr1.cc  */
#line 449 "lib/TrigParser.ypp"
    {
	(yyval.p_BNode) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 78:

/* Line 690 of lalr1.cc  */
#line 455 "lib/TrigParser.ypp"
    {
	(yyval.p_SubjectPredicatePair).subject = driver.curSubject;
	(yyval.p_SubjectPredicatePair).predicate = driver.curPredicate;
	driver.curSubject = driver.createBNode();
      }
    break;

  case 79:

/* Line 690 of lalr1.cc  */
#line 459 "lib/TrigParser.ypp"
    {
	  (yyval.p_BNode) = (BNode*)driver.curSubject; // could store w/ type in ctx..
	  driver.curSubject = (yysemantic_stack_[(4) - (2)].p_SubjectPredicatePair).subject;
	  driver.curPredicate = (yysemantic_stack_[(4) - (2)].p_SubjectPredicatePair).predicate;
      }
    break;

  case 80:

/* Line 690 of lalr1.cc  */
#line 468 "lib/TrigParser.ypp"
    {
	(yyval.p_BNode) = driver.createBNode();
	const TTerm* tail = (yyval.p_BNode);
	ProductionVector<const TTerm*>* members = (yysemantic_stack_[(3) - (2)].p_TTerms);
	const URI* first = driver.getURI("http://www.w3.org/1999/02/22-rdf-syntax-ns#first");
	const URI* rest = driver.getURI("http://www.w3.org/1999/02/22-rdf-syntax-ns#rest");
	const TTerm* nil = driver.getURI("http://www.w3.org/1999/02/22-rdf-syntax-ns#nil");
	if (!driver.curBGP)
	    driver.neededBGP = driver.curBGP = new DefaultGraphPattern();
	for (unsigned i = 0; i < members->size(); i++) {
	    driver.curBGP->addTriplePattern(driver.atomFactory->getTriple(tail, first, members->at(i)));
	    const TTerm* nextTail = i == members->size()-1 ? nil : driver.createBNode();
	    driver.curBGP->addTriplePattern(driver.atomFactory->getTriple(tail, rest, nextTail));
	    tail = nextTail;
	}
	members->clear();
	delete members;
    }
    break;

  case 81:

/* Line 690 of lalr1.cc  */
#line 490 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerms) = new ProductionVector<const TTerm*>();
    }
    break;

  case 82:

/* Line 690 of lalr1.cc  */
#line 493 "lib/TrigParser.ypp"
    {
	(yysemantic_stack_[(2) - (1)].p_TTerms)->push_back((yysemantic_stack_[(2) - (2)].p_TTerm));
	(yyval.p_TTerms) = (yysemantic_stack_[(2) - (1)].p_TTerms);
    }
    break;

  case 83:

/* Line 690 of lalr1.cc  */
#line 500 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_TTerm);
    }
    break;

  case 84:

/* Line 690 of lalr1.cc  */
#line 503 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 85:

/* Line 690 of lalr1.cc  */
#line 509 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_TTerm);
    }
    break;

  case 86:

/* Line 690 of lalr1.cc  */
#line 515 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 87:

/* Line 690 of lalr1.cc  */
#line 521 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 88:

/* Line 690 of lalr1.cc  */
#line 524 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_RDFLiteral);
    }
    break;

  case 89:

/* Line 690 of lalr1.cc  */
#line 527 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 90:

/* Line 690 of lalr1.cc  */
#line 530 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BooleanRDFLiteral);
    }
    break;

  case 91:

/* Line 690 of lalr1.cc  */
#line 533 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 92:

/* Line 690 of lalr1.cc  */
#line 536 "lib/TrigParser.ypp"
    {
	(yyval.p_TTerm) = driver.getURI("http://www.w3.org/1999/02/22-rdf-syntax-ns#nil"); // !!! new GraphTerm_rule5($1);
    }
    break;

  case 93:

/* Line 690 of lalr1.cc  */
#line 543 "lib/TrigParser.ypp"
    {
	(yyval.p_RDFLiteral) = driver.getRDFLiteral(*(yysemantic_stack_[(2) - (1)].p_string), (yysemantic_stack_[(2) - (2)].p_uri_or_langtag).uri, (yysemantic_stack_[(2) - (2)].p_uri_or_langtag).langtag);
	delete (yysemantic_stack_[(2) - (1)].p_string);
    }
    break;

  case 94:

/* Line 690 of lalr1.cc  */
#line 551 "lib/TrigParser.ypp"
    {
	(yyval.p_URI) = (yysemantic_stack_[(2) - (2)].p_URI);
    }
    break;

  case 95:

/* Line 690 of lalr1.cc  */
#line 558 "lib/TrigParser.ypp"
    {
	(yyval.p_uri_or_langtag).uri = NULL;
	(yyval.p_uri_or_langtag).langtag = (yysemantic_stack_[(1) - (1)].p_LANGTAG);
    }
    break;

  case 96:

/* Line 690 of lalr1.cc  */
#line 562 "lib/TrigParser.ypp"
    {
	(yyval.p_uri_or_langtag).uri = (yysemantic_stack_[(1) - (1)].p_URI);
	(yyval.p_uri_or_langtag).langtag = NULL;
    }
    break;

  case 97:

/* Line 690 of lalr1.cc  */
#line 570 "lib/TrigParser.ypp"
    {
	(yyval.p_uri_or_langtag).uri = NULL;
	(yyval.p_uri_or_langtag).langtag = NULL;
    }
    break;

  case 98:

/* Line 690 of lalr1.cc  */
#line 574 "lib/TrigParser.ypp"
    {
	(yyval.p_uri_or_langtag) = (yysemantic_stack_[(1) - (1)].p_uri_or_langtag);
    }
    break;

  case 99:

/* Line 690 of lalr1.cc  */
#line 580 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 100:

/* Line 690 of lalr1.cc  */
#line 583 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 101:

/* Line 690 of lalr1.cc  */
#line 586 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 102:

/* Line 690 of lalr1.cc  */
#line 592 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 103:

/* Line 690 of lalr1.cc  */
#line 595 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 104:

/* Line 690 of lalr1.cc  */
#line 598 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 105:

/* Line 690 of lalr1.cc  */
#line 604 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 106:

/* Line 690 of lalr1.cc  */
#line 607 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 107:

/* Line 690 of lalr1.cc  */
#line 610 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 108:

/* Line 690 of lalr1.cc  */
#line 616 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 109:

/* Line 690 of lalr1.cc  */
#line 619 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 110:

/* Line 690 of lalr1.cc  */
#line 622 "lib/TrigParser.ypp"
    {
	(yyval.p_NumericRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_NumericRDFLiteral);
    }
    break;

  case 111:

/* Line 690 of lalr1.cc  */
#line 628 "lib/TrigParser.ypp"
    {
	(yyval.p_BooleanRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_BooleanRDFLiteral);
    }
    break;

  case 112:

/* Line 690 of lalr1.cc  */
#line 631 "lib/TrigParser.ypp"
    {
	(yyval.p_BooleanRDFLiteral) = (yysemantic_stack_[(1) - (1)].p_BooleanRDFLiteral);
    }
    break;

  case 113:

/* Line 690 of lalr1.cc  */
#line 637 "lib/TrigParser.ypp"
    {
	(yyval.p_string) = (yysemantic_stack_[(1) - (1)].p_string);
    }
    break;

  case 114:

/* Line 690 of lalr1.cc  */
#line 640 "lib/TrigParser.ypp"
    {
	(yyval.p_string) = (yysemantic_stack_[(1) - (1)].p_string);
    }
    break;

  case 115:

/* Line 690 of lalr1.cc  */
#line 643 "lib/TrigParser.ypp"
    {
	(yyval.p_string) = (yysemantic_stack_[(1) - (1)].p_string);
    }
    break;

  case 116:

/* Line 690 of lalr1.cc  */
#line 646 "lib/TrigParser.ypp"
    {
	(yyval.p_string) = (yysemantic_stack_[(1) - (1)].p_string);
    }
    break;

  case 117:

/* Line 690 of lalr1.cc  */
#line 652 "lib/TrigParser.ypp"
    {
	(yyval.p_URI) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 118:

/* Line 690 of lalr1.cc  */
#line 655 "lib/TrigParser.ypp"
    {
	(yyval.p_URI) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 119:

/* Line 690 of lalr1.cc  */
#line 661 "lib/TrigParser.ypp"
    {
	(yyval.p_URI) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 120:

/* Line 690 of lalr1.cc  */
#line 664 "lib/TrigParser.ypp"
    {
	(yyval.p_URI) = (yysemantic_stack_[(1) - (1)].p_URI);
    }
    break;

  case 121:

/* Line 690 of lalr1.cc  */
#line 670 "lib/TrigParser.ypp"
    {
	(yyval.p_BNode) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;

  case 122:

/* Line 690 of lalr1.cc  */
#line 673 "lib/TrigParser.ypp"
    {
	(yyval.p_BNode) = (yysemantic_stack_[(1) - (1)].p_BNode);
    }
    break;



/* Line 690 of lalr1.cc  */
#line 1234 "lib/TrigParser.cpp"
	default:
          break;
      }
    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
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
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  TrigParser::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = 0;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const signed char TrigParser::yypact_ninf_ = -82;
  const short int
  TrigParser::yypact_[] =
  {
       -82,     4,     9,   -82,   -27,   -82,   -19,   -82,   -82,   -82,
      15,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,    11,   -11,   -82,    -5,   144,    20,    13,
     -82,   -82,   -82,   -82,    15,    22,    30,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -10,
     -82,   -82,   -82,    19,   175,   -82,   -82,   -82,    40,   -82,
      48,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    20,   -82,
     -82,    20,    25,    26,   -16,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,    15,   -82,    15,   -82,   -82,    20,    20,
      15,    51,    15,    52,   -82,   -82,   -82,   -82,    53,    56,
      46,   -82,   -82,   -82,   -82,    47,   -82,    54,   -82,    58,
      20,   -82,   175,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     175,   -82,   -82
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  TrigParser::yydefact_[] =
  {
         3,     0,     2,     1,     0,    41,     0,    45,    81,    78,
       0,    35,   117,   120,   119,   121,   122,     4,     6,     9,
      11,     7,     8,     5,    37,    39,    38,    40,    22,    21,
      13,   118,    14,     0,     0,    49,     0,     0,     0,     0,
      34,    33,    31,    32,    15,    19,    27,    48,    42,    46,
      80,   111,   112,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   113,   114,   115,   116,    92,    84,    77,    76,
      82,    83,    85,    88,    89,    99,   100,   101,    90,    97,
      87,    91,    72,     0,     0,    71,    86,    29,     0,    16,
      52,    54,    56,    75,    73,    74,    17,    10,     0,    25,
      12,    23,     0,     0,     0,    95,    96,    98,    93,    79,
      64,    68,    70,    15,    36,    15,    53,    50,     0,    23,
      15,     0,    15,     0,    24,    43,    47,    94,    59,    66,
       0,    51,    55,    58,    57,     0,    20,     0,    28,     0,
      61,    65,     0,    69,    30,    18,    26,    44,    62,    63,
       0,    67,    60
  };

  /* YYPGOTO[NTERM-NUM].  */
  const signed char
  TrigParser::yypgoto_[] =
  {
       -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,   -82,
     -82,   -82,   -82,   -50,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -32,
     -82,   -82,   -82,   -82,   -80,   -82,   -82,   -70,   -67,   -82,
     -82,    -1,   -82,     0,   -82,    37,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,    -2,
     -82,     1
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  TrigParser::yydefgoto_[] =
  {
        -1,     1,     2,    17,    18,    45,    46,    19,    88,    97,
     120,    98,    20,   123,   100,   122,   101,    21,   113,    39,
      22,    44,    23,    24,    34,   102,   139,    25,    36,   103,
      26,    27,    89,   116,   117,    90,   118,   119,   134,   124,
     148,   149,   141,   128,   110,   143,   129,   111,    84,    91,
      67,    92,    38,    93,    37,   112,    71,    85,    72,    73,
     106,   107,   108,    74,    75,    76,    77,    78,    79,    86,
      31,    95
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const signed char TrigParser::yytable_ninf_ = -1;
  const unsigned char
  TrigParser::yytable_[] =
  {
        30,    28,    29,    32,     3,   104,    83,    33,    42,    40,
      41,    43,     4,     5,     6,    35,     7,     8,    12,    13,
      14,    47,     9,     8,    48,    10,    82,    11,     9,   105,
      49,    87,   130,   109,   131,    80,    68,    69,    81,   135,
      96,   137,    94,    12,    13,    14,    15,    16,    99,    12,
      13,    14,    15,    16,    12,    13,    14,   114,   115,   125,
     126,   136,   138,   144,   145,   140,   121,   142,   147,   133,
     152,   146,   151,   150,    70,     0,     0,     0,     0,     0,
       0,     0,    80,    68,    69,    81,   132,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,    94,     0,     0,     0,     0,    94,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      80,    68,    69,    81,     0,     0,     0,     0,    80,    68,
      69,    81,     8,    50,     0,     0,     0,     9,     0,     0,
       0,     0,     0,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    12,    13,
      14,    15,    16,     8,    66,     0,     0,     0,     9,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    12,
      13,    14,    15,    16,     0,    66
  };

  /* YYCHECK.  */
  const short int
  TrigParser::yycheck_[] =
  {
         2,     2,     2,     2,     0,    15,    38,    34,    10,    10,
      10,    10,     3,     4,     5,    34,     7,     8,    34,    35,
      36,    10,    13,     8,    35,    16,     6,    18,    13,    39,
      35,    18,   113,    14,   115,    37,    37,    37,    37,   120,
      18,   122,    44,    34,    35,    36,    37,    38,    18,    34,
      35,    36,    37,    38,    34,    35,    36,    17,    10,    34,
      34,    10,    10,    17,    17,    12,    98,    11,    10,   119,
     150,    17,   142,   140,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    84,    84,    84,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,    -1,    -1,    -1,    -1,   120,    -1,
     122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     142,   142,   142,   142,    -1,    -1,    -1,    -1,   150,   150,
     150,   150,     8,     9,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     8,    40,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    -1,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    40
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  TrigParser::yystos_[] =
  {
         0,    42,    43,     0,     3,     4,     5,     7,     8,    13,
      16,    18,    34,    35,    36,    37,    38,    44,    45,    48,
      53,    58,    61,    63,    64,    68,    71,    72,    92,    94,
     110,   111,   112,    34,    65,    34,    69,    95,    93,    60,
      92,    94,   110,   112,    62,    46,    47,    10,    35,    35,
       9,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    40,    91,    92,    94,
      96,    97,    99,   100,   104,   105,   106,   107,   108,   109,
     110,   112,     6,    80,    89,    98,   110,    18,    49,    73,
      76,    90,    92,    94,   110,   112,    18,    50,    52,    18,
      55,    57,    66,    70,    15,    39,   101,   102,   103,    14,
      85,    88,    96,    59,    17,    10,    74,    75,    77,    78,
      51,    80,    56,    54,    80,    34,    34,   110,    84,    87,
      49,    49,    80,    54,    79,    49,    10,    49,    10,    67,
      12,    83,    11,    86,    17,    17,    17,    10,    81,    82,
      89,    88,    85
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  TrigParser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  TrigParser::yyr1_[] =
  {
         0,    41,    42,    43,    43,    44,    44,    44,    44,    46,
      45,    47,    45,    48,    48,    49,    49,    51,    50,    52,
      50,    53,    53,    54,    54,    56,    55,    57,    55,    59,
      58,    60,    60,    60,    60,    62,    61,    63,    63,    63,
      63,    65,    66,    67,    64,    69,    70,    68,    71,    72,
      73,    74,    75,    75,    77,    76,    78,    76,    79,    80,
      81,    82,    82,    83,    84,    84,    85,    86,    87,    87,
      88,    89,    89,    90,    90,    90,    91,    91,    93,    92,
      94,    95,    95,    96,    96,    97,    98,    99,    99,    99,
      99,    99,    99,   100,   101,   102,   102,   103,   103,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   107,   107,
     107,   108,   108,   109,   109,   109,   109,   110,   110,   111,
     111,   112,   112
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  TrigParser::yyr2_[] =
  {
         0,     2,     1,     0,     2,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     1,     0,     1,     0,     4,     0,
       3,     1,     1,     0,     1,     0,     4,     0,     3,     0,
       6,     1,     1,     1,     1,     0,     4,     1,     1,     1,
       1,     0,     0,     0,     7,     0,     0,     5,     3,     2,
       2,     2,     0,     1,     0,     3,     0,     3,     1,     3,
       2,     0,     1,     2,     0,     2,     2,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     4,
       3,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const TrigParser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "BASE", "PREFIX",
  "SPARQL_BASE", "RDF_TYPE", "SPARQL_PREFIX", "GT_LPAREN", "GT_RPAREN",
  "GT_DOT", "GT_COMMA", "GT_SEMI", "GT_LBRACKET", "GT_RBRACKET",
  "GT_DTYPE", "IT_GRAPH", "GT_RCURLEY", "GT_LCURLEY", "IT_true",
  "IT_false", "INTEGER", "DECIMAL", "DOUBLE", "INTEGER_POSITIVE",
  "DECIMAL_POSITIVE", "DOUBLE_POSITIVE", "INTEGER_NEGATIVE",
  "DECIMAL_NEGATIVE", "DOUBLE_NEGATIVE", "STRING_LITERAL1",
  "STRING_LITERAL2", "STRING_LITERAL_LONG1", "STRING_LITERAL_LONG2",
  "IRIREF", "PNAME_NS", "PNAME_LN", "BLANK_NODE_LABEL", "ANON", "LANGTAG",
  "NIL", "$accept", "trigDoc", "_Qstatement_E_Star", "statement",
  "tripleOrBareGraph", "$@1", "$@2", "_O_Qiri_E_Or_QBlankNode_E_C",
  "_QTriplesTemplate_E_Opt",
  "_O_QGT_LCURLEY_E_S_QTriplesTemplate_E_Opt_S_QGT_RCURLEY_E_Or_QPropertyListNotEmpty_E_S_QGT_DOT_E_C",
  "$@3", "$@4", "_O_QCollection_E_Or_QBlankNodePropertyList_E_C",
  "_QPropertyListNotEmpty_E_Opt",
  "_O_QGT_LCURLEY_E_S_QTriplesTemplate_E_Opt_S_QGT_RCURLEY_E_Or_QPropertyListNotEmpty_E_Opt_S_QGT_DOT_E_C",
  "$@5", "$@6", "graphword", "$@7",
  "_O_Qiri_E_Or_QBlankNode_E_Or_Qcollection_E_Or_QBlankNodePropertyList_E_C",
  "wrappedDefault", "$@8", "directive", "prefixID", "$@9", "$@10", "$@11",
  "sparqlPrefix", "$@12", "$@13", "base", "sparqlBase", "TriplesTemplate",
  "_O_QGT_DOT_E_S_QTriplesTemplate_E_Opt_C",
  "_Q_O_QGT_DOT_E_S_QTriplesTemplate_E_Opt_C_E_Opt", "TriplesSameSubject",
  "$@14", "$@15", "PropertyList", "PropertyListNotEmpty",
  "_O_QVerb_E_S_QObjectList_E_C", "_Q_O_QVerb_E_S_QObjectList_E_C_E_Opt",
  "_O_QGT_SEMI_E_S_QVerb_E_S_QObjectList_E_Opt_C",
  "_Q_O_QGT_SEMI_E_S_QVerb_E_S_QObjectList_E_Opt_C_E_Star", "ObjectList",
  "_O_QGT_COMMA_E_S_QObject_E_C", "_Q_O_QGT_COMMA_E_S_QObject_E_C_E_Star",
  "Object", "Verb", "subject", "TriplesNode", "BlankNodePropertyList",
  "@16", "Collection", "_QGraphNode_E_Star", "GraphNode", "VarOrTerm",
  "VarOriri", "GraphTerm", "RDFLiteral", "_O_QGT_DTYPE_E_S_Qiri_E_C",
  "_O_QLANGTAG_E_Or_QGT_DTYPE_E_S_Qiri_E_C",
  "_Q_O_QLANGTAG_E_Or_QGT_DTYPE_E_S_Qiri_E_C_E_Opt", "NumericLiteral",
  "NumericLiteralUnsigned", "NumericLiteralPositive",
  "NumericLiteralNegative", "BooleanLiteral", "String", "iri",
  "PrefixedName", "BlankNode", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const TrigParser::rhs_number_type
  TrigParser::yyrhs_[] =
  {
        42,     0,    -1,    43,    -1,    -1,    43,    44,    -1,    63,
      -1,    45,    -1,    58,    -1,    61,    -1,    -1,    48,    46,
      50,    -1,    -1,    53,    47,    55,    -1,   110,    -1,   112,
      -1,    -1,    73,    -1,    -1,    18,    51,    49,    17,    -1,
      -1,    52,    80,    10,    -1,    94,    -1,    92,    -1,    -1,
      80,    -1,    -1,    18,    56,    49,    17,    -1,    -1,    57,
      54,    10,    -1,    -1,    16,    60,    18,    59,    49,    17,
      -1,   110,    -1,   112,    -1,    94,    -1,    92,    -1,    -1,
      18,    62,    49,    17,    -1,    64,    -1,    71,    -1,    68,
      -1,    72,    -1,    -1,    -1,    -1,     4,    65,    35,    66,
      34,    67,    10,    -1,    -1,    -1,     7,    69,    35,    70,
      34,    -1,     3,    34,    10,    -1,     5,    34,    -1,    76,
      75,    -1,    10,    49,    -1,    -1,    74,    -1,    -1,    90,
      77,    80,    -1,    -1,    92,    78,    79,    -1,    54,    -1,
      89,    85,    84,    -1,    89,    85,    -1,    -1,    81,    -1,
      12,    82,    -1,    -1,    84,    83,    -1,    88,    87,    -1,
      11,    88,    -1,    -1,    87,    86,    -1,    96,    -1,    98,
      -1,     6,    -1,   110,    -1,   112,    -1,    94,    -1,    94,
      -1,    92,    -1,    -1,    13,    93,    80,    14,    -1,     8,
      95,     9,    -1,    -1,    95,    96,    -1,    97,    -1,    91,
      -1,    99,    -1,   110,    -1,   110,    -1,   100,    -1,   104,
      -1,   108,    -1,   112,    -1,    40,    -1,   109,   103,    -1,
      15,   110,    -1,    39,    -1,   101,    -1,    -1,   102,    -1,
     105,    -1,   106,    -1,   107,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    19,    -1,    20,    -1,    30,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,   111,    -1,
      36,    -1,    35,    -1,    37,    -1,    38,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  TrigParser::yyprhs_[] =
  {
         0,     0,     3,     5,     6,     9,    11,    13,    15,    17,
      18,    22,    23,    27,    29,    31,    32,    34,    35,    40,
      41,    45,    47,    49,    50,    52,    53,    58,    59,    63,
      64,    71,    73,    75,    77,    79,    80,    85,    87,    89,
      91,    93,    94,    95,    96,   104,   105,   106,   112,   116,
     119,   122,   125,   126,   128,   129,   133,   134,   138,   140,
     144,   147,   148,   150,   153,   154,   157,   160,   163,   164,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   184,
     189,   193,   194,   197,   199,   201,   203,   205,   207,   209,
     211,   213,   215,   217,   220,   223,   225,   227,   228,   230,
     232,   234,   236,   238,   240,   242,   244,   246,   248,   250,
     252,   254,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  TrigParser::yyrline_[] =
  {
         0,   183,   183,   189,   191,   196,   197,   198,   199,   204,
     204,   207,   207,   213,   216,   221,   223,   227,   227,   231,
     231,   238,   241,   246,   248,   252,   252,   256,   256,   264,
     264,   271,   274,   277,   280,   287,   287,   295,   296,   297,
     298,   303,   305,   307,   303,   315,   317,   315,   327,   334,
     343,   350,   353,   355,   360,   360,   363,   363,   370,   375,
     379,   382,   384,   388,   391,   393,   399,   404,   408,   410,
     414,   423,   427,   434,   437,   440,   446,   449,   455,   455,
     468,   490,   493,   500,   503,   509,   515,   521,   524,   527,
     530,   533,   536,   543,   551,   558,   562,   570,   574,   580,
     583,   586,   592,   595,   598,   604,   607,   610,   616,   619,
     622,   628,   631,   637,   640,   643,   646,   652,   655,   661,
     664,   670,   673
  };

  // Print the state stack on the debug stream.
  void
  TrigParser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  TrigParser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  TrigParser::token_number_type
  TrigParser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
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
      35,    36,    37,    38,    39,    40
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int TrigParser::yyeof_ = 0;
  const int TrigParser::yylast_ = 215;
  const int TrigParser::yynnts_ = 72;
  const int TrigParser::yyempty_ = -2;
  const int TrigParser::yyfinal_ = 3;
  const int TrigParser::yyterror_ = 1;
  const int TrigParser::yyerrcode_ = 256;
  const int TrigParser::yyntokens_ = 41;

  const unsigned int TrigParser::yyuser_token_number_max_ = 295;
  const TrigParser::token_number_type TrigParser::yyundef_token_ = 2;


} // w3c_sw

/* Line 1136 of lalr1.cc  */
#line 1924 "lib/TrigParser.cpp"


/* Line 1138 of lalr1.cc  */
#line 680 "lib/TrigParser.ypp"
 /*** Additional Code ***/

void w3c_sw::TrigParser::error(const TrigParser::location_type& l,
			    const std::string& m)
{
    driver.error(l, m);
}

/* START Driver (@@ stand-alone would allow it to be shared with other parsers */

namespace w3c_sw {

void TrigDriver::parse (IStreamContext& in, RdfDB* db, BasicGraphPattern* bgp)
{
    // clear prefixes for nth run but keep them around for e.g. serialization.
    clearPrefixes();

    if (db != NULL)
	setDB(db);
    if (bgp != NULL)
	setGraph(bgp);

    streamname = in.nameStr;

    TrigScanner scanner(this, in.p);
    scanner.set_debug(trace_scanning);
    this->lexer = &scanner;

    TrigParser parser(*this);
    parser.set_debug_level(trace_parsing);
    defaultBGP = curBGP ? curBGP : this->db->ensureGraph(NULL);
    parser.parse();
}

void TrigDriver::parse (IStreamContext& in, BasicGraphPattern* bgp) {
    parse(in, NULL, bgp);
}

void TrigDriver::parse (std::string turtleStr, RdfDB* db, BasicGraphPattern* bgp) {
    IStreamContext in(turtleStr.c_str(), IStreamContext::STRING);
    parse(in, db, bgp);
}

void TrigDriver::parse (std::string turtleStr, BasicGraphPattern* bgp) {
    IStreamContext in(turtleStr.c_str(), IStreamContext::STRING);
    parse(in, NULL, bgp);
}

} // namespace w3c_sw

/* END Driver */

