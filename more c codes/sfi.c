#include <stdio.h>
int main(){
int num,n,i,length;
printf("Enter the number");
scanf("%d",&num);

int arr[100];
while (num>0){
    arr[i]=num%10;
    num=num/10;
    i++;
}

length= sizeof(arr) / sizeof(arr[0]);

for (i=0;i<=length;i++){
switch(i){
    case 1:
    printf("One")
    case 2:
    printf("Two")
    case 3:
    printf("Three")
    case 4:
    printf("Four")
    case 5:
    printf("Five")
    case 6:
    printf("Six")
    case 7:
    printf("Seven")
    case 8:
    printf("Eight")
    case 9:
    printf("Nine")
    case 0:
    printf("")

}

}


}