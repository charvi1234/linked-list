#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
int main()
{
    int data1,data2,data3;
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    struct Node* fourth=NULL;
    struct Node* fifth=NULL;
    struct Node* sixth=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    sixth=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=sixth;
    sixth->data=6;
    sixth->next=third;
    struct Node*fptr;
    struct Node*sptr;
    fptr=head;
    sptr=head;
    int count=1,flag=0;
    while(fptr&&fptr->next)
    {
        sptr=sptr->next;
        fptr=fptr->next->next;
        if(sptr==fptr)
        {
            flag=1;
            break;
        }
    }
    fptr=sptr;
    sptr=head;
    while(fptr!=sptr)
    {
        sptr=sptr->next;
        fptr=fptr->next;
        count++;
        if(sptr==fptr)
        {
            break;
        }
    }
printf("%d ",count);
}
