#include <stdio.h>
#include <ctype.h>
#define LEN 10

void getnchar(char str[], int n);

int main(int argc, char* argv[])
{
    char str[LEN];

    printf("Please enter %d characters:\n", LEN - 1);
    getnchar(str, LEN);
    printf("Result:\n");
    puts(str);
    printf("Done.\n");

    return 0;
}

void getnchar(char str[], int n)
{
    int i = 0;
    while (i < n - 1)
    {
        str[i] = getchar();
        if (isspace(str[i]))
        {
            break;
        }
        ++i;
    }
    str[i] = '\0';
}
