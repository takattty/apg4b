#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, average, sum=0;
  cin >> N;
  vector<int> score(N);

  for(int i=0; i<N; i++) {
    cin >> score.at(i);
  }

  for(int i=0; i<N; i++) {
    sum += score.at(i);
  }

  average = sum / N;
  for(int i=0; i<N; i++) {
    cout << abs(average - score.at(i)) << endl;
    // ここ追記
    // if(score.at(i) > average) {
    //   cout << score.at(i) - average << endl;;
    // } else {
    //   cout << average - score.at(i) << endl;
    // }
  }
}