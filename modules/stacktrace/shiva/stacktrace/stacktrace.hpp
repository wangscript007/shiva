//
// Created by roman Sztergbaum on 08/06/2018.
//

#pragma once

#ifdef __GNUC__
    #ifndef _GNU_SOURCE
        #define _GNU_SOURCE
    #endif
#endif

#ifdef _MSVC_VER
    #define BOOST_STACKTRACE_USE_WINDBG
#endif

#include <boost/stacktrace.hpp>

namespace shiva
{
    namespace bs = boost::stacktrace;
}
