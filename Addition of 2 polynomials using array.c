#include <stdio.h>
#define MAXD 10
int main(void) {
 int poly1[MAXD+1],poly2[MAXD+1],polysum[MAXD+1];
 int d1,i,d2,dsum;
 printf("Enter First polynomial details...\n");
 printf("Enter degree of Polynomial:");
 scanf("%d",&d1);
 printf("Enter the coefficients of the polynimial...\n");
 for(i=d1;i>=0;i--)
 {
 printf("Coefficient of x^[%d]:",i);
 scanf("%d",&poly1[i]);
 }
 printf("Enter Second polynomial details...\n");
 printf("Enter degree of Polynomial:");
 scanf("%d",&d2);
 printf("Enter the coefficients of the polynimial...\n");
 for(i=d2;i>=0;i--)
 {
 printf("Coefficient of x^[%d]:",i);
 scanf("%d",&poly2[i]);
 }
 printf("\n First Polynomial is:");
 for(i=d1;i>=0;i--)
 {
 if(poly1[i]!=0)
 {
 if(i==d1)
 {
 printf("%dx^%d",poly1[i],i);
 }
 else if(i==1){
 printf("+%dx",poly1[i]);
 }
 else if(i==0)
 {
 printf("+%d",poly1[i]);
 }
 else
 {
 printf("+%dx^%d",poly1[i],i);
 }
 }
 }
 printf("\nSecond Polynomial is:");
 for(i=d2;i>=0;i--)
 {
 if(poly2[i]!=0)
 {
 if(i==d2)
 {
 printf("%dx^%d",poly2[i],i);
 }
 else if(i==1)
 {
 printf("+%dx",poly2[i]);
 }
 else if(i==0)
 {
 printf("+%d",poly2[i]);
 }
 else
 {
 printf("+%dx^%d",poly2[i],i);
 }
 }
 }
 if(d1==d2)
 {
 dsum=d1;
  }
 else if(d1>d2)
 {
 dsum=d1;
 }
 else
 {
 dsum=d2;
  }
 for(i=dsum;i>=0;i--)
 {
 polysum[i]=poly1[i]+poly2[i];
 }
 printf("\nResultant Polynomial is:");
 for(i=dsum;i>=0;i--)
 {
 if(polysum[i]!=0)
 {
 if(i==d1)
 {
 printf("%dx^%d",polysum[i],i);
 }
 else if(i==1)
 {
 printf("+%dx",polysum[i]);
 }
 else if(i==0)
 {
 printf("+%d",polysum[i]);
 }
 else
 {
 printf("+%dx^%d",polysum[i],i);
 }
 }
 }
 return 0;
}