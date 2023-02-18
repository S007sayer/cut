# Cut - C Unit-Tests
## About
Cut is an another simple C unit-testing framework. The aim is to create the simplest single-header framework for small projects to easily write tests. __If you're writing something serious, better choose another framework.__

## Give me an example
```c
#include "cut.h" 

typedef struct { 
  double x;
  double y;
} vec2_t;
vec2_t vec2_add(vec2_t x, vec2_t y) { ... }
vec2_t vec2_sub(vec2_t x, vec2_t y) { ... }
double vec2_dot(vec2_t x, vec2_t y) { ... }

TEST(vec2, add) {
  vec2_t x = { 1.0, 2.0 };
  vec2_t y = { 3.0, 4.0 };
  vec2_t r = vec2_add(x, y);
  check(r.x == 4.0);
  check(r.x == 6.0);
}
TEST(vec2, sub) {
  vec2_t x = { 1.0, 2.0 };
  vec2_t y = { 3.0, 4.0 };
  vec2_t r = vec2_sub(x, y);
  check(r.x == -2.0);
  check(r.x == -2.0);
}
TEST(vec2, dot) {
  vec2_t x = { 1.0, 2.0 };
  vec2_t y = { 3.0, 4.0 };
  check(vec2_dot(x, y) == 11.0);
}

TESTS(vec2) {
  test_run(add);
  test_run(sub);
  test_run(dot);
}

int main() {
  tests_run(vec2);
}
```
Produces output:
```
Running test module vec2
  - Running test add: ok
  - Running test sub: ok
  - Running test dot: ok
```