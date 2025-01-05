#include <stdio.h>
#include <string.h>


void main(){
    int arr[]={6,9,4,2,0};
    int len = sizeof(arr)/sizeof(arr[0]);
    int i,j;
int min,minindex;
    for (int i=0; i< len ; i++ ){
        j=i;
        while ( j > 0 && arr[j-1] > arr[j]){
        int temp = arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
        }
    }
    for (int m=0; m < len; m++){
        printf("%d",arr[m]);
    }
}
    
