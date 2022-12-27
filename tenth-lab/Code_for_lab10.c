#include <stdio.h>
#include <math.h>
#include <stdlib.h>


char* rezalt;
int ind_one_mas = -1, ind_two_mas = 0;
int len_str;
void del_space(char* str, int f);
void int_mas(int num);

int main(void) {
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    int_mas(num);
    printf("Enter the length of the string:\n");
    scanf("%d", &len_str);
    getchar();
    printf("Enter the line:\n");
    char* string;
    char mas_one[1000], mas_two[1000];
    rezalt = &mas_two;
    string = gets(mas_one);
    del_space(string, 0);
    printf("Result:");
    for(int i = 0; i < ind_two_mas; i++){
        printf("%c", rezalt[i]);
    }
    printf("\n");
    return 0;
}

void int_mas(int num){
    if (num != 0){
        int len_num = floor(log10(abs(num))) + 1;
        char mas[len_num + 1];
        int count = 0;
        while (num) {
            mas[count++] = num % 10;
            num /= 10;
        }
        printf("{");
        for (int i = len_num - 1; i >= 0; i--){
            if (i == 0){
                printf("'%d'}", mas[i]);
            }else{
                printf("'%d' ", mas[i]);
            }
        }
        printf("\n");
    }
}

void del_space(char* str, int flag){
    ind_one_mas++;
    if(ind_one_mas >= len_str){
        return;
    }
    if(str[ind_one_mas] != ' '){
        rezalt[ind_two_mas] = str[ind_one_mas];
        ind_two_mas++;
        flag = 0;
        del_space(str, flag);

    }else{
        if(flag == 0){
            rezalt[ind_two_mas] = str[ind_one_mas];
            ind_two_mas++;
            flag = 1;
            del_space(str, flag);
        }else{
            del_space(str, flag);
        }
    }
}
