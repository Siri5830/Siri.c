#include <stdio.h>
int print_even_numbers(int arr[], int size) {
    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
int main() {
    int numbers[10], size;
    printf("Enter size of the array: ");
    scanf("%d", &size);
    printf("Enter %d integers:\n", size);
    for(int i=0;i<size;i++) {
        scanf("%d",&numbers[i]);
    }
    print_even_numbers(numbers, size); return 0;
}
