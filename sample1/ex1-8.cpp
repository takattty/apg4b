#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, price, n;
  cin >> p;
  string text;
 
  // パターン1
  if (p == 1) {
    cin >> price >> n;
    cout << price * n << endl;
  }
 
  // パターン2
  if (p == 2) {
    cin >> text >> price >> n;
    cout << text << "!" << endl;
    cout << price * n << endl;
  }
}