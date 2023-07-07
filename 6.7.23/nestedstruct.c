#include <stdio.h>
typedef struct student {
    int roll_number ;
    float score;
    struct course {
        char group_name;
        int cource_code;
    }c1 ,c2 ;
}stu , st1;
int main(){
    st1.c1.cource_code = 15;
    printf ("%d \n ", st1.c1.cource_code );
    return 0;
}