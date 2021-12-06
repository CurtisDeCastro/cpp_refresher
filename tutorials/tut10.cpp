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

int main(){
  vector<int> vecRandNums(2);
  vecRandNums[0] = 10;
  vecRandNums[1] = 20;

  vecRandNums.push_back(30);
  cout << "Vector Size: " << vecRandNums.size() << endl;

  cout << "Last Index: " << vecRandNums[vecRandNums.size()-1] << endl;

  vector<int>::iterator it;
  it = find(vecRandNums.begin(), vecRandNums.end(), 20);
  cout << *it << endl;

  string sSentence = "This is a random string";
  vector<string> vecWords;
  stringstream ss(sSentence);

  string sIndivStr;
  char cSpace = ' ';

  while(getline(ss, sIndivStr, cSpace)){
    vecWords.push_back(sIndivStr);
  }
  for (int i = 0; i < vecWords.size(); ++i) {
    cout << vecWords[i] << endl;
  }


  // PROBLEM
  // Enter Calculation (ex. 5 + 6) : 10 - 6
  // works for addition, subtraction, division and multiplication

  // string input;
  // cout << "Enter Calculation (e.g. 5 + 6)::" << endl;
  // cin >> input;
  // vector<int> vecNums;
  // string operation;
  // stringstream ss(input);
  // string sIndivNums;
  // while(getline(ss, sIndivNums, cSpace)){
  //   if (
  //     sIndivNums == '+' ||
  //     sIndivNums == '-' ||
  //     sIndivNums == '*' ||
  //     sIndivNums == '/'
  //   ) {
  //     operation = sIndivNums;
  //   } else {
  //     int num = stoi(sIndivNums);
  //     vecNums.push_back(num);
  //   }
  // }
  // cout << sIndivNums;


  // SOLUTION
    double dbNum1 = 0, dbNum2 = 0;
    string sCalc = "";
    vector<string> vecsCalc;

    cout << "Enter calculation (ex. 5 + 6): ";
    getline(cin, sCalc);

    stringstream ss2(sCalc);
    string indivStr;
    char space = ' ';

    while(getline(ss2, indivStr, space)){
        vecsCalc.push_back(indivStr);
    }

    dbNum1 = stoi(vecsCalc[0]);
    dbNum2 = stoi(vecsCalc[2]);
    string operation = vecsCalc[1];

    if (operation == "+"){
      printf("%.1f + %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 + dbNum2));
    } else if (operation == "-"){
        printf("%.1f - %.1f = %.1f\n", dbNum1, dbNum2,
                (dbNum1 - dbNum2));
    } else if (operation == "*"){
      printf("%.1f * %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 * dbNum2));
    } else if (operation == "/") {
      printf("%.1f / %.1f = %.1f\n", dbNum1, dbNum2, (dbNum1 / dbNum2));
    } else {
      cout << "Please Enter Only +, -, *, or /\n";
    }
  return 0;
}