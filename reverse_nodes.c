#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* createnode()
{
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    return newnode;
};
struct Node *revnode( struct Node *first)
{
    struct Node *second=NULL;
  if(first)
  {
      second=first->next;
  }
  if(second==NULL)
  {
      return first;
  }
  else
    {
    struct Node *curr=revnode(second);
    first->next=second->next;
    second->next=first;
    return curr;
    }
}
void print(struct node**h)
{
        struct Node *nn=*h;
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
    struct Node* sec=NULL;
    struct Node* third=NULL;
    struct Node* fourth=NULL;
    struct Node* fifth=NULL;
    struct Node* sixth=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    sec=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));
    sixth=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=sec;
    sec->data=2;
    sec->next=third;
    third->data=3;
    third->next=fourth;
    fourth->data=4;
    fourth->next=fifth;
    fifth->data=5;
    fifth->next=NULL;
    head=revnode(head);
    print(&head);
}



