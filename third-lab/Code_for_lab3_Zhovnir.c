#include <stdio.h>

int main() {
    unsigned int num;
    unsigned int num2;
    unsigned int bit_go_num;
    unsigned int exclusive_or;
    unsigned int num_or_num;
    printf("Number 1:");
    printf("----------------------------------------------\n");
    printf("Enter a number in decimal notation(10):\n");
    scanf("%d", &num);
    printf("Number 2:");
    printf("----------------------------------------------\n");
    printf("This is a number in the octal number system(8): %o\n", num);
    printf("Number 3:");
    printf("----------------------------------------------\n");
    printf("This is a number in hexadecimal notation(16): %x\n", num);
    bit_go_num = num >> 4;
    printf("A number shifted 4 bits to the right: %d\n", bit_go_num);
    printf("Number 4:");
    printf("----------------------------------------------\n");
    printf("This is a number in hexadecimal notation(16): %x\n", num);
    printf("Negation of a number: %d\n", ~(num));
    printf("Number 5:");
    printf("----------------------------------------------\n");
    printf("Enter a number in hexadecimal notation(16):\n");
    scanf("%x", &num2);
    exclusive_or = num ^ num2;
    printf("Exclusive or: %d\n", exclusive_or);
    num_or_num = num | num2;
    printf("Or: %d\n", num_or_num);
    return 0;
}
