#include<stdio.h>
void main()
{
    char p[20];
    gets(p);
    int i;
    for(i=0;p[i]!='\0';i++);
    printf("%d",i);
}
