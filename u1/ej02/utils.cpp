#include "utils.h"
#include <cassert>

int numeros_divisibles_por_k(int a, int b, int k) {
  // validar los inputs
  assert(a < b);
  assert(k != 0);

  int result = 0;

  for (int i = a; i < b; ++i) {
    if (i % k == 0) {
      result++;
    }
  }

  return result;
}