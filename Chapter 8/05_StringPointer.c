#include <stdio.h>

int main() {
    // Declaring a string using a pointer
    char *message = "Hello World";

    printf("%s\n", message);

    // You can change where the pointer points
    message = "Goodbye World";
    printf("%s\n", message);

    return 0;
}