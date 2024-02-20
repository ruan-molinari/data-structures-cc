#ifndef DYNAMIC_ARRAY_H
#define DYNAMIC_ARRAY_H

#include <iostream>

template<typename T>
class DynamicArray {
  private:
    T* arr;
    size_t capacity;
    size_t size;

  public:

    // Constructor
    DynamicArray();

    // Destructor
    ~DynamicArray();

    // Function to get the size of an array
    size_t len() const;

    // Function to check if the array is empty
    bool isEmpty() const;

    // Function to insert an element at the end of the array
    void push(const T& value);

    // Function to remove an element at a specified index
    void pop();

    // Function to access an element at a specified index
    T& operator[](size_t index);

    // Function to print the elements of the array
    void log() const;

  private:
    // Function to resize array when capacity is full
    void resize(int newCapacity);

};

#endif
