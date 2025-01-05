#include <stdio.h>
#include <string.h>



int words(char string[]){
    int count=0;
    for (int i=0; i < strlen(string); i++){
        if (string[i] == ' '){
            count++;
        }
    }
    return (count);
}

int vowels(char string[]){
    int count=0;
    char vowels[]={'a','e','i','o','u'};
int j,m;
    for (j=0; j< strlen(string); j++){
        for (m=0 ; m < strlen(vowels); m++){
            if (string[j]==vowels[m]){
                count++;
                break;
            }
        }
    }
    return count;
}

void main(){
    char arr[]= "Aryaman Sharma and His little minions";
    int a,b;
    a =words(arr);
    b =vowels(arr);
    printf("1 - %d, 2 - %d",a,b);
}