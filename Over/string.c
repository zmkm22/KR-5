#include <stdio.h>

int main(void)
{
   // how to store a string (character array)

   char a[] = "hello world";
   char *b;
   b = "hello good world";  // cannot be modified, we cannot do b[2] = 'k'

   printf("%p\n", b);
}