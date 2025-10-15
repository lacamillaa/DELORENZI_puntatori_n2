#include <stdio.h>
#include <stdlib.h>

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
    free(s);
    return dbl;
}

int main(void) {
}