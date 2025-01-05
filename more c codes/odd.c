#include <stdio.h>
#include <string.h>
void main(){
char arr[50]="Hello world";
int i,j;
char temp;
for ( i=0, j = strlen(arr)-1; i < j; i++,j--){
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

for (int m=0; arr[m] != '!0'; m++){
    printf("%c",arr[m]);
}
printf("\n");
}

