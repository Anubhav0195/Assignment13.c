#include<stdio.h>
int addoddnum(int);
int main()
{
    int n;
    printf("Enter the number \n");
    scanf("%d",&n);
    printf("sum of first odd natural num ber is %d",addoddnum(n));
    addoddnum(n);
    return 0;
}
int addoddnum(int n)
{
    if(n>=1)
    {
        return 2*n-1+addoddnum(n-1);
        
    }
}