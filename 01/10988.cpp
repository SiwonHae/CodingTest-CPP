#include <bits/stdc++.h>
using namespace std;

string s;
int a[26];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;

  for (int i = 0; i < s.length() / 2; i++) {
    if (s[i] - s[s.length() - i - 1] != 0) {
      cout << "0";
      exit(0);
    }
  }

  cout << "1";

  return 0;
};