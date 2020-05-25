#include <stdio.h>

void main() {
    int c;
    int s = 0, t = 0, n = 0;
    while((c = getchar()) != EOF) {
        switch(c) {
        case ' ': s++; break;
        case '\n': n++; break;
        case '\t': t++; break;
        }
    }
    printf("spaces: %d\n", s);
    printf("newlines: %d\n", n);
    printf("tabs: %d\n", t);
}
