/*
class TestFloat {
  public static void main(String[] args) {
    {
      if (true) {
        System.out.println(1.200000);
        System.out.println(2 + 3.200000);
        System.out.println(2.200000 + 3);
        System.out.println(2.200000 + 3.200000);
        System.out.println(2 - 3.200000);
        System.out.println(2.200000 - 3);
        System.out.println(2.200000 - 3.200000);
        System.out.println(2 * 3.200000);
        System.out.println(2.200000 * 3);
        System.out.println(2.200000 * 3.200000);
        System.out.println(2 / 3.000000);
        System.out.println(2.000000 / 3);
        System.out.println(2.000000 / 3.000000);
        System.out.println(2 / 3);
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
      printf("%f\n", 1.200000);
      printf("%f\n", (2 + 3.200000));
      printf("%f\n", (2.200000 + 3));
      printf("%f\n", (2.200000 + 3.200000));
      printf("%f\n", (2 - 3.200000));
      printf("%f\n", (2.200000 - 3));
      printf("%f\n", (2.200000 - 3.200000));
      printf("%f\n", (2 * 3.200000));
      printf("%f\n", (2.200000 * 3));
      printf("%f\n", (2.200000 * 3.200000));
      printf("%f\n", (2 / 3.000000));
      printf("%f\n", (2.000000 / 3));
      printf("%f\n", (2.000000 / 3.000000));
      printf("%d\n", (2 / 3));
    }
    else {
      
    }
  }
  tgc_stop(&gc);

  return 0;
}
