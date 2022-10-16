#include<stdio.h>
int sumdigits(int);
int main()
{
    int num,result;
    printf("Enter the number:\n");
    scanf("%d",&num);
    result=sumdigits(num);
    printf("Sum of the digits in %d is %d\n",num,result);
    return 0;
}
int sumdigits(int num)
{
    if(num>=1)
    return (num%10 +sumdigits(num/10));
}