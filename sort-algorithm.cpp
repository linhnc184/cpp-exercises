#include<iostream>

using namespace std;

void printArray(int nums[], int n) {
  for (int i = 0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

void swap(int *n1, int *n2) {
  *n1 = *n1 + *n2;
  *n2 = *n1 - *n2;
  *n1 = *n1 - *n2;
}

void selectionSort(int nums[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int k = i;

    for (int j = i + 1; j < n; j++) {
      if (nums[j] < nums[k]) {
        k = j;
      }
    }

    swap(nums[k], nums[i]);
  }

  cout << "Selection Sort: ";
  printArray(nums, n);
}

void bubbleSort(int nums[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        swap(nums[j], nums[j + 1]);
      }
    }
  }

  cout << "Bubble Sort: ";
  printArray(nums, n);
}

void insertionSort(int nums[], int n) {
  int i, j;

  for (i = 1; i < n; i++) {
    j = i - 1;

    while (j >= 0 && (nums[j + 1] < nums[j])) {
      swap(nums[j + 1], nums[j]);
      j = j - 1;
    }
  }

  cout << "Insertion Sort: ";
  printArray(nums, n);
}

int main() {
  int nums[10] = {8,3,7,10,9,5,4,6,2,1};

  cout << endl << endl;
  cout << "Initial array: ";
  printArray(nums, 10);
  cout << endl << endl;

  // selectionSort(nums, 10);
  // bubbleSort(nums, 10);
  insertionSort(nums , 10);

  return 0;
}
