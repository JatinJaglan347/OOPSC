#include <stdio.h>
// reverse string using stack
// str= "Hello"
// o/p ="olleH"


// str = "({[{()}]})" op = YES
// str = "({[{()}]})(" op = NO

int main() {
    char arr[100];
    int j = 0;
    char str[] = "{({}})";

    for (int i = 0; i < sizeof(str)/sizeof(char); i++) {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[') {
            arr[j] = str[i];
            j++;
        }
        else {
            if (str[i] == ')' && arr[j-1] == '(') {
                j--;
            }
            if (str[i] == '}' && arr[j-1] == '{') {
                j--;
            }
            if (str[i] == ']' && arr[j-1] == '[') {
                j--;
            }
        }
    }

    printf("%d\n", j);

    if (j == 0) printf("YES\n");
    else printf("NO\n");
}
