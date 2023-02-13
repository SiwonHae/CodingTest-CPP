#include <bits/stdc++.h>
using namespace std;
int ret[26];
string s;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;

  for (char c : s) {
    ret[c - 'a']++;
  }

  for (int i : ret) {
    cout << i << " ";
  }


  return 0;
};