#include <stdio.h>

void findMinMaxSum(int numbers[], int length) {
    long total = 0;
    long smallest = numbers[0];
    long largest = numbers[0];

    for (int i = 0; i < length; i++) {
        total += numbers[i];

        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }

        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    long minSum = total - largest;
    long maxSum = total - smallest;

    printf("%ld %ld\n", minSum, maxSum);
}

int main() {
    int list[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &list[i]);
    }

    findMinMaxSum(list, 5);
    return 0;
}


// have solved all problems