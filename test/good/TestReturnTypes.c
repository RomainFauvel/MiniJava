/*
class TestReturnTypes {
  public static void main(String[] args) {
    {
      System.out.println(new LaClassADallas().float_fun());
      System.out.println(new LaClassADallas().int_fun());
    }
  }
}
class LaClassADallas {
  public float float_fun() {
    return -350000.000000;
  }
  public int int_fun() {
    return 1;
  }
}*/
#include <stdio.h>
#include <stdlib.h>
#include "tgc.h"
#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
#pragma GCC diagnostic ignored "-Wint-to-pointer-cast"
struct array { int* array; int length; };
tgc_t gc;
struct LaClassADallas;
void* LaClassADallas_float_fun(struct LaClassADallas* this);
void* LaClassADallas_int_fun(struct LaClassADallas* this);
struct LaClassADallas {
  void* (**vtable)();
};
void* (*LaClassADallas_vtable[])() = { LaClassADallas_float_fun, LaClassADallas_int_fun };
void* LaClassADallas_float_fun(struct LaClassADallas* this) {
  return (void*)({float f=-350000.000000;int temp =*((int*)&f);temp;});
}
void* LaClassADallas_int_fun(struct LaClassADallas* this) {
  return (void*)(1);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%f\n", ({ struct LaClassADallas* tmp1 = ({ struct LaClassADallas* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = LaClassADallas_vtable; res; });  int x = tmp1->vtable[0](tmp1);({*(float*)&x;}); }));
    printf("%d\n", ({ struct LaClassADallas* tmp1 = ({ struct LaClassADallas* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = LaClassADallas_vtable; res; }); (int) tmp1->vtable[1](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
