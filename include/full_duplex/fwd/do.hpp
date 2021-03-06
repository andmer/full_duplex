//
// Copyright Jason Rice 2018
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
#ifndef FULL_DUPLEX_FWD_DO_HPP
#define FULL_DUPLEX_FWD_DO_HPP

namespace full_duplex {
    //
    // do - returns a promise from composing a
    //      left-to-right sequence of promises
    //
    struct do_fn {
        template <typename ...Xs>
        constexpr auto operator()(Xs&& ...xs) const;
    };

    constexpr do_fn do_{};
}

#endif
