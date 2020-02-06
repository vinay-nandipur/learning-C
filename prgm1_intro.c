#include <stdio.h>
// #include -> Directive
// <stdio.h> -> Preprocessor (file ending with *.h is an header file)
int main(void)
// Every C Program starts with function name main with open/close parenthesis()
// void in main function means with no arguments/parameters
{
	// Main function body starts and ends with curly braces
	puts("Let's Learn C Programming");
	// puts is an function retrieved from stdio.h header file
	return 0;
	// return tells the exit status of main function to the OS
}

/* Output:

Let's Learn C Programming

*/
