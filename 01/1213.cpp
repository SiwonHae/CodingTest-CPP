#include <bits/stdc++.h>
using namespace std;
string s, ret;
int a[26];
int flag;
string even, odd;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    a[s[i] - 'A']++;
  }
  

  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < a[i] / 2; j++) {
      even += i + 'A';
    }
  }
  for (int i = 0; i < 26; i++) {
    if (a[i] % 2 == 1) {
      odd += i + 'A';
      flag++;
    }
  }

  ret = even + odd;
  reverse(even.begin(), even.end());
  ret += even;

  if (flag >= 2) {
    cout << "I'm Sorry Hansoo";
  } else {
    cout << ret;
  }

  return 0;
};