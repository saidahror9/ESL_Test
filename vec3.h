#ifndef VEC3_H_
#define VEC3_H_

typedef struct {
    double x, y, z;
} Vec3;

Vec3 vec3_sum(Vec3 a, Vec3 b);
Vec3 vec3_sub(Vec3 a, Vec3 b);
double vec3_dot(Vec3 a, Vec3 b);
Vec3 vec3_cross(Vec3 a, Vec3 b);

#endif