/* Temperature Converter
 *  converter.c
 *  Margaret A.
 */ 

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

  int option = 0;
  double fahrenheit = 0, celsius = 0;

  {
        printf("Welcome to the Temperature Converter!\n");
	printf("Here are the following converting options...\n");
	printf("\t1. Fahrenheit to Celsius\n");
	printf("\t2. Celsius to Fahrenheit\n");
	printf("\t3. Fahrenheit to Kelvin\n");
	printf("Please enter the number that corresponds to the options above: ");
	scanf("%d", &option);
  }
  

  if (option == 1)
  {
	printf("Please enter your number in Fahrenheit: ");
	scanf("%lf", &fahrenheit);
	printf("Your number in celsius is: %.1lf\n", ((fahrenheit - 32) * 5/9));
  }

  else if (option == 2)
  {
	printf("Please enter your number in Celsius: ");
	scanf("%lf", &celsius);
	printf("Your number in fahrenheit is: %.1lf\n", (celsius * 1.8) + 32);
  }

  else if (option == 3)
  {
	  printf("Please enter your number in Fahrenheit: ");
	  scanf("%lf", &fahrenheit);
	  printf("Your number in fahrenheit is: %.1lf\n", ((fahrenheit - 32) * 5/9 + 273.15));
  }

  else 
  {
	printf("ERROR: Invalid option selected.");
  }

  return 0;
	
 }
