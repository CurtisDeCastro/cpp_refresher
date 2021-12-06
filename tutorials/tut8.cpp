#include "cstdlib"
#include "iostream"
#include "cmath"
#include "ctime"

using namespace std;

int main(){
  srand(time(NULL));
  int secretNum = rand() % 11;
  int guess = 0;

  do{
    cout << "GUESS THE NUMBER: ";
    cin >> guess;
    if (guess > secretNum) cout << "Too Big\n";
    if (guess < secretNum) cout << "Too Small\n";
  } while (guess != secretNum);

  // while (guess != secretNum) {
  //   cout << "GUESS THE NUMBER: ";
  //   cin >> guess;
  //   if (guess > secretNum) cout << "Too Big\n";
  //   if (guess < secretNum) cout << "Too Small\n";
  // }

  cout << "You Guessed It!\n" << endl;

  return 0;
}