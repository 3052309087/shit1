#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

int zh(char c){
   int a = (int) c;
   return a;
}
//转换为ascii码

char zh1(int a){
   char c = (char) a;
   return c;
}
//转换回字符

int main()
{
 char str1[9999], str2[9999],str3[9999],str4[9999];
 
 int i;
 int k = 0;
 int len1[9999] = {0};
 
 i = 0;
    int u = 0;
   printf("第一串");
    scanf("%s", str1);
    printf("第二串");
   scanf("%s", str2);//储存输入
    for (int i = 0; str1[i] != '\0'; i++){
      for (int j = 0; str2[j] !='\0'; j++)
      {
         if (str1[i] == str2[j])
         {
            str3[k] = str1[i];
            k++;
            j = 0;
            break;
         }
         
      }
      
    }
   str3[k] = '\0';//找出str1 str2相同的字符，并存入str3中
   
      
    int eeezzz = 0;
    for (int i = 0; str3[i] != '\0'; i++)
    {
      len1[eeezzz] = zh(str3[i]);
      eeezzz++;
    }//将str3中的字符转换为ascii码存入len1中
  
   int ii = 0;
   int e;
   int love = 0;
    while (len1[love] != 0)
    {
      love ++;
    }
    //计算len1中数字的个数

    while (ii < love-1)
{
 if (len1[ii]>len1[ii+1])
  {
    e=len1[ii];
    len1[ii]=len1[ii+1];
    len1[ii+1]=e;
    ii = 0;//使得交换从头开始
  }
  else{
    ii++;
  }
  
}//冒个泡
 
  
int ut = 0;
for (int i = 0; i<love - 1 ; i++)
{
  if (len1[i] == len1[i+1])
  {
    for (int k = i; k < love - 1; k++)
    {
      len1[k] = len1[k+1];
    }
    love--;
    i--;
  }
  
}//去重

int lyuu = 0;
for (int m = 0; m < love; m++)
{
  str4[lyuu] = zh1(len1[m]);
  lyuu++;//转化回字符
}

str4[lyuu+1] = '\0';

for (int n = 0; str4[n] != '\0'; n++)
{
  printf("%c",str4[n]);
}
printf("个数%d",love);

return 0;
}