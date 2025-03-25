/*
class TestString {
  public static void main(String[] args) {
    {
      if (true) {
        System.out.println("Hello, world!");
        System.out.println("Hello, world!" + " Concat");
      }
      else {
        
      }
    }
  }
}
*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    if (1) {
      printf("%s\n", "Hello, world!");
      printf("%s\n", ({ char* tmp1 = "Hello, world!"; char* tmp2 = " Concat"; char* result = malloc(strlen(tmp1) + strlen(tmp2) + 1); strcpy(result, tmp1); strcat(result, tmp2); result; }));
    }
    else {
      
    }
  }
  tgc_stop(&gc);

  return 0;
}
