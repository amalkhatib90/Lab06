#ifndef TEST_H
#define TEST_H

#include "Node.h"
#include "LinkedListOfInts.h"

#include <iostream>
#include <string>

using namespace std;

class Test{
public:
  Test();
  void run_tests();
private:
  // Tests for an empty tests
  void isEmptyEmpty_test();
  void sizeEmpty_test();
  void searchEmpty_test();
  void addBackEmpty_test();
  void addFrontEmpty_test();
  void removeBackEmpty_test();
  void removeFrontEmpty_test();
  // Tests for a nonEmpty list
  void isEmpty_test();
  void size_test();
  void search_test();
  void addBack_test();
  void addFront_test();
  void removeBack_test();
  void removeFront_test();
};
#endif
