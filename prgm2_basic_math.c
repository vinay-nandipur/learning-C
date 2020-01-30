/*
This example program will do basic maths for you
*/
#include <stdio.h>
// #include -> Directive
// <stdio.h> -> Preprocessor (file ending with *.h is an header file)
int main(void)
// Every C Program starts with function name main with open/close parenthesis()
// void in main function means with no arguments/parameters
{
	// Main function body starts and ends with curly braces
	puts("Starting Basic Maths");
	// puts is an function retrieved from stdio.h header file used to print only data of type char.
	int var1;
	// int keyword to define integer data type
	var1 = 100;
	var1 = var1 + 100;
	printf("Value of var1 variable is: %d\n", var1);

	int var2 = 50;
	float var3;
  // float keyword to define Float data type
  var3 = var1 - var2;
  printf("Value of var3 variable is: %f\n", var3);
  // printf is an function retrieved from stdio.h header file
	// %f is a specifier, printf function will print a variable based on the specifier

	int i,j,k,l;
	i=100;
	j=25;
	k=13;
	l=(5*((j%k)+i)/(2*k))/2;

	printf("Value of l variable is: %d\n", l);

	return 0;
	// return tells the exit status of main function to the OS
}
