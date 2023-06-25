#include <stdio.h>
#include "Conversion.h"

int main() {
    printf("De Fahrenheit a Celsius:\n");
    printf("F\t\tC\n");
    double fahrenheit;
    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20) {
        double celsius = Celsius(fahrenheit);
        printf("%.2f\t\t%.2f\n", fahrenheit, celsius);
    }
    printf("\n De Celsius a Fahrenheit:\n");
    printf("C\t\tF\n");
    double celsius;
    for (celsius = 0; celsius <= 148; celsius += 20) {
        double fahrenheit = Fahrenheit(celsius);
        printf("%.2f\t\t%.2f\n", celsius, fahrenheit);
    }
    return 0;
}
