/**
 * print_hello - Prints "Hello, Betty!" to the standard output.
 *
 * This function prints a greeting message to the standard output.
 */
void print_hello(void)
{
        char *message = "Hello, Betty!";

        /* Print the message */
        printf("%s\n", message);
}

/**
 * main - Entry point of the program.
 *
 * This is the main function of the program. It calls the print_hello
 * function to print a greeting message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Call the print_hello function */
	print_hello();

	return (0);
}
