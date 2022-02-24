#include <stdio.h>

int main()
{
    char str[9] = "abcabcddd";
    int count,i , j;
    for(i = 0;str[i] != '\0';i++)
    {
        count = 1;
        for(j = 0;j <= i;j++)
        {
            if(str[j] == str[i])
            {
                break;
            }
        }
        if(j == i)
        {
            for(int k = i+1;str[k] != '\0';k++)
            {
                if(str[i] == str[k])
                {
                    count++;
                }
            }
            printf("Frequency of character %c : %d\n", str[i], count);
        }
    }

    return 0;
}
