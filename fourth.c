#include<stdio.h>
#include<stdlib.h>
#include<string.h>        //reverse in group of k nodes
struct node
{
  int data;
  struct node *next;
};
struct node * create()
{
  struct node *temp,*start=NULL,*q,*p,*r,*t;
while(1)
{
char str1[10];
printf("\n Enter yes or no\n");
scanf("%s",str1);
if(strcmp(str1,"no")==0)
break;
else
{
temp=(struct node *)malloc(sizeof(struct node));
printf("Enter a value ");
scanf("%d",&temp->data);
  temp->next=NULL;
  if(start==NULL)
  {
    start=temp;
    p=temp;
    q=temp;
  }
  else
  {
    p->next=temp;
    p=temp;
  }
}
}
return q;
}
struct node* delete(struct node *p)
{
    struct node *temp,*start=NULL,*q,*r,*t;
    q=p;
    r=p;
while(p->next!=NULL)
  {
while(q->next!=NULL)
{
  if(p->data==q->next->data&&q->next->next!=NULL)
  {
    temp=q->next;
   q->next=q->next->next;
   free(temp);
  }
  else if(p->data==q->next->data&&q->next->next==NULL)
  {
    temp=q->next;
   q->next=NULL;
   free(temp);
  }
  if(q->next!=NULL)
  q=q->next;
}
if(p->next!=NULL)
{
p=p->next;
q=p;
}
}
return r;
}
void display(struct node * p)
{
  while(p!=NULL)
  {
    printf("%d\n",p->data);
  p=p->next;
  }
}
int main()
{
struct node *p,*q;
p=create();
q=delete(p);
display(q);
}
