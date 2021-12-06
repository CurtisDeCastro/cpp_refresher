#include "cstdlib"
#include "iostream"
#include "string"
#include "array"
#include "cmath"
#include "ctime"
using namespace std;

// function prototypes below
double AddNumbers(double num1,  double num2);
void AssignAge(int age);
int AssignAge2(int age);

int main(){
  // double num1, num2;
  // cout << "Enter Num 1 : ";
  // cin >> num1;
  // cout << "Enter Num 2 : ";
  // cin >> num2;
  // printf("%.1f + %.1f = %.1f\n", num1, num2, AddNumbers(num1, num2));
  int age = 43;
  age = AssignAge2(age);
  cout << "New Age " << age << endl;
  return 0;
}

double AddNumbers(double num1 = 0, double num2 = 0){
  return num1 + num2;
}

void AssignAge(int age){
  age = 24;
}

int AssignAge2(int age){
  age = 24;
  return age;
}