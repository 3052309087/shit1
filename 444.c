#include <stdio.h>
#include <stdbool.h>
int max (int a,int b)
{
  int ret;
  if (a>b)
  {
    ret = a;
  }
  else{
    ret = b;
  }
return ret;
  
}
int main()
{
   int c;
   int d;
  scanf("%d" , &d);
  scanf("%d" , &c);
int f = max (c,d);
 printf("%d",f);
return 0;

}