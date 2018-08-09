#include<stdio.h>
int main()
{
    int n,i=0;
    printf("enter number=");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        i++;
    }
    printf("no. of digit=%d",i);
}
