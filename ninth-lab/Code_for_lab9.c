#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    char mas[1000];
    printf("Enter number: ");
    scanf("%d", &num);
    sprintf(mas, "%d", num);
    printf("Number - %s.\n", mas);
    printf("Let's check that this is a string: %s\n", mas);
    int i;
    float summ, percent, month;
    printf("Enter the number of months \n");
    scanf("%f", &month);
    printf("Enter the annual interest rate \n");
    scanf("%f", &percent);
    printf("Enter the initial amount \n");
    scanf("%f", &summ);
    for (i = 1; i < month + 1; i++){
        summ = summ + (summ * percent)/100;
        printf("After %d month you will have %.3f\n", i, summ);
    }
    return 0;
}
