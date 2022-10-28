#include<iostream>

using namespace std;

template <unsigned int size> void printArray(int (&nums)[size]) {
  for (int i = 0; i < size; i++) {
    cout << nums[i];
    if (i < size - 1) {
      cout << ",";
    }
  }
  cout << endl;
}

void swap(int *n1, int *n2) {
  *n1 = *n1 + *n2;
  *n2 = *n1 - *n2;
  *n1 = *n1 - *n2;
}

template<unsigned int size> void selectionSort(int (&nums)[size]) {
  cout << endl << "Selection Sort: ";

  for (int i = 0; i < size - 1; i++) {
    int s_index = i;
    // lần đầu tiên số bé nhất đã được đưa lên đầu
    for (int j = i + 1; j < size; j++) {
      if (nums[j] < nums[s_index]) {
        s_index = j;
      }
    }
    swap(nums[s_index], nums[i]);
  }

  printArray(nums);
}

template<unsigned int size> void bubbleSort(int (&nums)[size]) {
  cout << endl << "Bubble Sort: ";

  for (int i = 0; i < size - 1; i++) {
    // lần đầu tiên số lớn nhất đã được xếp xuống dưới cùng
    for (int j = 0; j < size - i - 1; j++) {
      if (nums[j] > nums[j + 1]) {
        swap(nums[j], nums[j + 1]);
      }
    }
  }

  printArray(nums);
}

template<unsigned int size> void insertionSort() {
  
}

int main() {
  int nums[] = {8,3,7,9,5,4,2,1,10};

  cout << endl << endl;
  cout << "Initial array: ";
  printArray(nums);
  cout << endl << endl;

  selectionSort(nums);

  bubbleSort(nums);

  return 0;
}
