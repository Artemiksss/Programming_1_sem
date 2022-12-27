#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int rez = -56 <= num && num <= 56;
    while (rez == 1) {
        printf("The number %d is in the range!\n", num);
        break;
    }
    while (rez == 0) {
        printf("The number %d is NOT in the range!\n", num);
        break;
    }
    int num1;
    scanf("%d", &num1);
    printf("Bit number 8: %d\n", (num1 >> 7) & 1);
    return 0;
}


