#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main() {
    double fahrenheitprueba = 32.00;
    double deberiadar= 0.00;
    double Celsiusprueba = Celsius(fahrenheitprueba);
    assert(Celsiusprueba == deberiadar);
    
    double celsiusprueba2 = 0.00;
    double deberiadar2 = 32.00;
    double Fahrenheitprueba2 = Fahrenheit(celsiusprueba2);
    assert(Fahrenheitprueba2 == deberiadar2);

    return 0;
}
