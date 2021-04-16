#include <bits/stdc++.h>
using namespace std;

// int main() {
//   //参照＝ある変数に別名を付ける事が出来る
//   //ある変数への参照を作ったとき、参照からその変数へアクセスすることができます。
//   //コピーの必要がない場合は参照渡しを用いるのが良いでしょう。
//   int a = 3;
//   int &b = a;  // bは変数aの参照
 
//   cout << "a: " << a << endl;  // aの値を出力
//   cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である3が出力される)
 
//   b = 4;  // 参照先の値を変更(aが4になる)
 
//   cout << "a: " << a << endl;  // aの値を出力
//   cout << "b: " << b << endl;  // bの参照先の値を出力(aの値である4が出力される)

//   a = 5;

//   cout << "a: " << a << endl;
//   cout << "b: " << b << endl;
// }

// int f(int x) {
//   x = x * 2;  // 2. xを2倍
//   return x;   // 3. xの値を返す
// }
 
// int main() {
//   int a = 3;  // "呼び出す側の変数"
//   int b = f(a);  // 1. aの値をfに渡し、4. 結果をbに代入
//       // int b = f(a); を展開
//     // {
//     //   int x = a;  // aの値がxにコピーされる(引数)
//     //   x *= 2;     // xが2倍される
//     //   b = x;      // xの値がbに代入される(返り値)
//     // }
//   cout << "a: " << a << endl;// a: 3
//   cout << "b: " << b << endl;// b: 6
// }

// int g(int &x) {
//   x = x * 2;  // xを2倍 (参照によって"呼び出す側の変数"が変更される)
//   return x;
// }
 
// int main() {
//   int a = 3;  // 関数を呼び出す側の変数
//   int b = g(a);  // xの参照先がaになる
//       // int b = g(a); を展開
//     // {
//     //   int &x = a; // xの参照先がaになる != コピーではない。あくまで参照
//     //   x *= 2;     // xが2倍される(つまりaが2倍される)
//     //   b = x;      // xの値(aの値)がbに代入される
//     // }
//   cout << "a: " << a << endl;// a: 6
//   cout << "b: " << b << endl;// b: 6
// }

// 配列の先頭100要素の値の合計を計算する
int sum100(vector<int> &a) {
  int result = 0;
  for (int i = 0; i < 100; i++) {
    result += a.at(i);
  }
  return result;
}
 
int main() {
  vector<int> vec(10000000, 1);  // すべての要素が1の配列
 
  // sum100 を500回呼び出す
  for (int i = 0; i < 500; i++) {
    cout << sum100(vec) << endl;  // 配列のコピーが生じる
  }
}

// 値渡し
// 10503 ms
// 79348 KB
// 参照渡し
// 44    ms
// 39508 KB