#include <stdio.h>
void own_memcpy(void *str1, void *str2, int size)
{
    char *dest = (char *)str1;
    char *src = (char *)str2;
    for(int i=0;i<size;i++)
    {
        dest[i] = src[i];
    }
}
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hiii";
    
    int size = sizeof(str2);
    printf("Before memcpy str1 = %s\n", str1);
    own_memcpy(str1, str2, size);
    printf("After memcpy str1 = %s\n", str1);
    return 0;
}

