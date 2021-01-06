# Introduction

Mackro Tricks (that the author prefers to style `Mad<ro Trid<s`, taking advantage of improper keming especially in monospaced fonts) is a collection of useful macros to enable binary arithmetic and cycles in preprocessing time, up to (almost) arbitrary sizes.

# Requirements

Due to the way `Mad<ro Trid<s` is implemented, the preprocessor must support variadic macros, but no other requirement or compiler-specific extension should be needed for the library to work.

Thus, and to the author's best knowledge, it should work in any compiler that supports C99 or C++11. The users are kindly encouraged to report any problems to the author by submitting an issue to this repository.

The author must point out that the current version of the C preprocessor implemented in __MSVC does not fully follow the standard__ since variadic macros are expanded to a single preprocessing token, which means that this library does not work and there's close to nothing (short of scrapping this whole thing) that can be done to fix it. 

# Using Mackro Tricks

To use `Mad<ro Trid<s`, the user must begin by including the library,

```C
#include "mackro_tricks.h"
```

This will simply make the macros available for use in subsequent code.

Since all the macros are prefixed by `MACKRO_`, there should be no clashes with user-defined macros, but, if by any reason the user wants to undefine all the macros from `Mad<ro Trid<s` (say, the user is an anti-macro fundamentalist), it can be done by:

```C
#include "mackro_tricks_undef.h"
```

Obviously, for any of this to work, both files must be placed in a location where the compiler or build system knows where to look for header files, but, given the diversity of choices in that area, the author will relay the responsibility of ensuring that to the user (or whomever set up the build enviroment the user is working in).

Given the way the C preprocessor expands macros (or, rather, tends to stop expanding them since it was designed _not_ to be recursive), simply calling the macros from this library will, in the general case, not generate the intended results. Wrapping it in a `MACKRO_EXPAND(...)` will ensure the first layer of macros is expanded, but this will not be enough in most cases; `MACKRO_EVAL(...)` has been constructed in such a way that many layers are expanded with just one call, but, for sufficiently complex cycles, it might still not be enough, in which case several `MACKRO_EVAL`s might need to be chained.

Depending on user interest for this library, a more detailed readme and examples might be provided at some point, but, for now, the author must cut this short and respectfully request that any interested users either try to figure it out by themselves by looking at the implementation or contact the author for assistance.

# Warnings and Caveats

Since we will be stretching the C preprocessor's behaviour far beyond what is its intended purpose, it goes without saying that the performance of the preprocessing step may decrease significantly, and its memory requirements may increase.

This is especially relevant in the preprocessing-time cycles, where a sufficiently high number of iterations and/or a sufficiently complex set of macro operations to be performed at each iteration may quite unreasonably increase the memory requirements, even more so if there are nested cycles involved (as was actually the case in the problem that prompted the development of this library).

Given that all of this happens at preprocessing time, the use of multiple translation units might aggravate the problem rather than ameliorate it (though precompiled headers may help).

Since all of this is happening in preprocessing time, debugging errors may not be easy, though it is usually helpful to visualize the results of only the preprocessing step (which most compilers should allow one to do through an appropriate flag). Furthermore, since the preprocessor does not fully understand the syntax of the language in use and merely acts as a more sophisticated form of copy-paste, strange compilation errors may arise if the user asks it to output something that does not result in valid syntax; this issue is not specific to this library, rather to the proper usage of macros in general, however, the ability of implementing preprocessing-time cycles compound the ability of the users to shoot themselves in the feet.

There may be other problems still to be discovered, especially in edge cases, despite the author's best efforts during testing. The users are, once again, kindly encouraged to report any problems by submitting an issue to this repository.

# Acknowledgements

The entirety of this library was inspired by the [Cloak library](https://github.com/pfultz2/Cloak/wiki/C-Preprocessor-tricks,-tips,-and-idioms), which contains a very handy reference for preprocessing-time recursion (and, thusly, iteration).

The author must also thank all those family members who kindly did not complain too much about the strange sleeping schedules during the development of this library (concurrent with other work...).

# Author Contacts

The author can be reached through the e-mail provided on the GitHub profile.
