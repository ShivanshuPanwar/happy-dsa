#include<stdio.h>
#include<stdlib.h>    
struct node 
{
    int info;
    struct node *next;
};

struct node *head=NULL;
void create(struct node *);
void display(struct node *);
void InsertatBeg(struct node *);
void InsertatEnd(struct node *);
int main()
{
    int ch;
    while(1)
{
    printf("\n Enter 1:create 2:display 3:InsertatBeg 4:InsertatEnd 0:Exit \n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: create(head); break;
        case 2: display(head); break;
        case 3: InsertatBeg(head); break;
        case 4: InsertatEnd(head); break;
        case 0: exit(1); break;
        default : printf("Wrong choice!");
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
        head=temp;
     }
     else
     {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
     }
     printf("Node Created Successfully...");
}

void display(struct node *ptr)   
    {
    if(head==NULL)
    printf("Empty Linked list");
    else {
    printf("\nLinked list is: ");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
   }
}

void InsertatBeg(struct node *ptr)
    {
        struct node *temp;
        int data;
        temp=(struct node *)malloc(sizeof(struct node));
        printf("enter info:");
        scanf("%d",&data);
        temp->info=data;
        temp->next=NULL;
        temp->next=ptr;
        head = temp;
        printf("Node Inserted succesfully..");
    }

void InsertatEnd(struct node *ptr)
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
        head=temp;
     }
     else
     {
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=temp;
     }
     printf("Node Inserted Successfully...");
}