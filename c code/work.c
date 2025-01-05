#include <stdio.h>
#include <string.h>

void reverse(char str[],int start,int end);


int main(){
    char lol[]="Hello";
    int  len = strlen(lol);
    reverse(lol,0,len-1);
    printf("string is %s",lol);
    return 0;
}
void reverse(char str[],int start,int end)
{
    
    if (start>=end){
        return 0;
    }
    char temp = str[start];
    str[start]=str[end];
    str[end]=temp;

    reverse(str,start+1,end-1);}