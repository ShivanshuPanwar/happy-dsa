// // LIST is print by using arrow (->) operator
// print hello by using arrow(->)

#include<stdio.h>
struct node
{
    char info;
    struct node *next;
};
int main()
{
    struct node temp1,temp2,temp3,temp4,temp5;
    struct node *ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
 
    ptr1=&temp1;
    temp1.info='H';
    temp1.next=NULL;
    printf("%c",ptr1->info);

    ptr2=&temp2;
    temp2.info='E';
    temp2.next=NULL;
    printf("%c",ptr2->info);

    ptr3=&temp3;
    temp3.info='L';
    temp3.next=NULL;
    printf("%c",ptr3->info);

    ptr4=&temp4;
    temp4.info='L';
    temp4.next=NULL;
    printf("%c",ptr4->info);

    ptr5=&temp5;
    temp5.info='O';
    temp5.next=NULL;
    printf("%c",ptr5->info);


    return 0;
}