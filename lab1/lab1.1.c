#include<stdio.h>
int main()
{
    int i,j,k;
    printf("enter numbers i &j=");
    scanf("%d %d",&i,&j);
    k=i%j;
    if(k==0)
        printf("largest multiple=%d",i+j);
    else
        printf("largest multiple=%d",i+j-k);
}
