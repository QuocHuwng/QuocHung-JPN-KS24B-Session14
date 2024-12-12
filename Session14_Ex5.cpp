#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello world";  
    int word_count = 0; 
    int i = 0;

    while (str[i] != '\0') {
        if ((i == 0 || str[i-1] == ' ') && str[i] != ' ') {
            word_count++;  
        }
        i++;
    }

    printf("So tu trong chuoi: %d\n", word_count);

    return 0;
}

