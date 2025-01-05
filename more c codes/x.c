#include <stdio.h>

int list[100][100],subarray[100],length,i,j,m;

void sub(int arr[],int length){
    int count=0;


    for (i=0;i < length; i++){
        for (j=0; j < i; j++){
            int outercount = 0;
            for (m=i;m <= j; m++){
                list[count][outercount++]=arr[m];
            }
            subarray[count] = outercount;
            count++;
        }
        

    }
}

