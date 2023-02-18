#include "../cut.h" 

typedef struct { 
  double x;
  double y;
} vec2_t;
vec2_t vec2_add(vec2_t a, vec2_t b) { return (vec2_t) { a.x + b.x, a.y + b.y }; }
vec2_t vec2_sub(vec2_t a, vec2_t b) { return (vec2_t) { a.x - b.x, a.y - b.y }; }
double vec2_dot(vec2_t a, vec2_t b) { return a.x * b.x + a.y * b.y; }

TEST(vec2, add) {
  vec2_t x = { 1.0, 2.0 };
  vec2_t y = { 3.0, 4.0 };
  vec2_t r = vec2_add(x, y);
  check(r.x == 4.0);
  check(r.y == 6.0);
  return 0;
}
TEST(vec2, sub) {
  vec2_t x = { 1.0, 2.0 };
  vec2_t y = { 3.0, 4.0 };
  vec2_t r = vec2_sub(x, y);
  check(r.x == -2.0);
  check(r.x == -2.0);
  return 0;
}
TEST(vec2, dot) {
  vec2_t x = { 1.0, 2.0 };
  vec2_t y = { 3.0, 4.0 };
  check(vec2_dot(x, y) == 11.0);
  return 0;
}

TESTS(vec2) {
  test_run(vec2, add);
  test_run(vec2, sub);
  test_run(vec2, dot);
}

int main() {
  tests_run(vec2);
}