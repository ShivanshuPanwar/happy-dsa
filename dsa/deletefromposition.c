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
void InsertatPosition(struct node *);
void DeleteatBeg(struct node *);
void DeletefromEnd(struct node *);
void DeletefromPosition(struct node *);
int main()
{
    int ch;
    while(1)
{
    printf("\n Enter 1:create 2:display 3:InsertatBeg 4:InsertatEnd 5:InsertatPosition 6: DeleteatBeg 7: DeletefromEnd 8: DeletefromPosition 0:Exit \n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: create(head); break;
        case 2: display(head); break;
        case 3: InsertatBeg(head); break;
        case 4: InsertatEnd(head); break;
        case 5: InsertatPosition(head); break;
        case 6: DeleteatBeg(head); break;
        case 7: DeletefromEnd(head); break;
        case 8: DeletefromPosition(head); break;
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

void InsertatPosition(struct node *ptr)
{
    struct node *temp;
    int data,i,pos;
    temp=(struct node *)malloc(sizeof(struct node));
    printf("enter info:");
    scanf("%d",&data);
    temp->info=data;
    temp->next=NULL;

    printf("Enter position at which you want to insert:");
    scanf("%d",&pos);
    i=1;
    while(i<pos-1)
    {
        ptr=ptr->next;
        i++;
    }

    temp->next=ptr->next;
    ptr->next=temp;
    printf("Node Inserted Successfully at this position");

}

void DeleteatBeg(struct node *ptr)
{
    if(ptr==NULL)
    printf("No element remains for deletion.. Linked List underflow..");
    
    else 
    {
        head=ptr->next;
        free(ptr);
        printf("Node Deleted successfully..");
    }
}

void DeletefromEnd(struct node *ptr)
{
    struct node *preptr;
    if(ptr==NULL)
    printf("List Underflow...");
    else if(ptr->next==NULL)
    {
        head=NULL;
        printf("Node Deleted...");
        free(ptr);
    }
    else 
    {
        while(ptr->next!=NULL)
        {
            preptr=ptr;
            ptr=ptr->next;
        }
        preptr->next=NULL;
        printf("\n Node Deleted Successfully...\n");
        free(ptr);
    }
}

void DeletefromPosition(struct node *ptr)
{
    struct node *preptr;
    int x,position,i;
    if(ptr==NULL)
    printf("List Underflow...");
    else
    {
        printf("enter position from which you want to delete:");
        scanf("%d",&position);
        if(position==1)
        {
            head=ptr->next;
            free(ptr);
        }
        else
        {
            i=1;
            while(i<position)
            {
                preptr=ptr;
                ptr=ptr->next;
                i++;
            }
                preptr->next=ptr->next;
                printf("\nNode Deleted..\n");
                free(ptr);
            }
        }
    }