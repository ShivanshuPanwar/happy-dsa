// create linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *next;
};

void create(struct node *);
struct node *head =NULL;
int main()
{
    int ch;
    while(1) 
    {
      printf("\n Enter 1:create 0:exit \n" );
      printf("enter your choice:");
      scanf("%d",&ch);
      switch(ch)
      {
        case 1: create(head); break;
        case 0: exit(1);
        default: printf("wrong choice");
      }

    }
    return 0;
}
void create(struct node *ptr)
{
    struct node *temp;
    int data;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter info:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;
    if(head==NULL)
    {
        head = temp;
    }
    else 
    {
        ptr = head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
    }
}