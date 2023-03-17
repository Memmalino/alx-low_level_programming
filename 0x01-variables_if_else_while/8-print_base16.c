#include <stdio.h>

/**
  * main - main func
  * Return: this will return zero
  */

int main(void)
{
        int h;
        char k;

        for (h = 0; h < 10; h++)
                putchar(h + '0');
        for (k = 'a'; k < 'g'; k++)
                putchar(k);
        putchar('\n');
        return (0);
}
