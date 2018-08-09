#include<stdio.h>
#include<math.h>
int main()
{
    int i,c=0;
    for(i=0;i<10000;i=i+11)
    {
      if(pow(i,0.5)*pow(i,0.5)==i)
      {
          ++c;
      }
      if(i%10==9)
      {
          i=i+990;
      }
    }
    printf("%d",c);
}
