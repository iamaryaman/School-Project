#include <stdio.h>
#include <string.h>
void  main () { 
char str1[50] = "Hello";
char str2[50] = "Arjun";
char result[50];
int  i  =  0  , j  =  0  ; 
while  (  str1 [i] != '\0'  ) { 
result  [i]  =  str1  [i]; 
i  ++  ; 
} 
while  (  str2  [j]  !=  '\0' ) { 
result  [i]  =  str2  [j]; 
i  ++  ; 
j  ++  ; 
} 
result  [i]  = '\0'; 
} 

