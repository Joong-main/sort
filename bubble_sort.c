#include <stdio.h>

void bubble_sort(int array[], int count) {

	int temp;

	for (int i = 0; i < count; i++) {
		for (int j = 0; j < count - 1; j++) {
			if (array[j] > array[j + 1]) {
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
}






int main(void) {
	

	int array[5] = { 5,2,3,4,5 };

	bubble_sort(array, sizeof(array) / sizeof(int));

	printf("%d", array[0]);





	return 0;
}
