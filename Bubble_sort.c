#include <stdio.h>
int main (){
    int i,j,n,k,arr[10];
    printf("Enter the number of elements in array :");
    scanf("%d",&n);
    printf("%d\n\nInitial array : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n\nSteps for Sorting are : ");

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                arr[j]=arr[j]+arr[j+1];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
            }
        }
        printf("\n\nStep %d : ",i+1);
        for(k=0;k<n;k++)
        printf("%d, ",arr[k]);
    }
     printf("\n\nFinal Sorted array: ");
    for(i=0;i<n;i++)
        printf("%d, ",arr[i]);
return 0;
}
