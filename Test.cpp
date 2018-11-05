/*@author: Ayah Alkhatib
@file: Test.cpp
@Project: Lab06
@Cretaed: 11/4th/2018*/

#include "Test.h"
Test::Test(){

}
void Test::run_tests() {
  isEmptyEmpty_test();
  sizeEmpty_test();
  searchEmpty_test();
  addBackEmpty_test();
  addFrontEmpty_test();
  removeBackEmpty_test();
  removeFrontEmpty_test();
  addBack_test();
  addFront_test();
  isEmpty_test();
  search_test();
  size_test();
  removeBack_test();
  removeFront_test();
}

void Test::isEmptyEmpty_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Empty Test for an empty list: ";
  if (list->isEmpty() == true){
    cout << endl << "Checking if isEmpty() return true when empty list is created:"
         << endl << "Empty test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if isEmpty() return true when empty list is created:"
         << endl << "Empty test: Failed"
         << endl << "__________________________________________________________"
         << endl;
  }
}


void Test::sizeEmpty_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Size Test for an empty: ";
  if (list->size() == 0){
    cout << endl << "Checking if size() return 0 when the list is empty:"
         << endl << "Size test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if size() return 0 when the list is empty:"
         << endl << "EmptyList size Test: Failed"
         << endl << "__________________________________________________________"
         << endl;
  }
}
void Test::searchEmpty_test() {
    LinkedListOfInts* list = new LinkedListOfInts();
    cout << endl << "Search Test for an empty:";
    if (list->search(1) == false){
      cout << endl << "Checking if search(x) return false if the value is not found in an empty list:"
           << endl << "Search test: PASSED"
           << endl << "__________________________________________________________"
           << endl;
    }
    else {
      cout << endl << "Checking if search(x) return false if the value is not found in an empty list:"
           << endl << "Search test: FAILED"
           << endl << "__________________________________________________________"
           << endl;
    }
}

