#include <stdio.h>
#include "vec3.h"

static void print_vec(const char *name, Vec3 v) {
    printf("%s = (%.1f, %.1f, %.1f)\n", name, v.x, v.y, v.z);
}

int main(void) {
    Vec3 a = { 1, 2, 3 };
    Vec3 b = { 4, 5, 6 };

    print_vec("a", a);
    print_vec("b", b);
    print_vec("a + b", vec3_sum(a, b));
    print_vec("a - b", vec3_sub(a, b));
    printf("a . b = %.1f\n", vec3_dot(a, b));
    print_vec("a x b", vec3_cross(a, b));

    return 0;
}