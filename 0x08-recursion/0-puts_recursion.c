#include "main.h"

/**
*a function that prints a string, followed by a new line.
*Return:0
*/

void _puts_recursion(char *s) {
    if (*s == '\0') {
        return; // Base case: end of the string, return without printing
    }

    putchar(*s); // Print the current character
    _puts_recursion(s + 1); // Recursively call _puts_recursion for the rest of the string
}

int main() {
    char str[] = "Hello, World!";
    _puts_recursion(str);
    return 0;
}
