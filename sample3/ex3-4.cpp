#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する

// メンバ関数 to_str の定義を書く
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列

// メンバ関数 shift の定義を書く
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
struct Clock {
  int hour;
  int minute;
  int second;

  void set(int h, int m, int s) {
    hour = h;
    minute = m;
    second = s;
  }

  string to_str() {
    string to_s_hour;
    string to_s_minute;
    string to_s_second;
    to_s_hour   = add_zero(hour);
    to_s_minute = add_zero(minute);
    to_s_second = add_zero(second);
    return to_s_hour + ":" + to_s_minute + ":" + to_s_second;
  }

  string add_zero(int time) {
    string to_s_time;
    if(time < 10) {
      string times = to_string(time);
      return to_s_time = "0" + times;
    } else {
      return to_s_time = to_string(time);
    }
  }

  void shift(int diff_second) {
    int prepara_second = (hour * 3600) + (minute * 60) + second;
    int result_second;
    if(diff_second > 0) {
      int all_second = (hour * 3600) + (minute * 60) + second + diff_second;

      if(all_second / 3600 >= 24) { // 秒→時換算 
        hour = 0;
        result_second = all_second - (all_second / 3600);
      } else {
        hour = all_second / 3600;
      }

      if((all_second - (hour * 3600)) / 60 > 59) { // 秒→分換算
        minute = 0;
      } else {
        minute = (all_second - (hour * 3600)) / 60;
      }

      if((all_second - (hour * 3600) - (minute * 60)) > 59) {
        second = 0;
      } else {
        second = (all_second - (hour * 3600) - (minute * 60));
      }
    } else {

    }

  }
};

// -------------------
// ここから先は変更しない
// -------------------

int main() {
  // 入力を受け取る
  int hour, minute, second;
  cin >> hour >> minute >> second;
  int diff_second;
  cin >> diff_second;

  // Clock構造体のオブジェクトを宣言
  Clock clock;

  // set関数を呼び出して時刻を設定する
  clock.set(hour, minute, second);

  // 時刻を出力
  cout << clock.to_str() << endl;

  // 時計を進める(戻す)
  clock.shift(diff_second);

  // 変更後の時刻を出力
  cout << clock.to_str() << endl;
}
