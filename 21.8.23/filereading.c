#include <stdio.h>
int main(){
    FILE * fptr =fopen ("abc.txt","r");
    if (fptr ==NULL){
        printf ("FIle not found \n");

    }
    char ch[100];
    fscanf(fptr,"%s",ch);
    fscanf(fptr,"%s",ch);
    printf("%s\n",ch);



    fclose(fptr);
    return 0;
}
