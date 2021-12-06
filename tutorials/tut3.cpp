#include "cstdlib"
#include "iostream"
#include "string"
using namespace std;

int main() {
  string sQuestion ("Enter Number 1: ");
  string sNum1, sNum2;
  cout << sQuestion;
  cin >> sNum1;
  cout << "Enter Number 2: ";
  cin >> sNum2;
  int nNum1 = stoi(sNum1);
  int nNum2 = stoi(sNum2);

  printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
  printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
  printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
  printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
  printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

// PROBLEM
// Enter Miles: 5
// 5 Miles equals 8.0467 kilometers

  string sMiles;
  double dMiles, dKilometers;
  cout << "Enter Miles: ";
  cin >> sMiles;
  dMiles = stod(sMiles);
  dKilometers = dMiles * 1.60934;

  printf("%.1f miles equals %.4f kilometers\nf", dMiles, dKilometers);

  return 0;
}