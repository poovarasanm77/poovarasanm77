#include <stdio.h>
int main()
{
    double number;
    printf("Enter a number ");
    scanf("%d", &number);
    // True if the number is perfectly divisible by 2
    if(number%2==0)
        printf("%d is even", number);
    else
        printf("%d is odd", number);
    return 0;
}
