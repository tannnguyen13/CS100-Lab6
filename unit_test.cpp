#include "gtest/gtest.h"

#include "sort.hpp"
#include "ListContainerTest.hpp"
#include "SelectionSortTest.hpp"
#include "vectortest.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
