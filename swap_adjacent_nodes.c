#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* altnodes(struct Node *first)
{
 struct Node*second=NULL;
 if(first)
    second=first->next;
 if(first==NULL||second==NULL)
    return first;
 else
    {
        struct Node*var=altnodes(second->next);
        second->next=first;
        first->next=var;
        return second;
    }
}
void print(struct Node*nn)
{
    while(nn!=NULL)
    {
        printf("%d ",nn->data);
        nn=nn->next;
    }
}
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
    sixth->next=NULL;
    head=altnodes(head);
    print(head);
}
