#include <stdio.h>

int main()
{
    int num1,num2,num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1 % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }
    if (num2 % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }
    if (num3 % 2 == 0){
        printf("even\n");
    } else {
        printf("odd\n");
    }
    return 0;
}