#include <bits/stdc++.h>
using namespace std;

int main() {
  // breakがなければこのループは i == 4 まで繰り返す
  for (int i = 0; i < 5; i++) {
 
    if (i == 3) {
      cout << "ぬける" << endl;
      break; // i == 3 の時点でループから抜ける
    }
 
    cout << i << endl;
  }
 
  cout << "終了" << endl;

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << "i: " << i << ", j:" << j << endl;
    }
  }
}