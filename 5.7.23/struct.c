// #include<stdio.h>
// struct student{
//     int roll_number;
//     float score;
// };
// int main(){
//     struct student st1;
//     st1 . roll_number = 10;
//     st1 . score = 50.23;
//     printf ("%d , %f" , st1.roll_number,st1.score );
//     return 0;
// }




// #include<stdio.h>
// struct student{
//     int roll_number;
//     float score;
// } ;
// int main(){
//     struct student st1 , str2;
//     st1 . roll_number = 10;
//     st1 . score = 50.23;
//     printf ("%d , %f" , st1.roll_number,st1.score );
//     struct student st3  = {15 , 73.3};
//     printf ("%d , %f" , st3.roll_number,st3.score );
//     return 0;
// }




// #include<stdio.h>
// struct student{
//     int roll_number;
//     float score;
// } st4 , st5;
// int main(){
//     struct student st1 , str2;
//     st1 . roll_number = 10;
//     st1 . score = 50.23;
//     printf ("%d , %f" , st1.roll_number,st1.score );
//     struct student st3  = {15 , 73.3};
//     printf ("%d , %f" , st3.roll_number,st3.score );
//     printf ("%d , %f" , st4.roll_number,st4.score );
//     return 0;
// }

#include<stdio.h>
struct student{
    int roll_number;
    float score;
} st4 , st5 , st_arr[20];
int main(){
    struct student st1 , str2;
    st1 . roll_number = 10;
    st1 . score = 50.23;
    printf ("%d , %f" , st1.roll_number,st1.score );
    struct student st3  = {15 , 73.3};
    printf ("%d , %f" , st3.roll_number,st3.score );
    printf ("%d , %f" , st4.roll_number,st4.score );
    return 0;
}
