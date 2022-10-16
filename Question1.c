#include<stdio.h>
int addnum(int);
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    printf("sum of first n natural number is %d",addnum(n));
    return 0;
}
int addnum(int n)
{
    if(n==1)
    return 1;
    return n+addnum(n-1);
}