#include <bits/stdc++.h>
using namespace std;

struct MyPair {
  int x;     // 1つ目のデータはint型であり、xという名前でアクセスできる
  string y;  // 2つ目のデータはstring型であり、yという名前でアクセスできる
  // コンストラクタ
  MyPair() {
    cout << "constructor called" << endl;
  }
  // メンバ関数
  void print() {
    // 直接x, yにアクセスできる
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
  }
};

int main() {
  MyPair p;
  p.x = 12345;
  p.y = "Hello";
  // MyPair p = {12345, "hello"};  // MyPair型の値を宣言 この子はMyPair型のオブジェクト。
  cout << "p.x = " << p.x << endl;
  cout << "p.y = " << p.y << endl;
}
