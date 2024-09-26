#include <stdio.h>
int main()
{
   int a;
   int b = 2;
   int c = 1;
   scanf("%d",&a);
  while (b<a)
  {
    if (a % b == 0)
    {
     c = 0;
    }
    b = b+1;
  }
  if (c == 0)
  {
    printf("不是素数");
  }
  else{printf("是素数");
  }
  return 0;

}