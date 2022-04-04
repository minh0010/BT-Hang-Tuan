void reverseArray(float array[], int size) {
	int mid = size / 2;
	for (int i = 0; i < mid; ++i) {
		float tmp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = tmp;
	}
}

void sortAscending(float array[], int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (array[i] > array[j]) {
				float tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
			}
		}
	}
}

void sort(float * array, int size, bool isAscending) {
	sortAscending(array, size);

	if (isAscending == false) reverseArray(array, size);
}