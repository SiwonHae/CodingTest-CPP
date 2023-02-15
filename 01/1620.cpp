#include <bits/stdc++.h>
using namespace std;
int N, M;
map<string, int> m;
map<int, string> m2;
string pQuestion;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;

  for (int i = 1; i <= N; i++) {
    string pName;;
    cin >> pName;
    m.insert({pName, i});
    m2.insert({i, pName});
  }

  for (int i = 0; i < M; i++) {
    cin >> pQuestion;

    if (atoi(pQuestion.c_str()) == 0) { // 문자열일 경우
      cout << m[pQuestion] << "\n";
    } else {
      cout << m2[atoi(pQuestion.c_str())] << "\n";
    }
  }

  return 0;
};