
#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

      average = (float)sum / n;

       printf("The average of the entered integers is: %.2f\n", average);

    return 0;
}
