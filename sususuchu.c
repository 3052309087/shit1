#include <stdio.h>
int main()
{
   int a;
   int b;
   int min;
   int c = 2;
   int d = 0;
   int max;
   scanf ("%d",&a);
   scanf("%d",&b);
  if (a < b)
  {
   min = a;
   max = b;
  }
  else {
    min = b;
    max = a;
  }
  while (c < min)
  {
    if (min % c == 0)
    {
      if (max % c == 0)
      {
       d = 1;
       break;
      }
      
    }
    c= c+1;
  }
  if (
    d == 1
  )
  {
    printf("最大公约数是%d",c);
  }
  else{
    printf("最大公约数是1");
  }
  
  

  return 0;

}