#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  // int sum = 0;
  // for (int i = 1; i <= N; i++) {
  //   sum += i;
  // }
  // cout << sum << endl;

  // int sum = N * (N + 1) / 2;
  // cout << sum << endl;

  // vector<vector<int>> table(N, vector<int>(N));
  // for (int i = 0; i < N; i++) {
  //   for (int j = 0; j < N; j++) {
  //     table.at(i).at(j) = (i + 1) * (j + 1);  // N×N回実行される
  //   }
  // }
 
  // // 出力
  // for (int i = 0; i < N; i++) {
  //   for (int j = 0; j < N; j++) {
  //     cout << table.at(i).at(j);
  //     if (j != N - 1) {
  //       cout << " ";
  //     }
  //     else {
  //       cout << endl;
  //     }
  //   }
  // }

  int cnt = 0;
  while (N > 0) {
    cnt++;
    N /= 2;
  }
  cout << cnt << endl;
}
