#include "cstdlib"
#include "iostream"
#include "string"
#include "cmath"
#include "ctime"
using namespace std;

int main(){
  // Accept Input
  // Provide Output
  // Store Value
  // execute code multiple times (loop)

  cout << "BASIC FOR LOOP: " << endl;
  // Basic For-Loop Example
  for (int i = 0; i <= 10; ++i) {
    cout << i << endl;
  }

  cout << "ITERATE THROUGH A DECLARED ARRAY: " << endl;
  // Declare an Array and iterate through its values
  int arr1[] = {1, 2, 3};
  // Determine number of elements in an array. Similar to Array.Length in JS
  int arrSize = sizeof(arr1)/sizeof(arr1[0]);
  for(int i = 0; i < arrSize; ++i) {
    cout << arr1[i] << endl;
  }

  cout << "C++ SHORTHAND VERSION: " << endl;
  // This is the shorthand way of writing a for-loop in C++
  // the auto data-type will automatically size the array
  // think of it as a forEach loop in javascript
  for(auto x: arr1) cout << x << endl;

  cout << "TEST EVEN OR ODD: " << endl;
  int num = 4;
  string sEvenOrOdd = ((num%2) == 0) ? "Even" : "Odd";
  cout << "Even or Odd : " << sEvenOrOdd << endl;

  // ASSIGNMENT: PRINT ALL ODD NUMS BETWEEN 1-20
  cout << "PRINT ONLY ODD NUMBERS" << endl;
  for(int j = 0; j <= 20; ++j) {
    if (((j%2) == 1)) {
      cout << j << endl;
    }
  }

/*   ASSIGNMENT: RETURN COMPOUND INTEREST
  1) Have user enter investment amount and expected interest
  (initial investment + additional added after each year)
  2) Each year their investment will increase by their investment + (investment * interest)
  3) Print Out earnings after a 10 year period

  How much to invest:
  What is the expected interest rate:
  return total + investment + total * interest */

  // declare accumulator for total
  double dTotal = 0;
  // initialize input string variables
  string sInvestment, sInterestRate;
  // ask for user input
  cout << "How much to invest: " << endl;
  // assign user input to input string variable
  cin >> sInvestment;
  // convert user input string to number
  double dInvestment = stod(sInvestment);
  // ask for second input
  cout << "Interest Rate" << endl;
  // await input
  cin >> sInterestRate;
  // convert input string to num
  double dInterestRate = stod(sInterestRate);
  // reduce interest rate input to fraction
  // (assumes user will input whole number instead of fraction)
  dInterestRate = dInterestRate * .01;
  // create a for-loop representing 10 years passage
  for(int k = 0; k < 10; ++k) {
    // add investment amount plus interest earned for each year to total
    dTotal += dInvestment + (dTotal * dInterestRate);
  }
  // Return string to console representing the total after 10 years
  cout << "The Total After 10 Years Will Be: " << dTotal << endl;

  return 0;
}
