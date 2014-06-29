%module hidapi
%{
#include "../hidapi/hidapi.h"
%}

%include "typemaps.i"
%include "stdint.i"
%include "arrays_java.i"
%apply int[] {int *};

%apply signed char[] {const unsigned char*};
%apply signed char[] {unsigned char*};

%include "../hidapi/hidapi.h"
