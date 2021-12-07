#include "cstdlib"
#include "iostream"
#include "string"
#include "cmath"
#include "ctime"
#include "array"
#include "vector"
#include "sstream"
#include "algorithm"
using namespace std;

void AssignAge3(int* pAge);
void DoubleArray(int *arr, int size);

int main(){
  int age = 43;
  int* pAge = NULL;
  // reference operator ('&' below) returns address for a variable that can be stored in a pointer
  // dereference operator ('*') is used to indicate a pointer
  pAge = &age;
  cout << "Address : " << pAge << endl;
  cout << "Value at Address : " << *pAge << endl;

  int intArray[] = {1,2,3,4};
  int* pIntArray = intArray;

  cout << "First " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Next Valid " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Next Valid " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Last Valid " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  // After incrementing the index beyond the length of the array
  // the program will continue to return values stored in memory...
  // The Below will return values, though they will be incorrect
  cout << "First false value " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Next false value " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Next false value " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Next false value " << *pIntArray << " Address " << pIntArray << endl;
  pIntArray++;
  cout << "Last false value " << *pIntArray << " Address " << pIntArray << endl;
  // reset back to 0 position by decrementing
  pIntArray -= 8;
  cout << "First " << *pIntArray << " Address " << pIntArray << endl;

  AssignAge3(&age);
  cout << "Pointer Age " << age << endl;

  int arr[] = {1,2,3,4};
  DoubleArray(arr, 4);
  for(int i = 0; i < 4; ++i){
    cout << "Array: " << arr[i] << endl;
  }

  return 0;
}


// This function allows for reassignment of the value stored at the pointer address passed in
void AssignAge3(int* pAge){
  *pAge = 22;
  cout << "Now Executing Assign Age " << *pAge << " Input: " << pAge << endl;
}

// Takes in reference to array pointer and reassigns the stored value to 2x it's original val
void DoubleArray(int *arr, int size){
  for(int i=0; i < size; ++i){
    arr[i] = arr[i] * 2;
  }
}