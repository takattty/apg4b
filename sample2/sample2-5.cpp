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

int array_sum_from_i(vector<int> &data, int i) {
  // ベースケース
  if(i == data.size()) {
    return 0;
  }

  int s = array_sum_from_i(data, i + 1);
  return data.at(i) + s;
}

int array_sum(vector<int> &data) {
  return array_sum_from_i(data, 0);
}

bool is_prime_test(int i, int j) {
  // int boolean = 0;
  // if(i < j) {
  //   return 0;
  // } else if(i % j != 0) {
  //   boolean = 1;
  //   return boolean;
  // }

  // int result = is_prime_test(i+1, j);
  // return result;

  if(i == j) {
    return false;
  }

  if(j % i == 0) {
    return true;
  }

  return is_prime_test(i+1, j);
}

bool is_prime(int j) {
  // return is_prime_test(2, j);

  if(j == 1) {
    return false;
  } else if(j == 2) {
    return true;
  } else {
    return !is_prime_test(2, j);
  }
}

int main() {
  // cout << sum_range(3, 7) << endl;
  // vector<int> a = {0, 3, 9, 1, 5};
  // cout << array_sum(a) << endl;
  cout << is_prime(1) << endl;  // 0
  cout << is_prime(2) << endl;  // 1
  cout << is_prime(12) << endl; // 0
  cout << is_prime(13) << endl; // 1
}