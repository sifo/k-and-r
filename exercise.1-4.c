#include <stdio.h>

int main () {
    float fahr, celsius;
    int mini, maxi, intervalle;
    int celsius_col_length, fahr_col_length;

    mini = -20;
    maxi = 150;
    intervalle = 10;

    celsius = mini;
    celsius_col_length = 4;
    fahr_col_length = 5;

    printf("%*s %*s\n", celsius_col_length, "C", fahr_col_length, "F");
    while (celsius <= maxi) {
        fahr = (celsius * 9.0)/5.0 + 32.0;
        printf("%*.0f %*.1f\n", celsius_col_length, celsius, fahr_col_length, fahr);
        celsius = celsius + intervalle;
    }
}
