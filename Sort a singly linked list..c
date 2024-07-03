#include <stdio.h>
#include <malloc.h>
struct node
{
 int data;
 struct node *next;
}*start=NULL;
int main(void) {
 struct node *new_node,*ptr,*k,*cpt;
 int flag=1,temp;
 new_node=(struct node *)malloc(sizeof(struct node));
 printf("Enter the node data:");
 scanf("%d",&new_node->data);
 new_node->next=NULL;
 if(start==NULL)
 {
 start=new_node;
 }
 printf("Your linked list traversing...\n");
 ptr=start;
 while(ptr!=NULL)
 {
 printf("-> %d",ptr->data);
 ptr=ptr->next;
 }
 while(flag)
 {
 printf("\nEnter data:");
 k=(struct node *)malloc(sizeof(struct node));
 scanf("%d",&k->data);
 k->next=start;
 start=k;
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
 ptr=start;
 while(ptr->next!=NULL)
 {
 cpt=ptr->next;
 while(cpt!=NULL)
 {
 if(ptr->data > cpt->data)
 {
 temp=ptr->data;
 ptr->data=cpt->data;
 cpt->data=temp;
 }
cpt=cpt->next;
 }
 ptr=ptr->next;
 }
 printf("Your linked list traversing after sort...\n");
 ptr=start;
 while(ptr!=NULL)
 {
 printf("-> %d",ptr->data);
 ptr=ptr->next;}
 return 0;
}
