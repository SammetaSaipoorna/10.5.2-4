#include <stdio.h>

int main() {
    // Define parameters for the arithmetic progression
    int initial_term = 3;
    int common_difference = 5;

    // Generate values for n and corresponding x(n)
    int n_values[20];
    int x_n_values[20];

    // Generate values starting from n = 0
    for (int i = 0; i < 20; i++) {
        n_values[i] = i;
        x_n_values[i] = initial_term + i * common_difference;
    }

    // Save the values in a .dat file
    FILE *file = fopen("AP.dat", "w");
    if (file == NULL) {
        fprintf(stderr, "Error opening file for writing.\n");
        return 1;
    }

    // Write the values to the file
    for (int i = 0; i < 20; i++) {
        fprintf(file, "%d %d\n", n_values[i], x_n_values[i]);
    }

    // Close the file
    fclose(file);

    return 0;
}

