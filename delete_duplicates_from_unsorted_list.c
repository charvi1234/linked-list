#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node*deldup(struct Node*A)
{
    int count=1;
struct Node*curr=A;
struct Node*curr2=curr;
while(curr&&curr->next)
{
    while(curr2&&curr2->next)
    {
        if(curr2->next->data==curr->data)
        {
            curr2->next=curr2->next->next;
        }
        else
            curr2=curr2->next;
    }
    curr=curr->next;
    curr2=curr;
}
return A;
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
    second->data=3;
    second->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=2;
    fourth->next=fifth;
    fifth->data=6;
    fifth->next=sixth;
    sixth->data=3;
    sixth->next=NULL;
    struct Node*curr=deldup(head);
    while(curr!=NULL)
    {
        printf("%d ",curr->data);
        curr=curr ->next;
    }
}
