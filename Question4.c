#include<stdio.h>
int squaresum(int);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The sum of the square of the number are %d",squaresum(n));
    return 0;
}
int squaresum(int n)
{
    if(n>=1)
    return n*n+squaresum(n-1);
}