void Test::addBackEmpty_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Add Back Test into an empty list:";
  list->addBack(5);
  if (list->size() == 1){
    cout << endl << "Checking if addBack(x) to an empty list increase the size:"
         << endl << "Add Back test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if addBack(x) to an empty list increase the size:"
         << endl << "Add Back test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::addFrontEmpty_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Add Front Test into an empty list:";
  list->addFront(5);
  if (list->size() == 1){
    cout << endl << "Checking if addFront(x) to an empty list increase the size:"
         << endl << "Add Front test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if addFront(x) to an empty list increase the size:"
         << endl << "Add Front test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::removeBackEmpty_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Remove Back Test from an empty list:";
  if (list->removeBack() == false){
    cout << endl << "Checking if removeBack() from an empty list returns false:"
         << endl << "Remove Back test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if removeBack() from an empty list returns false:"
         << endl << "Remove Back test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::removeFrontEmpty_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Remove Front Test from an empty list:";
  if (list->removeFront() == false){
    cout << endl << "Checking if removeFront() from an empty list returns false:"
    << endl << "Remove Front test: PASSED"
    << endl << "__________________________________________________________"
    << endl;
  }
  else {
    cout << endl << "Checking if removeFront() from an empty list returns false:"
    << endl << "Remove Front test: FAILED"
    << endl << "__________________________________________________________"
    << endl;
  }
}

void Test::addBack_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Add Back Test:";
  list->addBack(5);
  list->addBack(9);
  list->addBack(4);
  if (list->toVector()[2]== 4){
    cout << endl << "Checking if addBack(x) added to the end of the list:"
         << endl << "Add Back test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else if(list->toVector()[0]==4) {
    cout << endl << "Checking if addBack(x) added to the end of the list:"
         << endl << "Added to the front of the list!"
         << endl << "Add Back test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if addBack(x) added to the end of the list:"
         << endl << "Add Back test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::addFront_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Add Front Test:";
  list->addFront(5);
  list->addFront(9);
  list->addFront(4);
  if (list->toVector()[0]== 4){
    cout << endl << "Checking if addFront(x) added to the front of the list:"
         << endl << "Add Front test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else if(list->toVector()[2]==4) {
    cout << endl << "Checking if addBack(x) added to the front of the list:"
         << endl << "Added to the end of the list!"
         << endl << "Add Front test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if addFront(x) added to the front of the list:"
         << endl << "Add Front test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::isEmpty_test(){
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Empty Test: ";
  list->addFront(5);
  list->addFront(6);
  list->addBack(4);
  if (list->isEmpty() == false){
    cout << endl << "Checking if isEmpty() return false the list is not empty:"
         << endl << "Empty test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if isEmpty() return false the list is not empty:"
         << endl << "Empty test: Failed"
         << endl << "__________________________________________________________"
         << endl;
  }
}
void Test::search_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  list->addBack(5);
  list->addBack(10);
  list->addBack(15);

  cout << endl << "Search Test:";
  if (list->search(5) == true){
    cout << endl << "Checking if search(x) return true if the value is found in the list:"
         << endl << "Search test: PASSED"
         << endl << ".........................................................."
         << endl;
  }
  else {
    cout << endl << "Checking if search(x) return true if the value is found in the list:"
         << endl << "Search test: FAILED"
         << endl << ".........................................................."
         << endl;
  }

  cout << endl << "Search Test:";
  if (list->search(20) == false){
    cout << endl << "Checking if search(x) return false if the value is not found in the list:"
         << endl << "Search test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if search(x) return false if the value is not found in the list:"
         << endl << "Search test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::size_test(){
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Size Test: ";
  list->addBack(5);
  list->addBack(10);
  list->addBack(15);
  if (list->size() == 3){
    cout << endl << "Checking if size() return the correct size of the list:"
         << endl << "Size test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if size() return the correct size of the list:"
         << endl << "Size test: Failed"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::removeBack_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Remove Back Test:";
  list->addFront(5);
  list->addFront(9);
  list->addFront(4);
  list->addFront(15);
  list->addFront(20);
  list->removeBack();

  if (list->size() == 4){
    cout << endl << "Checking if removeBack() remove an element from the list:"
         << endl << "Remove Back test: PASSED"
         << endl << ".........................................................."
         << endl;
  }
  else{
    cout << endl << "Checking if removeBack() remove an element from the list:"
         << endl << "Remove Back test: FAILED"
         << endl << ".........................................................."
         << endl;
  }
  //searched for all valuse to find out if any of them has been deleted
  //non of the list elements has been deleted
  if (list->search(5) == false){
    cout << endl << "Checking if removeBack() remove an element from the list:"
         << endl << "By searching for the supposedly removed element: "
         << endl << "Remove Front test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if removeBack() remove an element from the list:"
         << endl << "By searching for the supposedly removed element: "
         << endl << "Remove Front test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}

void Test::removeFront_test() {
  LinkedListOfInts* list = new LinkedListOfInts();
  cout << endl << "Remove Front Test:";
  list->addFront(5);
  list->addFront(9);
  list->addFront(4);
  list->addFront(15);
  list->addFront(20);
  list->removeFront();

  if (list->size() == 4){
    cout << endl << "Checking if removeFront() remove an element from the list:"
         << endl << "Remove Front test: PASSED"
         << endl << ".........................................................."
         << endl;
  }
  else{
    cout << endl << "Checking if removeFront() remove an element from the list:"
         << endl << "Remove Front test: FAILED"
         << endl << ".........................................................."
         << endl;
  }
  //searched for all valuse to find out if any of them has been deleted
  //non of the list elements has been deleted
  if (list->search(20) == false){
    cout << endl << "Checking if removeFront() remove an element from the list:"
         << endl << "By searching for the supposedly removed element: "
         << endl << "Remove Front test: PASSED"
         << endl << "__________________________________________________________"
         << endl;
  }
  else {
    cout << endl << "Checking if removeFront() remove an element from the list:"
         << endl << "By searching for the supposedly removed element: "
         << endl << "Remove Front test: FAILED"
         << endl << "__________________________________________________________"
         << endl;
  }
}
