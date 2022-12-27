#ifndef Structure_h
#define Structure_h

#include <stdio.h>

void creating_a_structure(int X1, int X2, int Y1, int Y2);
void perimeter(int cathet_one, int cathet_two, float hypotenuse);
void square(int cathet_one, int cathet_two);

struct right_triangle{
    int cathet_one;
    int cathet_two;
    float hypotenuse;
    float perimeter;
    float square;
};
#endif

