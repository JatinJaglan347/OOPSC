#include <stdio.h>
int add (int a , int b ){
    return 0;
}

void bubbleSort(int arr[],int n ){
    for (int i = 0 ; i<n-1; i++);

}


int main (){
    int (*fptr )(int , int )=add;
    ptintf ("%p\n%p\n", &add , fptr);

    int arr []={9,8,7,6,5,10,11,12,13};
    int n = sizeof (arr)/sizeof (int);

    bubbleSOrt (arr , n);
    print(arr , n);

    return 0 ;
}