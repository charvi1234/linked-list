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
void delatbeg(struct node** h)
{
     struct Node *temp=*h;
     *h=temp->next;
     int x=temp->data;
     free(temp);
     temp=NULL;
}
void delatend(struct Node **h)
{
    struct Node *t=*h;
    if(*h==NULL)
    {
      printf("linked list is empty");
    }
    else if(t->next==NULL)
    {
        delatbeg(h);
    }
    else
    {
        struct Node* curr=*h;
        while(curr&&curr->next&&curr->next->next)
        {
            curr=curr->next;
        }
        curr->next=NULL;
    }
}

int main()
{
    int data1,data2,data3;
    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    delatend(&head);
    struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
    nn=head;
    while(nn!=NULL)
    {
        printf("%d\n",nn->data);
        nn=nn->next;
    }

}



