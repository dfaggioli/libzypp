/*---------------------------------------------------------------------\
|                          ____ _   __ __ ___                          |
|                         |__  / \ / / . \ . \                         |
|                           / / \ V /|  _/  _/                         |
|                          / /__ | | | | | |                           |
|                         /_____||_| |_| |_|                           |
|                                                                      |
\---------------------------------------------------------------------*/
/** \file zypp/detail/XMLProductImpl.cc
 *
*/

#include "zypp/target/store/xml/XMLProductImpl.h"

using namespace std;

///////////////////////////////////////////////////////////////////
namespace zypp
{ /////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////
  namespace storage
  { /////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////
    //
    //	CLASS NAME : XMLProductImpl
    //
    ///////////////////////////////////////////////////////////////////

    /** Default ctor */
    XMLProductImpl::XMLProductImpl()
    {}
    /** Dtor */
    XMLProductImpl::~XMLProductImpl()
    {}

    std::string XMLProductImpl::category() const 
    { return _category; } 

    Label XMLProductImpl::vendor() const 
    { return _vendor; } 

    Label XMLProductImpl::summary( const Locale & ) const 
    { return _summary.text(); }

    Label XMLProductImpl::shortName( const Locale & ) const
    { return _short_name.text(); }
    
    Label XMLProductImpl::description( const Locale & ) const 
    { return _description.text(); }
    
    Url XMLProductImpl::releaseNotesUrl() const
    { return _release_notes_url; }

    std::list<Url> XMLProductImpl::updateUrls() const
    { return _update_urls; }

    std::list<std::string> XMLProductImpl::flags() const
    { return _flags; }
    
    /////////////////////////////////////////////////////////////////
  } // namespace detail
  ///////////////////////////////////////////////////////////////////
  /////////////////////////////////////////////////////////////////
} // namespace zypp
///////////////////////////////////////////////////////////////////
