#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0, average, variance = 0, std_deviation;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    int numbers[n];

    // Input N numbers and calculate sum
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculate average
    average = sum / n;

    // Compute deviation and variance
    for (i = 0; i < n; i++) {
        variance += pow(numbers[i] - average, 2);
    }
    variance /= n;
    std_deviation = sqrt(variance);

    printf("Average: %.2f\n", average);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
