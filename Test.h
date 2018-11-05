/*@author: Ayah Alkhatib
@file: Test.h
@Project: Lab06
@Cretaed: 11/4th/2018*/

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

  // @brief test if isEmpty returns true when the list is empty
  void isEmptyEmpty_test();

  // @brief test if size() returns 0 when the list is empty
  void sizeEmpty_test();

  // @brief test if search() returns false when the list is empty
  void searchEmpty_test();

  // @brief test if addBack(x) to an empty list, adds element to the list
  void addBackEmpty_test();

  // @brief test if addFront(x) to an empty list, adds element to the list
  void addFrontEmpty_test();

  // @brief test if removeBack() returns false if the list is empty
  void removeBackEmpty_test();

  // @brief test if removeFront() returns false if the list is empty
  void removeFrontEmpty_test();

  // Tests for a nonEmpty list
  // @brief test if isEmpty returns false when the list is not empty
  void isEmpty_test();

  // @brief test if size() returns the correct size of the list
  void size_test();

  // @brief test if search(x) returns true when the elemnt in the list and false otherwise
  void search_test();

  // @brief test if addBack(x) adds to the end of the list
  void addBack_test();

  // @brief test if addFront(x) adds to the front of the list
  void addFront_test();

  // @brief test if removeBack() removes from the end of the list
  void removeBack_test();

  // @brief test if iremoveFront() removes from the front of the list
  void removeFront_test();
};
#endif
