#include <stdio.h>
int main(){
    int a ;
    int *aptr =&a ;
    // datatype * pointername =&variablename;



    //1 syntex
    const int * aptr; // a pointer aptr to a constant type of integer 
    aptr = &a;
    a++;
    (*aptr)++;
    printf ("%d\n",*aptr);

    // // 2 syntex 
    // int b = 10;
    // int * const bptr ; // a constant pointer to a integer
    // bptr = &b; // error
    // printf ("%d\n" *bptr);    



    //3 syntex
    const int * const cptr; // a constant pointer to a constant integer 
    
    return 0 ;
}