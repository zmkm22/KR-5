#include <stdio.h>

int main(void)
{
    int matrix[2][3] = {
        {1, 2, 3}, 
        {-1, -2, -3}
    };

    printf("%d\n", matrix[1][0]);
}