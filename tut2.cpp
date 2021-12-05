#include "cstdlib"
#include "iostream"
#include "string"
#include "limits"
using namespace std;

int g_iRandNum = 0;
const double PI = 3.14159265;

int main(){
  bool bMarried = true;
  char chMyGrade = 'A';
  unsigned short int u16Age = 43;
  short int siWeight = 180;
  int nDays = 7;
  long lBigNum = 100000;
  float fPi = 3.14159;

  float fBigFloat = 1.11111111;
  float fBigFloat2 = 1.11111111;
  float fFloatSum = fBigFloat + fBigFloat2;

  printf("fFloatSum Precision: %.10f\n", fFloatSum);

  cout << "Min Double " << numeric_limits<double>::min() << endl;
  cout << "Max Double " << numeric_limits<double>::max() << endl;


  double dbBigDouble = 1.1111111111111111;
  double dbBigDouble2 = 1.1111111111111111;
  double dbDoubleSum = dbBigDouble + dbBigDouble2;
  printf("dbDoubleSum Precision: %.20f\n", dbBigDouble);

  long double ldPi = 3.14;
  auto whatWillIBe = true;

  cout << "Min long Double " << numeric_limits<long double>::min() << endl;
  cout << "Max long Double " << numeric_limits<long double>::max() << endl;

  cout << "Min Bool " << numeric_limits<bool>::min() << endl;
  cout << "Max Bool " << numeric_limits<bool>::max() << endl;

  cout << "Min unsigned short Int " << numeric_limits<unsigned short int>::min() << endl;
  cout << "Max unsigned short Int " << numeric_limits<unsigned short int>::max() << endl;

  cout << "Min short Int " << numeric_limits<short int>::min() << endl;
  cout << "Max short Int " << numeric_limits<short int>::max() << endl;

  cout << "Min Int " << numeric_limits<int>::min() << endl;
  cout << "Max Int " << numeric_limits<int>::max() << endl;

  cout << "Min long " << numeric_limits<long>::min() << endl;
  cout << "Max long " << numeric_limits<long>::max() << endl;

  cout << "Min float " << numeric_limits<float>::min() << endl;
  cout << "Max float " << numeric_limits<float>::max() << endl;

  cout << "Min long double " << numeric_limits<long double>::min() << endl;
  cout << "Max long double " << numeric_limits<long double>::max() << endl;

  cout << "int Size " << sizeof(int) << endl;

  printf("%c %d %5d %.3f %s\n", 'A', 10, 5, 3.1234, "Hi");

  return 0;

}
