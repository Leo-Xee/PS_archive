/**
 * 곱셈 (2588)
 */
#include <stdio.h>

int main(void) {
    int num1, num2, first, second, third, result;
    scanf("%d", &num1);
    scanf("%d", &num2);
    first = num1 * (num2 % 10);
    second = num1 * (num2/10%10);
    third = num1 * (num2/10/10%10);
    printf("%d\n", first);
    printf("%d\n", second);
    printf("%d\n", third);
    printf("%d\n", first + second*10 + third*100);
    return 0;
}