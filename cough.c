#include <stdio.h>
#include <stdlib.h>

void cough(int);

int main(void)
{
    cough(3);
}
void cough(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
