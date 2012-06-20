// file      : xsd/cxx/parser/name-processor.hxx
// author    : Boris Kolpackov <boris@codesynthesis.com>
// copyright : Copyright (c) 2006-2011 Code Synthesis Tools CC
// license   : GNU GPL v2 + exceptions; see accompanying LICENSE file

#ifndef CXX_PARSER_NAME_PROCESSOR_HXX
#define CXX_PARSER_NAME_PROCESSOR_HXX

#include <xsd-frontend/semantic-graph.hxx>

#include <cxx/elements.hxx>
#include <cxx/parser/options.hxx>

namespace CXX
{
  namespace Parser
  {
    using namespace Cult::Types;

    class NameProcessor
    {
    public:
      NameProcessor (); // Dummy ctor, helps with long symbols on HP-UX.

      Void
      process (options const&,
               XSDFrontend::SemanticGraph::Schema&,
               XSDFrontend::SemanticGraph::Path const& file,
               StringLiteralMap const& map);
    };
  }
}

#endif // CXX_PARSER_NAME_PROCESSOR_HXX
