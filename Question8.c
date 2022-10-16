#include<stdio.h>
int fibnum(int);
int main()
{
    int n,c=0,i;
    printf("Enter the number of terms ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",fibnum(i));
    }
}
int fibnum(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return (fibnum(n-1)+fibnum(n-2));
}