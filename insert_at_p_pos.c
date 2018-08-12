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
void addatbeg(struct node **h,int d)
{
    struct Node *nn=createnode();
    nn->data=d;
    nn->next=*h;
    *h=nn;
}
void addatpos(struct node **h,int d,int p)
{
    if(p==1)
        addatbeg(h,d);
    else
    {
        struct Node *nn=createnode();
        nn->data=d;
        struct Node *currentnode=*h;
        int i=0;
        while(i<(p-1))
        {
            currentnode=currentnode->next;
            i++;
        }
        if(currentnode->next==NULL)
        {
            addatend(h,d);
        }
        else
        {
            nn->next=currentnode->next;
            currentnode->next=nn;
        }
    }
}
void addatend(struct node **h,int d)
{
if(*h==NULL)
    addatbeg(h,d);
else
{
    struct Node *nn=createnode();
    nn->data=d;
    nn->next=NULL;
    struct Node * currentnode=*h;
    while(currentnode->next)
    {
        currentnode=currentnode->next;
    }
    currentnode->next=nn;
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
    //head=NULL;       //if head is null insert at end=insert at beg
    head->data=1;
    head->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;
    addatpos(&head,10,3);
    struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
    nn=head;
    while(nn!=NULL)
    {
        printf("%d\n",nn->data);
        nn=nn->next;
    }

}

