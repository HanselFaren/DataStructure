#include <iostream>

using namespace std;

void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
      if (a[j] < a[min])
      min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}

int binarySearch(int a[], int x, int low, int high) {
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (a[mid] == x)
      return mid;

    if (a[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
	int a[] = {3, 57, 91, 46, 21, 4, 76};
	int x = 57;
	int n = sizeof(a) / sizeof(a[0]);
	
	selectionSort(a,n);
   	
	int result = binarySearch(a, x, 0, n - 1);
	
	if (result == -1)
		printf("Element is not found");
	else
    	printf("Element is found at index %d", result);
}
