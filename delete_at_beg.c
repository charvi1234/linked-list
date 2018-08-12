#include<stdio.h>
struct Node
{
    int data;
    struct Node* next;
};
void delatbeg(struct node** h)
{
    //struct Node* h;
 if(*h==NULL)
 {
     printf("linked list is empty");
 }
 else
 {
     struct Node *temp=*h;
     *h=temp->next;
     int x=temp->data;
     free(temp);
     temp=NULL;
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
    delatbeg(&head);
    struct Node*nn=(struct Node*)malloc(sizeof(struct Node));
    nn=head;
    while(nn!=NULL)
    {
        printf("%d\n",nn->data);
        nn=nn->next;
    }

}


