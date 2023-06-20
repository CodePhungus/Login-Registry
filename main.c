#include <stdio.h>

int main(void)
{
    FILE *file = fopen("Users/file.txt", "a+");
    char str[100];
    while (fgets(str, sizeof(str), file))
    {
        printf("%s", str);
        file++;
    }
    return 0;
}