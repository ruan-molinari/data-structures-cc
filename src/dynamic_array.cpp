#include "../include/dynamic_array.h"
#include <cstddef>
#include <stdexcept>

template<typename T>
DynamicArray<T>::DynamicArray() : arr(nullptr), capacity(0), size(0) {}

template<typename T>
DynamicArray<T>::~DynamicArray() {
  delete[] arr;
}

template<typename T>
size_t DynamicArray<T>::len() const {
  return size;
}

template<typename T>
bool DynamicArray<T>::isEmpty() const {
  return size == 0;
}

template<typename T>
void DynamicArray<T>::push(const T& value) {
  if (size == capacity) {
    resize(capacity == 0 ? 1 : 2 * capacity);
  }

  arr[++size] = value;
}

template<typename T>
void DynamicArray<T>::pop() {
  if (!isEmpty()) {
    arr[--size] = NULL;
  }
}

template<typename T>
void DynamicArray<T>::log() const {
  std::cout << "arr: " << arr << std::endl;
  std::cout << "capacity: " << capacity << std::endl;
  std::cout << "size: " << size << std::endl;
}

template<typename T>
T& DynamicArray<T>::operator[](size_t index) {
  if (index < size) {
    return arr[index];
  } else {
    throw std::out_of_range("Index out of range");
  }
}

template<typename T>
void DynamicArray<T>::resize(int newCapacity) {
    T *newArr = new T[newCapacity];
    for (int i = 0; i < size; i++) {
      newArr[i] = arr[i];
    }
    delete [] arr;
    arr = newArr;
    capacity = newCapacity;
}

