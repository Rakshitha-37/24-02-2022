#include <stdio.h>
#include<stdlib.h>

#define NODE_SIZE 5

typedef struct node
{
    int data;
    struct node *link;
}sll;

sll *head = NULL;

void insert(int data);
void print();
int search(int element);

int main()
{
    int data, i = 0;
    while(i++ < NODE_SIZE)
    {
        printf("Enter data: ");
        scanf("%d", &data);
        insert(data);
    }
    print();
    int element;
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    search(element);
    
    return 0;
}

void insert(int data)
{
    sll *new = (sll *)malloc(sizeof(sll));
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
        }
        else
        {
            sll *temp = head;
            while(temp->link != NULL)
            {
                temp = temp->link;
            }
            temp->link = new;
        }
    }
}

void print()
{
    if(head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        sll *temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

int search(int element)
{
    if(head == NULL)
    {
        printf("List is empty\n");
        
    }
    else
    {
        sll *temp = head;
        while(temp != NULL)
        {
            if(temp->data == element)
            {
                printf("Element found\n");
                return 0;
            }
            else
            {
                temp = temp->link;
            }
        }
        printf("Element not found\n");
    }
}

