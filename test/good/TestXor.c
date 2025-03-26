/*
class TestXor {
  public static void main(String[] args) {
    {
      System.out.println(true ^ true);
      System.out.println(true ^ false);
      System.out.println(false ^ true);
      System.out.println(false ^ false);
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
    if((1 ^ 1)){printf("true\n");}else{printf("false\n");}
    if((1 ^ 0)){printf("true\n");}else{printf("false\n");}
    if((0 ^ 1)){printf("true\n");}else{printf("false\n");}
    if((0 ^ 0)){printf("true\n");}else{printf("false\n");}
  }
  tgc_stop(&gc);

  return 0;
}
