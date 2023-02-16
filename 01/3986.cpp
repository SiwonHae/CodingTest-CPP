#include <bits/stdc++.h>
using namespace std;
int N, ret;
string str;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  for (int i = 0; i < N; i++) {
    stack<char> s;
    cin >> str;

    for (int j = 0; j < str.length(); j++) {
      if (s.empty()) {
        s.push(str[j]);
      } else {
        if (s.top() == str[j]) {
          s.pop();
        } else {
          s.push(str[j]);
        }
      }
    }
    
    if (s.empty()) {
      ret++;
    }
  }

  cout << ret;

  return 0;
};