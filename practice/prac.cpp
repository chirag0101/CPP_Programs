#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p;
    printf("%u ", p);

    p = (int *)malloc(20); /* Assume p has address of 1314 */
    free(p);
    printf("%u", p);
    return 0;
}