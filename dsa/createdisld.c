// Create and Display Singly Linked List

#include<stdio.h>
#include<stdlib.h>    // for using malloc this library file is used
                     // in turbo c we use  alloc.h in place of stdlib.h  
struct node 
{
    int info;
    struct node *next;
};

struct node *head=NULL;
void create(struct node *);
void display(struct node *);
int main()
{
    int ch;   // ch is used for choice which is of integer type
    while(1)
{
    printf("\n Enter 1:create 2:display 0:Exit \n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: create(head); break;
        case 2: display(head); break;
        case 0: exit(1); break;
        default : printf("Wrong choice!");
    }
}    
  
   /* create();
    create();
    create();
    display(); */

    return 0;
} 
void create(struct node *ptr)
{
     struct node *temp;
     //struct node *ptr;
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

void display(struct node *ptr)   // struct node *ptr is argument
{
    //struct node *ptr;
    //ptr = head
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


/*int main()      //es type se bhi hum main function ka use kar sak the hai
{
    create();
    create();
    create();
    display();
    return 0;
}   */     