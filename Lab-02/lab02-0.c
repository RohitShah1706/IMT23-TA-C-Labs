#include<stdio.h>

int main()
{
    // Declare variables for Fahrenheit and Celsius
    float fahrenheit, celsius;

    // Read the temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    // Convert Fahrenheit to Celsius using the formula
    celsius = (fahrenheit - 32) * 5 / 9;

    // Print the result
    printf("Temperature in Celsius: %.2f\n", celsius);	
	return 0;
}
