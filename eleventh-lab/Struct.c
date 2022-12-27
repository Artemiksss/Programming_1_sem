#include "Structure.h"
#include <math.h>

struct right_triangle triangle;
void creating_a_structure(int Y2, int Y1, int X3, int X1){
    triangle.cathet_one = Y2 - Y1 + 1;
    triangle.cathet_two = X3 - X1 + 1;
    triangle.hypotenuse = sqrt((triangle.cathet_one * triangle.cathet_one) + (triangle.cathet_two * triangle.cathet_two));
    printf("Cathet 1: %d\n", triangle.cathet_one);
    printf("Cathet 2: %d\n", triangle.cathet_two);
    printf("Hypotenuse: %.3f\n", triangle.hypotenuse);
}


void perimeter(int cathet_one, int cathet_two, float hypotenuse){
    triangle.perimeter = triangle.cathet_one + triangle.cathet_two + triangle.hypotenuse;
    printf("Perimeter: %.3f\n", triangle.perimeter);
}

void square(int cathet_one, int cathet_two){
    triangle.square = triangle.cathet_one * triangle.cathet_two * 0.5;
    printf("Square: %.3f\n", triangle.square);
}
