#include <gtest/gtest.h>
#include "../include/dynamic_array.h"

TEST(DynamicArrayTest, PushWorks) {
  DynamicArray<int> arr = DynamicArray<int>();

  arr.push(42);
  arr.push(72);
  arr.push(37);
  arr.push(69);
  arr.push(369);

  EXPECT_EQ(arr[0], 42);
}
