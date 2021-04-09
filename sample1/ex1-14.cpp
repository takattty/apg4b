#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int higher = max(max(A, B), max(B, C)); // ここの中の関数は一つでいい。調子に乗り過ぎ。
  int lower = min(min(A, B), min(B, C));
  cout << higher - lower << endl;
}