#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int nums[], int length)
{
	for (int i = length - 1; i >= 0; i--) {

		int has_sorted = 0;

		for (int j = 0; j < i; j++) {
			if (nums[j] > nums[j + 1]) {

				// swap elements
				int temp = nums[j];
				nums[j] = nums[j + 1];
				nums[j + 1] = temp;

				has_sorted = 1;
			}
		}

		if (has_sorted == 0) {
			break;
		}
	}
}

void print_array(int nums[], int length)
{
	for (int i = 0; i < length; i++) {
		printf("%d ", nums[i]);
	}
	printf("\n");
}

int main()
{
	int nums[8] = { 24, 17, 39, 2, 13, 26, 5, 10 };
	printf("before sorting:\n");
	print_array(nums, 8);

	// call bubble sort function
	bubble_sort(nums, 8);

	printf("after sorting:\n");
	print_array(nums, 8);
	system("pause");
	return 0;
}