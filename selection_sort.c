
#include <stdio.h>

void selection_sort(int array[], int size);


int main(void) {

	int arr[] = { 9,2,3,4,5,1 };
	int size = sizeof(arr) / sizeof(arr[0]);

	selection_sort(arr, size);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	
	}


	return 0;

}

void selection_sort(int array[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (array[min] > array[j]) {
				min = j;
			}
		
		}

		int temp = array[i];
		array[i] = array[min];
		array[min] = temp;

	}
}
