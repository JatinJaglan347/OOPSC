// #include<stdio.h>
// typedef enum week{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};



// int main() {
//    enum week day = Wednesday;
//    printf("%d\n", day);
//     return 0;

// }


// #include<stdio.h>
// typedef enum week{Sunday=10,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};



// int main() {
//    enum week day = Wednesday;
//    printf("%d\n", day);
//     return 0;

// }


#include<stdio.h>
typedef enum week{Sunday=10 ,Monday,Tuesday=-20,Wednesday,Thursday,Friday,Saturday};



int main() {
   enum week day = Wednesday;
   printf("%d\n", day);
    return 0;

}