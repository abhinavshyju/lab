#include <stdio.h>
#include<string.h>
int main(void) {
 char name[100][50],temp[100][50],t[50];
 int n=0,i=0,j=0;
 printf("Enter number of students:");
 scanf("%d",&n);
 printf("Enter %d names......\n",n);
 for(i=0;i<n;i++)
 {
 printf("Enter name[%d]:",i+1);
 scanf("%s",name[i]);
 strcpy(temp[i],name[i]);
 }
 for(i=0;i<n-1;i++)
 for(j=i+1;j<n;j++)
 if(strcmp(name[i],name[j])>0)
 {
 strcpy(t,name[i]);
 strcpy(name[i],name[j]);
 strcpy(name[j],t);
 }
 printf("sorted names are....\n");
 for(i=0;i<n;i++)
 printf("%s\n",name[i]);
 return 0;
}
