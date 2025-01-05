#include <stdio.h>



/*
void main(){
    int k,j,i,num;
    printf("Enter number of rows");
    scanf("%d",&num);
    for (k=1;k<=num;k++){
    for (i=1;i<=k;i++){
        printf("*");
        for (j=1;j<=i;j++){
            printf(" ");
        }
    }
    printf("\n");
    }
}
*/

int main(){
    int i,j,k;
    for (i=0;i<=5;i++){
        for (j=0;j<=i;j++){
            printf("%d",j);
            printf("%*c", j,' ');
        }
    printf("\n");
    }
}