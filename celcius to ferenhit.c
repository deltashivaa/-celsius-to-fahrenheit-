#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

// Function to convert Fahrenheit to Celsius
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float temperature;
    char choice;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter 'C' to convert to Celsius or 'F' to convert to Fahrenheit: ");
    scanf(" %c", &choice); // Note the space before %c to consume the newline character

    if (choice == 'C' || choice == 'c') {
        printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, fahrenheit_to_celsius(temperature));
    } else if (choice == 'F' || choice == 'f') {
        printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, celsius_to_fahrenheit(temperature));
    } else {
        printf("Invalid choice! Please enter 'C' or 'F'.\n");
    }

    return 0;
}

