#include <stdio.h>
#include <stdbool.h>


int main()
{
 int a,b,c,d,f;
 f = 0;
 float e;
 int i = 0;
 int g;
 int z;
 printf("输入个数");
 scanf("%d",&g);
printf("排序方式0-升序 1-降序");
scanf("%d",&b);
float shuzu[g];
for (i=0;i<g;i++)
{
  
  scanf("%f",&shuzu[i]);
}
i=0;
if(b==0){
while (i<g-1)
{
 if (shuzu[i]>shuzu[i+1])
  {
    e=shuzu[i];
    shuzu[i]=shuzu[i+1];
    shuzu[i+1]=e;
    i = 0;//使得交换从头开始
  }
  else{
    i=i+1;
  }
  
}


} 
else if(b==1){
  while (i<g-1)
{
  if (shuzu[i]<shuzu[i+1])
  {
    e=shuzu[i];
    shuzu[i]=shuzu[i+1];
    shuzu[i+1]=e;
    i = 0;
  }
  else{
    i=i+1;
  }
}

}
else{printf("傻逼");
}
printf("排序后数组:");
for (z=0;z<g;z++)
{
  printf("%.1f ",shuzu[z]);
}

  

   
return 0;

}