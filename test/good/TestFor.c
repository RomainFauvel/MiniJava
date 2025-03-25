/*
class TestEq {
  public static void main(String[] args) {
    {
      System.out.println(new LaClassADallas().run());
    }
  }
}
class LaClassADallas {
  public int run() {
    int i;
    for (i = 0;;i < 10;i = i + 1;) {
      System.out.println(i);
    }
    return 0;
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
void* LaClassADallas_run(struct LaClassADallas* this);
struct LaClassADallas {
  void* (**vtable)();
};
void* (*LaClassADallas_vtable[])() = { LaClassADallas_run };
void* LaClassADallas_run(struct LaClassADallas* this) {
  int i;
  for (i = 0;(i < 10);({i = (i + 1);})) {
    printf("%d\n", i);
  }
  return (void*)(0);
}
int main(int argc, char *argv[]) {
  tgc_start(&gc, &argc);
  {
    printf("%d\n", ({ struct LaClassADallas* tmp1 = ({ struct LaClassADallas* res = tgc_calloc(({ extern tgc_t gc; &gc; }), 1, sizeof(*res)); res->vtable = LaClassADallas_vtable; res; }); (int) tmp1->vtable[0](tmp1); }));
  }
  tgc_stop(&gc);

  return 0;
}
