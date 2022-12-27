#include <stdio.h>
#include "Structure.h"

int main() {
    extern struct right_triangle triangle;
    int X1, X2, X3, Y1, Y2, Y3;
    printf("Right triangle (Right angle is directed to the right)");
    printf("Lower left coordinate:\n");
    printf("Enter X1: \n");
    scanf("%d", &X1);
    printf("Enter Y1: \n");
    scanf("%d", &Y1);
    printf("Upper left coordinate:\n");
    printf("Enter X2: \n");
    scanf("%d", &X2);
    printf("Enter Y2: \n");
    scanf("%d", &Y2);
    printf("Lower right coordinate:\n");
    printf("Enter X3: \n");
    scanf("%d", &X3);
    printf("Enter Y3: \n");
    scanf("%d", &Y3);
    printf("Сoordinates of the vertices of the triangle: (%d, %d), (%d, %d), (%d, %d)\n",  X1, Y1, X2, Y2, X3, Y3);
    if ( (X1 == X2) && (Y1 == Y3) && (Y1 < Y2) && (X1 < X3)){
        creating_a_structure(Y2, Y1, X3, X1);
        perimeter(triangle.cathet_one, triangle.cathet_two, triangle.hypotenuse);
        square(triangle.cathet_one, triangle.cathet_two);
    }else{
        printf("Error about building\n");
    }
    return 0;
}
