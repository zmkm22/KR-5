#include <stdio.h>

int main(int argc, char *argv[])
{
    int a[] = {0,1,2,3,4,5}, *p, n;
    p = a; // same as p = &a[0] = &(a[0])

    n = p[4];   // p is a pointer, yet we use indexing notation!!

    printf("%d\n", n);

    return 0;
}