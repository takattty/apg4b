#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B, i=0, j=0;
  string numA, numB;
  cin >> A >> B;
  cout << "A:"; // coutにどんどん加えていくイメージなんですね。
 
  while(i < A) {
    cout << "]"; // ここも。coutに]を付け加えていくイメージ。
    i++;
  }
  cout << endl;

  cout << "B:";
  while(j < B) { // ここjを使ってるけど、上のiを初期化して〇にしちゃえばまた使えます。要はスコープが効いてるから、0にしてあげないといけない。
    cout << "]";
    j++;
  }
  cout << endl;
}