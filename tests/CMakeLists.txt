include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
  OVERRIDE_FIND_PACKAGE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  dynamic_array_test
  dynamic_array_test.cpp
)

target_link_libraries(
  dynamic_array_test
  GTest::gtest_main
  )

include(GoogleTest)
gtest_discover_tests(dynamic_array_test)
