#include <bits/stdc++.h>
using namespace std;
int n, t;
string cName, cKind;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> t;

  for (int i = 0; i < t; i++) {
    map<string, int> m;
    cin >> n; 
    for (int j = 0; j < n; j++) {
      cin >> cName >> cKind;
      m[cKind]++;
    }

    long long ret = 1; // 경우의 수는 long long으로 선언.
    for (auto c : m) {
      ret *= ((long long)c.second + 1);
    }
    ret--;

    cout << ret << "\n";
  }

  return 0;
};