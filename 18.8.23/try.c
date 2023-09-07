// compreas the string
// ip -> aaabbcddcc
// op -> a3b2c1d2a2

// #include <stdio.h>
// #include <string.h>

// void compressString(char *input) {
//     int length = strlen(input);
    
//     for (int i = 0; i < length; i++) {
//         int count = 1;
        
//         while (i < length - 1 && input[i] == input[i + 1]) {
//             count++;
//             i++;
//         }

//         printf("%c%d", input[i], count);
//     }
// }

// int main() {
//     char input[] = "aaabbcddcc";
    
//     printf("Input string: %s\n", input);
//     printf("Compressed string: ");
//     compressString(input);
    
//     return 0;
// }




// #include <stdio.h>
// #include <string.h>

// void compressString(const char *input, char *output) {
//     int length = strlen(input);
//     int outputIndex = 0;
    
//     for (int i = 0; i < length; i++) {
//         int count = 1;
        
//         while (i < length - 1 && input[i] == input[i + 1]) {
//             count++;
//             i++;
//         }
        
//         output[outputIndex++] = input[i];
//         if (count > 1) {
//             char countChar[10]; 
//             snprintf(countChar, sizeof(countChar), "%d", count);
//             int countLength = strlen(countChar);
//             for (int j = 0; j < countLength; j++) {
//                 output[outputIndex++] = countChar[j];
//             }
//         }
//     }
    
//     output[outputIndex] = '\0';
// }

// int main() {
//     char input[] = "aaaaaaaaaaaabbbbbbbbbbbbc";
//     char compressed[100]; 
    
//     printf("Input string: %s\n", input);
    
//     compressString(input, compressed);
//     printf("Compressed string: %s\n", compressed);
    
//     return 0;
// }


#include<stdio.h>
#include<math.h>
int main() {
    char str[255];
    char str_r[255];
    scanf(“%s”, &str);
    int j = 0, t = 0;
    char c = str[0];
    for(int i = 0; i < 255 & str[i] != '\0'; i++) {
        if (c == str[i]) {
            t++;
        } else {
            str_r[j] = c;
            int tt = log10(t);
            for(int f = tt; f >= 0; f--) {
                str_r[j+f+1] = (int)(t%10)+48;
                t = t/10;
            }
            j += tt+2;
            c = str[i];
            t = 1;
        }
    }
    str_r[j] = c;
    str_r[j+1] = t+48;
    str_r[j+2] = '\0';
    printf("%s", str_r);
    return 0;
}