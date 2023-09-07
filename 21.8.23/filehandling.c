// #include <stdio.h>
// int main(){
//     FILE * fptr =NULL;
//     fptr = fopen ("abc.txt","r");

//     if (fptr == NULL){
//         printf("file not found");
//     }
//     return 0;
// }







//  // File will be created in w if not present so if condetion will not work.


// #include <stdio.h>
// int main(){
//     FILE * fptr =NULL;
//     fptr = fopen ("abc.txt","w");

//     if (fptr == NULL){
//         printf("file not found");
//     }
//     printf("file is created");
//     fclose (fptr);
//     return 0;
// }






// // this code helps to write date in the file 
// #include <stdio.h>
// int main(){
//     FILE * fptr =NULL;
//     fptr = fopen ("abc.txt","w");

//     if (fptr == NULL){
//         printf("file not found");
//     }
//     printf("file is created");
//     fprintf(fptr , "This line will get written inside to my file \n");
//     fclose (fptr);
//     return 0;
// }






// #include <stdio.h>
// int main(){
//     FILE * fptr =NULL;
//     fptr = fopen ("abc.txt","w");

//     if (fptr == NULL){
//         printf("file not found");
//     }
//     printf("file is created");
//     fprintf(fptr , "This line will get written inside to my file \n");
//     char ch = 'A';
//     fputc(ch,fptr);

//     fclose (fptr);
//     return 0;
// }




#include <stdio.h>
int main(){
    FILE * fptr =NULL;
    fptr = fopen ("abc.txt","w");

    if (fptr == NULL){
        printf("file not found");
    }
    printf("file is created");
    fprintf(fptr , "This line will get written inside to my file \n");
    char ch = 'A';
    fputc(ch,fptr);
    char ch1[100] = "This will also get written to the file.";
    fputs(ch1 , fptr);
    
    fclose (fptr);
    return 0;
}