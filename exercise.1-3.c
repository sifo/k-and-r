#include <stdio.h>

int main () {
    float fahr, celsius;
    int mini, maxi, intervalle;
    int celsius_col_length, fahr_col_length;

    mini = 0;
    maxi = 300;
    intervalle = 20;

    fahr = mini;
    celsius_col_length = 6;
    fahr_col_length = 3;

    printf(" °F     °C\n");
    printf("%*s %*s\n", fahr_col_length, "F", celsius_col_length, "C");
    while (fahr <= maxi) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%*.0f %*.1f\n", fahr_col_length, fahr, celsius_col_length, celsius);
        fahr = fahr + intervalle;
    }
}
