#include<stdio.h>
int main(){
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%s\n",__FILE__);
    printf("%s\n",__LINE__);
    printf("%s\n",__STDC__);//tell thich type of compiler is used now days mostly ANSI
    return 0;
}