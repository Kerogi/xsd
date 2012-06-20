// file      : xsd/options-parser.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : Copyright (c) 2005-2011 Code Synthesis Tools CC
// license   : GNU GPL v2 + exceptions; see accompanying LICENSE file

#ifndef OPTIONS_PARSER_HXX
#define OPTIONS_PARSER_HXX

#include <cult/types.hxx>

#include <options.hxx>

namespace cli
{
  template <>
  struct parser<Cult::Types::NarrowString>
  {
    static void
    parse (Cult::Types::NarrowString& x, scanner& s)
    {
      const char* o (s.next ());

      if (s.more ())
        x = s.next ();
      else
        throw missing_value (o);
    }
  };
}

#endif // OPTIONS_PARSER_HXX
