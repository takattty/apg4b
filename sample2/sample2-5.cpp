#include <bits/stdc++.h>
using namespace std;

// int sum(int n) {
//   if (n == 0) {
//     return 0;
//   }

//   // sum関数の中でsum関数を呼び出している
//   int s = sum(n - 1);
//   return s + n;
// }

// int main() {
//   cout << sum(2) << endl;    // 0 + 1 + 2 = 3
//   cout << sum(3) << endl;    // 0 + 1 + 2 + 3 = 6
//   cout << sum(10) << endl;   // 0 + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
// }

// 再帰関数の作り方
// 「引数」「返り値」「処理内容」を決める
// 再帰ステップの実装
// ベースケースの実装

// sum_range
int sum_range(int a, int b) {
  if(a == b) {
    return b;
  }

  int result = sum_range(a + 1, b);
  return result + a;
  // return a + sum_range(a + 1, b); // こうやって1行で書ける
}

int main() {
  cout << sum_range(3, 7) << endl;
  cout << sum_range(0, 4) << endl; // 0 + 1 + 2 + 3 + 4 = 10
  cout << sum_range(5, 8) << endl; // 5 + 6 + 7 + 8 = 26
}