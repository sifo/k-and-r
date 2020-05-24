#include "stdio.h"

void main() {
    int c;
    int v;
    while(v = ((c = getchar()) != EOF)) {
        putchar(c);
        if(v == 0) break;
    }
}
