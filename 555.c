#include <stdio.h>
#include <stdbool.h>
int main() {
    int a [10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = a;
    int *q = p + 1;
    int b = *p;
    int c = *q;
    printf("%d %d\n", b, c);

return 0;
}