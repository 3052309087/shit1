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
   int a,b,c;
   //scanf("%d %d %d",&a,&b,&c);
   int d = max (a,b);
   
   int e = max (d,c);
   
   char ch;
   scanf("%c",&ch);
   ch = (int)ch;
   ch = (char)ch;

   printf("%c",ch);
  

 //printf("%d",e);
return 0;

}