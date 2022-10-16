#include<stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter the number :\n");
    scanf("%d",&n);
    printf("The factorial of %d is= %d",n,fact(n));
    return 0;


}
int fact(int n)
{
    if(n==0 || n==1)
    return 1; 
    return n*fact(n-1);
}