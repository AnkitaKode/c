#include <stdio.h>

int main()
{
    char str[] = {'a', 'n', 'k', 'i', 't', 'a', '\0'}; //{"ankita"}
    char *ptr = str;

    printf("%s", ptr);

    /* Normal Method
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        ptr++;
    }*/
    return 0;
}
