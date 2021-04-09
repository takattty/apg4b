#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
 
  vector<int> math(N); // N個の数学の点数データ
  vector<int> english(N); // N個の英語の点数データ
 
  // 数学の点数データを受け取る
  for (int i = 0; i < N; i++) {
    cin >> math.at(i);
  }
 
  // 英語の点数データを受け取る
  for (int i = 0; i < N; i++) {
    cin >> english.at(i);
  }
 
  // 合計点を出力
  for (int i = 0; i < N; i++) {
    cout << math.at(i) + english.at(i) << endl;
  }

  // push_back()で末尾に値を追加
  // pop_back()で末尾の値を削除
}