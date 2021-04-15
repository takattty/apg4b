#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  // int型の2次元配列(3×4要素の)の宣言
  vector<vector<int>> data(3, vector<int>(4));
 
  // 入力 (2重ループを用いる)
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> data.at(i).at(j);
    }
  }
 
  // 0の個数を数える
  int count = 0;
 
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
 
      // 上からi番目、左からj番目の画素が0かを判定
      if (data.at(i).at(j) == 0) {
        count++;
      }
 
    }
  }
 
  //  cout << count << endl;

   // 2次元配列の要素にアクセス
   // 変数名.at(上から何番目か).at(左から何番目か)
   // 二次元配列の宣言
   // vector<vector<int>> data(要素, vector<int>(要素, initial value));
   // 大きさの取得の考え方は、縦と横で考える。全体じゃない。
   // 縦＝data.size()
   // 横＝data.at(0).size()
   // 全体の要素数＝縦の要素数 * 横の要素数
 
  vector<vector<vector<int>>> Data = {
    {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
    },
    {
      {13, 14, 15, 16},
      {17, 18, 19, 20},
      {21, 22, 23, 24},
    },
  };

  int size1 = Data.size();
  cout << size1 << endl;  // 2

  int size2 = Data.at(1).size();
  cout << size2 << endl;  // 3

  int size3 = Data.at(0).at(0).size();
  cout << size3 << endl;  // 4

  cout << size1 * size2 * size3 << endl;  // 24
}