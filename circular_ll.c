#include <stdio.h>
#include<stdlib.h>

#define NODE_SIZE 3

typedef struct circular
{
    int data;
    struct circular *link;
}cll;

cll *head = NULL;

void insert(int data);
void print();

int main()
{
    int data, i = 0;
    
    while(i++ < NODE_SIZE)
    {
        printf("Enter the data: ");
        scanf("%d", &data);
        insert(data);
    }
    print();
    return 0;
}

void insert(int data)
{
    cll *new = (cll *)malloc(sizeof(cll));
    if(new == NULL)
    {
        printf("Memory not allocated\n");
    }
    else
    {
        new->data = data;
        new->link = NULL;
        if(head == NULL)
        {
            head = new;
            new-> link = head;
        }
        else
        {
            cll *temp = head;
            while(temp->link != head)
            {
                temp = temp->link;
            }
            temp->link = new;
            new->link = head;
        }
    }
}

void print()
{
    cll *temp;
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        temp = head;
        do
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }while(temp != head);
        printf("\n");
    }
}



