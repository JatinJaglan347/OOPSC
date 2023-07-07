#include <stdio.h>
typedef struct strudent{
    int rn;
    float score ;

}stu;
int main (){
    stu st1;
    stu*stptr = &st1;
    stptr -> rn = 15;
    stptr -> score =34;
    printf ("%d %d \n ", st1.rn , stptr -> rn);
    printf ("%f %f \n ", st1.score , stptr -> score);
    return 0 ;
}