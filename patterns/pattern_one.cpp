/**
 * Print the following pattern
 * -----------
 * 1
 * 2 3
 * 4 5 6
 * 7 8 9 10
*/
#include <iostream>

int main() {
    int n = 4;  // Number of rows in the pattern
    int num = 1;  // Start with the number 1

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << num << " ";
            num++;
        }
        std::cout << std::endl;  // Move to the next line after each row
    }

    return 0;
}
