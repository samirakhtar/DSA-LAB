#include <iostream>

using namespace std;

int main() {
  int myArray[5] = {1, 2, 3, 4, 5};
  int* myPointer;

  myPointer = myArray; // The pointer points to the beginning of the array

  cout << "The first element of the array is: " << *myPointer << endl; // Prints 1

  myPointer++; // Move the pointer to the next element in the array
  cout << "The second element of the array is: " << *myPointer << endl; // Prints 2

  return 0;
}

