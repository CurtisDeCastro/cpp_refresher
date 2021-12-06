#include "cstdlib"
#include "iostream"
#include "string"
#include "ctime"
#include "cmath"
using namespace std;

int alt(){

/* WHILE, BREAK AND CONTINUE DEMO:
  srand(time(NULL));
  int randNum = rand() % 100;
  int i = 1;
  while (i != randNum) {
    i += 1;
    cout << i << endl;
  }

  int j = 1;
  while(j <= 20){
    if ((j%2) == 0){
      j += 1;
      continue;
    }
    if(j == 15) break;
    cout << j << endl;
    j += 1;
  } */

  // ASSIGNMENT: PRINT CHRISTMAS TREE
  // User will input how tall the tree should be
  // The height indicates number of passes of the for loop.
  // There will always be an additional layer on the bottom representing the tree stump
  // Example:
  //        #
  //       ###
  //      #####
  //     #######
  //    #########
  //        #

  string sTree;
  int nHeight;
  cout << "How tall would you like your tree?" << endl;
  cin >> nHeight;
  int nCount = 0;
  string sStump;
  while(nCount <= nHeight) {
    string sLayer;
    for (int i = nHeight-nCount; i >= 0; --i) {
      sLayer += ' ';
    }
    for (int i = 0; i < ((nCount*2)-1); ++i
    ) {
      sLayer += '#';
    }
    if (nCount == 1) {
      sStump = sLayer;
    }
    sLayer += '\n';
    sTree += sLayer;
    nCount += 1;
  };
  sTree += sStump;

  cout << sTree << endl;
  return 0;
}

// THIS IS THE INSTRUCTOR'S SOLUTION
int main() {
  int treeHeight;
  cout << "How Tall Is The Tree?\n";
  cin >> treeHeight;
  int spaces = treeHeight - 1;
  int hashes = 1;
  int stumpSpaces = treeHeight -1;

  while(treeHeight != 0) {
    for (int k = 0; k < spaces; ++k){
      cout << " ";
    }
    for (int l = 0; l < hashes; ++l){
      cout << "#";
    }
    cout << '\n';
    spaces -= 1;
    hashes += 2;
    treeHeight -= 1;
  }
  for (int m=0; m < stumpSpaces; ++m) {
    cout << " ";
  }
  cout << "#\n";
  return 0;
}