#include <stdio.h>
#include <math.h>
int main () {
    double x, y;
    double z1, t, t1, t2, z2;
    printf("Laboratory №2, Var 8, Zhovnir Artem\n");
    printf("Hello\n");
    printf("Find the value of the function Z1 and Z2\n");
    printf("Input X:\n");
    scanf("%lf" , &x);
    printf("Input Y:\n");
    scanf("%lf" , &y);
    t = 2 * x;
    z1 = pow(cos(x), 4) + pow(sin(y), 2) + (0.25 * pow(sin(t), 2)) - 1;
    t1 = y + x;
    t2 = y - x;
    z2 = sin(t1) * sin(t2);
    printf("Fanction result Z1: %lf\n", z1);
    printf("Function result Z2: %lf\n", z2);
    return 0;
}