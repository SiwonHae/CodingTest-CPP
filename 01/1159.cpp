#include <bits/stdc++.h>
using namespace std;
int N;
int cnt[26];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  bool isGo = false;
  
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    cnt[s[0] - 'a']++;
  }

  for (int i = 0; i < 26; i++) {
    if (cnt[i] >= 5) {
      cout << char(i + 'a');
      isGo = true;
    }
  }

  if (isGo == false) {
    cout << "PREDAJA";
  }

  return 0;
};