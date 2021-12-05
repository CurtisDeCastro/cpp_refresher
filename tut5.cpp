#include "cstdlib"
#include "iostream"
#include "string"
#include "cmath"
#include "ctime"
using namespace std;

int main() {

  cout << "abs(-10) = " << abs(-10) << endl;
  cout << "max(5, 4) = " << max(5, 4) << endl;
  cout << "min(5, 4) = " << min(5, 4) << endl;
  cout << "ceil(10.45) = " << ceil(10.45) << endl;
  cout << "floor(10.45) = " << floor(10.45) << endl;
  cout << "round(10.45) = " << round(10.45) << endl;
  cout << "pow(2, 3) = " << pow(2, 3) << endl;
  cout << "sqrt(100) = " << sqrt(100) << endl;
  cout << "cbrt(1000) = " << cbrt(1000) << endl;

  // lookup Euler's Number to understand the operations below
  // https://www.mathsisfun.com/numbers/e-eulers-number.html
  // it is the base of natural logarithms
  cout << "exp(1) = " << exp(1) << endl;
  cout << "exp(2) = " << exp(2) << endl;
  cout << "log(20.079) = " << log(20.079) << endl;
  cout << "log2(8) = " << log(8) << endl;
  cout << "hypot(2, 3) = " << log2(8) << endl;

  // need to seed random function with a numerical value
  // time works very well as it is always changing
  srand(time(NULL));
  // use the modulus operator to add upper limit for range of returned values
  int secretNum = rand() % 11;
  cout << "Secret Number: " << secretNum << endl;

  return 0;
}