#include <stdio.h>

int main() {
    printf("Hello!\n");
    printf("Enter number 1 if you want to enter a number!\n");
    printf("Enter number 2 if you want to enter a string!\n");
    int num;
    int in_num;
    char str[1];
    scanf("%d", &num);
    if (num == 1){
        printf("Input number:\n");
        scanf("%d", &in_num);
        printf("You input number: %d\n", in_num);
    }else{
        printf("Input symbol:\n");
        scanf("%s", &str);
        printf("You input symbol: %s\n", str);
    }
    return 0;
    
}