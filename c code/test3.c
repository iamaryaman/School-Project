int main(){
    int i,j,rows,stars,space;
    printf("Enter the number of rows\n");
    scanf("%d",&rows);
    stars=1;
    space=rows-1;

    for(i=0;i<=rows*2;i++)
    {
        for (j=1;j<=space;j++){
            printf(" ");
        }
        for (j=1;j<=stars*2;j++){
            printf(" ");
            printf("*");
        }
        for (j=1;j<=space;j++){
            printf(" ");
        }
        printf("\n");
        if (i<rows){
            space--;
            stars++;
        }
        else{
            space++;
            stars--;
            
        }
    
    }
    return 0;

}