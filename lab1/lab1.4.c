#include<stdio.h>
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}
void main()
{
    int n,g;
    printf("enter no.=");
    scanf("%d",&n);
    fact(n);
    if(g==1)
        printf("1");
    else
        printf("%d",fact(n));
}
