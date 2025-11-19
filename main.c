// math_library.h
// void execute_operation(int operation, int a, int b);

// math_library.c
#include <stdio.h>
#include "math.h"

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3

static void add(int x, int y) { printf("add: %d\n", x + y); }

static void sub(int x, int y) { printf("sub: %d\n", x - y); }

static void mul(int x, int y) { printf("mul: %d\n", x * y); }

static void div(int x, int y) { printf("div: %d\n", x / y); }

typedef void (*func_t)(int a, int b);

func_t func_lib[4] = {add, sub, mul, div};

void execute_operation(int operation, int a, int b) {
  func_lib[operation](a, b);
}

// main.c
// #include "math_library.h"

int main() {
  execute_operation(ADD, 100, 5);
  execute_operation(SUB, 100, 5);
  execute_operation(MUL, 100, 5);
  execute_operation(DIV, 100, 5);
  return 0;
}