#include "cstdlib"
#include "iostream"
#include "string"
using namespace std;

int main() {
  // CONDITIONAL OPERATORS
  // ==, !=, <, >, <=, >=

  // LOGICAL OPERATORS
  // && : If both are true, returns true
  // || : If either are true, returns true
  // !  : Converts true into false and vice versa

  // Make a program that decides if a birthday is important or not
  // 1-18 are important
  // 21 is important
  // 21-50 not important
  // over 65 is important

  // PROBLEM: Determine School Grade
  // If 5 "Go to Kindergarten"
  // 6-17 go to grades 1-12
  // 18+ "Go to college"
  // under 5: too young for school
  string sAge;
  cout << "Enter Age: ";
  cin >> sAge;
  int nAge = stoi(sAge);
  if (nAge < 5) {
    cout << "Too Young For School\n";
  } else if (nAge == 5) {
    cout << "Go to Kindergarten\n";
  } else if (nAge >= 6 && nAge <= 17) {
    int nGrade = nAge - 5;
    printf("Go to Grade %d\n", nGrade);
  } else {
    cout << "Go to College\n";
  }

  int age43 = 43;
  bool canIVote = (age43 >= 18) ? true : false;
  cout.setf(ios::boolalpha);
  cout << "Kanye is Old Enough to Vote : " << canIVote << endl;

  return 0;
}