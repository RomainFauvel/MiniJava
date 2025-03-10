/*
class TestEq {
  public static void main(String[] args) {
    {
      System.out.println(1 == 1);
      System.out.println(1 == 0);
      System.out.println(true == true);
      System.out.println(true == false);
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
    if((1 == 1)){printf("true\n");}else{printf("false\n");}
    if((1 == 0)){printf("true\n");}else{printf("false\n");}
    if((1 == 1)){printf("true\n");}else{printf("false\n");}
    if((1 == 0)){printf("true\n");}else{printf("false\n");}
  }
  tgc_stop(&gc);

  return 0;
}
