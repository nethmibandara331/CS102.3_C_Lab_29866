#include <stdio.h>
#include <stdlib.h>
//Q-1
int main()
{
    int arr[10], i, sum = 0;
    float avg;

    // input values to the array
    for (i = 0; i < 10; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    //Minimum value
    int min_val = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    printf("Minimum value in the array: %d\n", min_val);

    //Maximum value
    int max_val = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    printf("Maximum value in the array: %d\n", max_val);

    //Average value
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }
    avg = (float)sum / 10;
    printf("Average value of the array: %.2f\n", avg);

    //Reverse the order of values
    printf("Reverse order of values in the array: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

//Q-2
int main() {
    int size, i;

    //Size of arrays
    printf("Enter size of arrays: ");
    scanf("%d", &size);

    //Declare two arrays with size given
    int arr1[size], arr2[size], arr3[size];

    //Input values to the first array
    printf("Enter values for first array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr1[i]);
    }

    //Input values to the second array
    printf("Enter values for second array:\n");
    for (i = 0; i < size; i++) {
        printf("Enter value for index %d: ", i);
        scanf("%d", &arr2[i]);
    }

    //Scalar sum
    int scalar_sum = 0;
    for (i = 0; i < size; i++) {
        scalar_sum += arr1[i] + arr2[i];
    }
    printf("Scalar sum of arrays: %d\n", scalar_sum);

    //Vector sum and store in third array
    printf("Vector sum of arrays: ");
    for (i = 0; i < size; i++) {
        arr3[i] = arr1[i] + arr2[i];
        printf("%d ", arr3[i]);
    }

    return 0;
}
