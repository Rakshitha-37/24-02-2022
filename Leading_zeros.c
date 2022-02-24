#include <stdio.h>
#define TOTAL_BITS 32

int main()
{
    int data,count = 0;
    printf("Enter the data: ");
    scanf("%d", &data);
    for(int i = TOTAL_BITS-1;i >= 0;i--)
    {
        if((data>>i) & 1)
        {
            printf("1 ");
        }
        else
        {
            printf("0 ");
        }
    }
    for(int i = TOTAL_BITS-1;i >= 0;i--)
    {
        if(((data >> i) & 1) == 0)
        {
           count++; 
        }
        else
        {
            break;
        }
    }
    printf("\nLeading zeros count = %d\n", count);
    return 0;
}
