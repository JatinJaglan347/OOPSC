#include <stdio.h>

typedef union Dis{

    int dis1;
    long long dis2;
    double dis3;
}Dis;

int main(){
    printf("%d\n",sizeof(Dis));
    // Dis d1={1000000000000};
    Dis d1;
    d1.dis2=1000000000000;
    printf("%d\n",d1.dis1);
    printf("%lld\n",d1.dis2);
    // printf("%lld\n",d1.dis3);
    return 0;

}