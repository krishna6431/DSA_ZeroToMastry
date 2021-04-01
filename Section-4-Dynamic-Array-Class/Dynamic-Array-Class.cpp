#include <iostream>
using namespace std;
class DynamicArray {
  int *data;
  int nextIndex;
  int capacity; // total size of array

public:
  DynamicArray() {
    data = new int[5];
    nextIndex = 0;
    capacity = 5;
  }

  DynamicArray(int c) {
    data = new int[100];
    nextIndex = 0;
    capacity = 100;
  }

  DynamicArray(DynamicArray const &d) {
    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
    // shallow copy this->data = d.data;
    // deep copy
    this->data = new int[d.capacity];
    for (int i = 0; i < d.nextIndex; i++) {
      this->data[i] = d.data[i];
    }
  }

  void operator=(DynamicArray const &d) {
    this->nextIndex = d.nextIndex;
    this->capacity = d.capacity;
    // shallow copy this->data = d.data;
    // deep copy
    this->data = new int[d.capacity];
    for (int i = 0; i < d.nextIndex; i++) {
      this->data[i] = d.data[i];
    }
  }

  void add(int element) {
    if (nextIndex != capacity) {
      data[nextIndex] = element;
      nextIndex++;
    } else {
      int *newData = new int[capacity * 2];
      for (int i = 0; i < capacity; i++) {
        newData[i] = data[i];
      }
      delete[] data;
      data = newData;
      capacity = capacity * 2;
    }
  }

  void add(int element, int index) {
    if (index < nextIndex) {
      data[index] = element;
    } else if (index == nextIndex) {
      add(element);
    } else {
      cout << "Index is not valid" << endl;
      return;
    }
  }

  int get(int i) {
    if (i >= 0 && i < nextIndex) {
      return data[i];
    } else {
      return -1;
    }
  }

  void print() {
    for (int i = 0; i < nextIndex; i++) {
      cout << data[i] << " ";
    }
    cout << endl;
  }

  int getCapacity() { return capacity; }
};
