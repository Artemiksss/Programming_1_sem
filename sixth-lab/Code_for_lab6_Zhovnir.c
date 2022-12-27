#include <stdio.h>
#include <stdlib.h>

int main() {
    int mas[4] = {1000, 1001, 1002, 1003};
    int * pr = mas;
    for (int i = 0; i < 4; i++){
        printf("%d \n", *(pr + i));
    }
    printf("\n");
    int *new_mas = (int *) malloc (4*sizeof(int));
    //    *(new_mas) = 1000;
    //    *(new_mas + 1) = 1001;
    //    *(new_mas + 2) = 1002;
    //    *(new_mas + 3) = 1003;
    printf("Input Enter the array elements:\n");
    for (int i = 0; i < 4; i++){
        scanf("%d", &*(new_mas + i));
    }
    printf("Array Elements:\n");
    int k = 1;
    for (int i = 0; i < 4; i++){
        printf("%d: %d\n", k, *(new_mas + i));
        k++;
    }
    free(new_mas);
    return 0;
}

