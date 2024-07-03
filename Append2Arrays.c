#include<stdio.h>

void main(){
    int arr1[50] , arr2[50];
    int n1, n2;

    printf("Enter the limit of the first array :");
    scanf("%d", &n1);

    for(int i =0 ; i < n1; i++){
        printf("Enter the %dth element :", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter the limit of the second array :");
    scanf("%d", &n2);

    for(int i =0 ; i < n2; i++){
        printf("Enter the %dth element :",i+1);
        scanf("%d", &arr2[i]);
    }

    for(int i = n1 , j = 0; j < n2 ;i++ ,j++){
        arr1[i] = arr2[j];
    }

    printf("Merged array :");


    for(int i = 0; i < n1+n2 ; i++){
        printf("%d ,",arr1[i]);
    }
    printf("%d", arr1[0]);
}