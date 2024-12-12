#include <stdio.h>

int main() {
    char str[] = "Hello World";  

    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c ", str[i]);  // In ky tu va them dau cach
    }

    printf("\n");  // In ra dau xuong dong sau khi xong

    return 0;
}

