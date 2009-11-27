/* Copyright 2004 Bob Proulx <bob@proulx.com>
   You may freely use, modify and/or distribute this file. */

#include <stdio.h>
#include <stdlib.h>

#if defined(FOO) || defined(FOOB)
int foo1() { return 0; }
#else
#error FOO or FOOB not defined
#endif

#if defined(FOOB) || defined(FOO)
int foo2() { return 0; }
#else
#error FOO or FOOB not defined
#endif

#if defined(FOO) && defined(FOOB)
int foo3() { return 0; }
#else
#error FOO and FOOB not defined
#endif

#if defined(FOOB) && defined(FOO)
int foo4() { return 0; }
#else
#error FOO and FOOB not defined
#endif

int main()
{
  foo1();
  foo2();
  foo3();
  foo4();
}
