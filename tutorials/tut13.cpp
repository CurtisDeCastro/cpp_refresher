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

vector<int> Range(int start, int max, int step);

int main(){
  // vector<int> range = Range(1, 10, 2);
  // for(auto y: range){
  //   cout << y << endl;
  // }

  double num1 = 0, num2 = 0;
  cout << "Enter Number 1: ";
  cin >> num1;
  cout << "Enter Number 2: ";
  cin >> num2;
  try {
    if (num2 == 0){
      throw "Division by Zero is Not Possible";
    } else {
      printf("%.1f / %.1f = %.2f\n", num1, num2, (num1 / num2));
    }
  }
  catch(const char* exp){
    cout << "Error: " << exp << endl;
  }
  try {
    cout << "Throwing Exception\n";
    throw runtime_error("Error Occurred");
    cout << "Can you print me?\n";
  }
  catch(exception &exp){
    cout << "Handled Exception: " << exp.what() << endl;

  }
  catch(...){
    cout << "Default Exception Catch\n";
  }
  return 0;
}

vector<int> Range(int start, int max, int step){
  int i = start;
  vector<int> range;
  while(i <= max){
    range.push_back(i);
    i += step;
  }
  return range;
}