#include <unistd.h>

// deliver the program with the main
int		main(void)
{
	// Show 'a' on the standard output
	write(1, "a", 1);
}

or
#include <unistd.h>

int main(void)
{
    // 1. Create a single character variable using single quotes
    char letter = 'a';

    // 2. Use the '&' symbol to pass the address of that variable
    write(1, &letter, 1);
}
