#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M), B(M); // 一次元配列＝Aが必ず勝っている
  for (int i = 0; i < M; i++) {
    cin >> A.at(i) >> B.at(i);
  }
 
  // ここにプログラムを追記
  // (ここで"試合結果の表"の2次元配列を宣言)
  vector<vector<char>> result(N, vector<char>(N, '-'));

  for(int i=0; i<M; i++) {
    // 1〜N → 0〜N-1 に変換
    A.at(i)--; // A.at(i) = A.at(i) - 1;
    B.at(i)--;
    result.at(A.at(i)).at(B.at(i)) = 'o';
    result.at(B.at(i)).at(A.at(i)) = 'x';
  }

  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++) {
      cout << result.at(i).at(j);
      if(j == N-1) {
        cout << endl;
      } else {
        cout << " ";
      }
    }
  }
}