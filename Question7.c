#include<stdio.h>
int hcfnum(int,int);
int main()
{
    int n1,n2,hcf;
    printf("Enter the numbers\n");
    scanf("%d %d",&n1,&n2);
    printf("Hcf of %d and %d is %d",n1,n2,hcfnum(n1,n2));
    return 0;
}
int hcfnum(int n1,int n2)
{
    if(n2==0)
    {
        return n1;
    }
    else
    return hcfnum(n2,n1%n2);
}