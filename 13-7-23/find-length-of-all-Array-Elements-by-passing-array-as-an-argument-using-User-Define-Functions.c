#include <stdio.h>

void findLengths(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        int number = arr[i];
        int length = 0;
        if (number == 0) {
            length = 1;
        }
        else {
            while (number != 0) {
                number /= 10;
                length++;
            }
        }
        printf("Length of element %d: %d\n", i + 1, length);
    }
}

int main() {
    int arr[] = {123,35,5741,736489,91234};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf(" -: LENGTH OF ELEMENT  :- \n");
	findLengths(arr, size);

    return 0;
}
