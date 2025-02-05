#include <stdio.h>

int main() {
    int d, m, y;
    int isleap = 0, isvalid = 1;  // Default valid

    // Read input
    scanf("%d %d %d", &d, &m, &y);

    // Check for leap year
    if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0)) {
        isleap = 1;
    }

    // Check if month is valid (1 to 12)
    if (m < 1 || m > 12) {
        isvalid = 0;
    } else {
        // Check days in each month
        if (m == 2) {  // February
            if (isleap && (d < 1 || d > 29)) {
                isvalid = 0;
            } else if (!isleap && (d < 1 || d > 28)) {
                isvalid = 0;
            }
        } else if (m == 4 || m == 6 || m == 9 || m == 11) {  // Months with 30 days
            if (d < 1 || d > 30) {
                isvalid = 0;
            }
        } else {  // Months with 31 days
            if (d < 1 || d > 31) {
                isvalid = 0;
            }
        }
    }

    // Print the result
    if (isvalid) {
        printf("Valid Date\n");
    } else {
        printf("Invalid Date\n");
    }

    return 0;
}
