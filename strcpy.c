#include <stdio.h>

void my_strcpy(char *dest, char *src);

int main()
{
    char *src = "Hello";
    char dest[10];
    
    my_strcpy(dest, src);
    printf("After string copy: dest = %s\n", dest);

    return 0;
}

void my_strcpy(char *dest, char *src)
{
    int i;
    for(i=0;src[i] != '\0';i++)
    {
        dest[i] = src[i];
    }
    dest[i] = '\0';
}