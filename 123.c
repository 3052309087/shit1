#include <stdio.h>
int main()
{
    int b;
    int a;
    int n = 0;
    scanf("%d" , &a);
    n = n + 1;
    a = a/10;

     while (a > 0)
    {
        n = n +1;
        a = a/10;


    }
    printf ("%d" , n);
    return 0;
}