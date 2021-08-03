#include "includes.hxx"  // "this" header first (for cxx implementation files)

#include <cstdio>  // stl includes next

#include <third-party.h>  // third-party includes next

#include "myheader.hxx"  // finally, project includes

/*
    Using this order, project includes (aside from "this" header) cannot affect STL or third-party
    headers by e.g. defining symbols such as _CRT_SECURE_NO_WARNINGS, and so must be explicitly
    stated in the "this" header or the current file before including affectable files.

    In the same way, third-party headers also cannot affect STL headers.
*/
