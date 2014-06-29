#ifndef __STRING_ADAPTER
#define __STRING_ADAPTER

#include <string>
#include <cwchar>
#include <stdio.h>

std::wstring fromStringPtr(wchar_t *ptr) {
  if(ptr != NULL) {
    return std::wstring(ptr);
  } else {
    return std::wstring(L"null");
  }
}

#endif
