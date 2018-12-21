#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>

int main(void) {
	int min, index, temp;
	int array[10] = { 1, 10, 5, 8, 6, 7, 3, 4, 2, 9 };

	for (int i = 0; i < 10; i++) {
		min = 9999;
		for (int j = i; j < 10; j++) {
			if (min > array[j]) {
				min = array[j];
				index = j;
			}
		}
		temp = array[i];
		array[i] = array[index];
		array[index] = temp;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", array[i]);
	}
}