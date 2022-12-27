#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file_ONE, *file_TWO, *file_THREE;
    char x[100];
    char y[100];
    printf("Enter a string for file 1 (no more than 100 characters):\n");
    file_ONE = fopen("f_one.txt", "w");
    if (file_ONE != NULL){
        fgets(x, 100, stdin);
        fprintf(file_ONE, "%s", x);
    }
    fclose(file_ONE);
    printf("Enter a string for file 2 (no more than 100 characters):\n");
    file_TWO = fopen("f_two.txt", "w");
    if (file_TWO != NULL){
        fgets(y, 100, stdin);
        fprintf(file_TWO, "%s", y);
    }
    fclose(file_TWO);
    file_THREE = fopen("f_three.txt", "w");
    file_ONE = fopen("f_one.txt", "r");
    file_TWO = fopen("f_two.txt", "r");
    if (file_ONE != NULL && file_TWO != NULL && file_THREE != NULL){
        char * line_file_ONE = fgets(x, 100, file_ONE);
        char * line_file_TWO = fgets(y, 100, file_TWO);
        fprintf(file_THREE, "%s", line_file_ONE);
        fprintf(file_THREE, "%s", line_file_TWO);
    }
    fclose(file_ONE);
    fclose(file_TWO);
    fclose(file_THREE);
    printf("Checking file 3:\n");
    char rez[1000];
    file_THREE = fopen("f_three.txt", "r");
    if (file_THREE != NULL){
        while (fgets(rez, 1000, file_THREE)){
            printf("%s", rez);
        }
    }
    return 0;
}