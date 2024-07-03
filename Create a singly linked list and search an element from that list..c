#include <stdio.h>
#include <malloc.h>
struct node
{
 int data;
  struct node *next;
}*start=NULL;
int main(void) {
 struct node *ptr,*k,*p,*cur;
 int flag=1,i=1,n;
 while(flag)
 {
 printf("\nEnter data:");
 k=(struct node *)malloc(sizeof(struct node));
 scanf("%d",&k->data);
 k->next=NULL;
 if(start==NULL)
 {
 start=k;
 }
 else
 {
 k->next=start;
 start=k;
 }
 printf("Your linked list traversing...\n");
 ptr=start;
  while(ptr!=NULL)
 {
 printf("-> %d",ptr->data);
 ptr=ptr->next;
 }
 printf("\nDo you want to continue if yes enter 1 otherwise 0:");
 scanf("%d",&flag);
 }
 flag=0;
 printf("Enter number to search:");
 scanf("%d",&n);
 p=start;
 while(p!=NULL)
 {
 if(p->data==n)
 {
 printf("%d is found at node %d\n",n,i);
 flag=1;
  }
 p=p->next;
 i++;
 }
 if(flag==0)
 {
 printf("%d is not found in this linked list",n);
 }
 return 0;
}
