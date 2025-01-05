#include <stdio.h>

int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    // arr[] = {4,6,2,1}
    int length,i;
    int arr[]= {4,6,2,1};
    length = sizeof(arr) / sizeof(arr[0]);
    int count;
    while (1) 
    {
        count=0;
        for (i=0;i<length-1;i++){
            if ( arr[i] > arr[i+1] ){
                swap(&arr[i],&arr[i+1]);
                count++;
            }
        }

        if (count == 0){
            for (i=0;i<length;i++){
                printf("%d\n",arr[i]);
            }
            break;
        }
}
}