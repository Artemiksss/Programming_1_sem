#include <stdio.h>
#include <string.h>
int main(){
    printf("Number 1 ---------------------------------\n");
    int n;
    int k;
    printf("Enter the number of elements of 1 row:\n");
    scanf("%d", &n);
    printf("Enter the number of elements of 2 row:\n");
    scanf("%d", &k);
    char mas_one[n];
    char mas_two[k];
    char mas_three[n * k + 1];
    printf("Enter string 1:\n");
    scanf("%s", mas_one);
    printf("Enter string 2:\n");
    scanf("%s", mas_two);
    strcat(mas_three, mas_one);
    strcat(mas_three, mas_two);
    printf("Adding two lines: ");
    printf("%s\n", mas_three);
    
    
    printf("\n");
    printf("\n");
    
    printf("Number 3 ---------------------------------\n");
    int minn = 0;
    int count = 0;
    if (n < k){
        minn = n;
    }
    else{
        minn = k;
    }
    for (int i = 0; i < minn; i++){
        if (mas_one[i] == mas_two[i]){
            count++;
        }
    }
    // char *all_elem; // сравнение двух строк 2 способ
    // all_elem = strcmp(mas_one, mas_two);
    if (count == minn){
        printf("String One = Srting Two\n");
    }
    else{
        printf("String One != Srting Two\n");
    }
    
    
    printf("\n");
    printf("\n");
    
    
    
    printf("Number 8 ---------------------------------\n");
    int num;
    printf("Enter the number of elements of new row:\n");
    scanf("%d", &num);
    char new_mas[num];
    printf("Enter new string:\n");
    scanf("%s", new_mas);
    char symbol[1];
    printf("Enter simbol:\n");
    scanf("%s", symbol);
    char *p = strchr(new_mas, symbol[0]);
    if (strchr(new_mas, symbol[0]) != NULL){
        printf("'%c' is position: %lu\n", symbol[0], p - new_mas + 1);
    }
    else{
        printf("This symbol is missing\n");
    }

    
    
    printf("\n");
    printf("\n");
    
    
    
    printf("Number 10 ---------------------------------\n");
    int colich_st1;
    printf("number of elements sring 1:\n");
    scanf("%d", &colich_st1);
    char strin[colich_st1];
    printf("Enter string 1:\n");
    scanf("%s", strin);
    int colich_st2;
    printf("Number of elements sring 2:\n");
    scanf("%d", &colich_st2);
    char simvol[colich_st2];
    printf("Enter string 2:\n");
    scanf("%s", simvol);
    char *is_sym;
    is_sym = strpbrk(strin, simvol);
    if ( is_sym == NULL)
          printf("No symbol\n");
       else
          printf ("The desired symbol is at the position: %ld\n", is_sym - strin + 1);
    
    
    printf("\n");
    printf("\n");
    
    
    
    printf("Number 12 ---------------------------------\n");
    int quantity_one;
    printf("Number of elements sring 1:\n");
    scanf("%d", &quantity_one);
    printf("Enter string 1:\n");
    char first_str[quantity_one];
    scanf("%s", first_str);
    
    
    int quantity_two;
    printf("Number of elements string 2:\n");
    scanf("%d", &quantity_two);
    printf("Enter string 2:\n");
    char second_str[quantity_two];;
    scanf("%s", second_str);
    printf ("Length of the segment: %lu\n", strcspn(first_str, second_str));
    
return 0;
}
