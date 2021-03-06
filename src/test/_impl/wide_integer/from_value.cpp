
//          Copyright John McFarlane 2018.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file ../LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

/// \file
/// \brief tests for <cnl/_impl/wide_integer/from_value.h>

#include <cnl/_impl/wide_integer/from_value.h>

#include <cnl/_impl/wide_integer/operators.h>
#include <cnl/_impl/type_traits/identical.h>

using cnl::_impl::identical;

namespace {
    static_assert(
            identical(
                    cnl::_impl::wide_integer<64, unsigned>{654},
                    cnl::from_value<cnl::_impl::wide_integer<>, cnl::uint64>{}(UINT64_C(654))),
            "cnl::from_value<cnl::_impl::wide_integer>");
    static_assert(
            identical(
                    cnl::_impl::wide_integer<64, unsigned>{654},
                    cnl::_impl::make_number<cnl::_impl::wide_integer<>>(UINT64_C(654))),
            "cnl::make_number<cnl::_impl::wide_integer>");
}
