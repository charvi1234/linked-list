#include<stdio.h>
#include<stdlib.h>
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
int revprint(struct Node *c,struct Node**h)
{
  if(c==NULL)
     return 1;
     else
  {
        int y=revprint(c->next,h);
        if(y==1)
        {
        if((*h)->data==c->data)
        {
            (*h)=(*h)->next;
            return 1;
        }
        else
            return 0;
        }
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
    fourth->data=2;
    fourth->next=fifth;
    fifth->data=1;
    fifth->next=NULL;
    //sixth->data=6;
    //sixth->next=NULL;
    struct Node *curr=head;
    int x=revprint(curr,&head);
    if(x==1)
    {
        printf("palindrome exists");
    }
    else
    {
        printf("palindrome doesnt exist");
    }

}


