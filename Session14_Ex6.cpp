#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];  
    int letter = 0;  

    printf("Nhap vao mot chuoi: ");
    fgets(str, sizeof(str), stdin);  

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letter ++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", letter);

    return 0;
}

