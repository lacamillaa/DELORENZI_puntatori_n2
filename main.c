#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate(char* s) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    char* dbl = (char*)malloc(i + 1);
    if (dbl == NULL) return NULL;
    for (int j = 0; j < i; j++) {
        dbl[j] = s[j];
    }
    dbl[i] = 0;
    return dbl;
}

int main(void) {
    char* s = "Hello World";
    char* dbl = duplicate(s);
    for (int i = 0; i < strlen(dbl); i++) {
        printf("%c", dbl[i]);
    }
    printf("\n");
    free(dbl);
    dbl = NULL;
    return 0;
}