#include <bits/stdc++.h>
using namespace std;

string s;
string tempStr;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> s;
  tempStr = s;

  reverse(tempStr.begin(), tempStr.end());
  
  if (tempStr == s) {
    cout << "1";
  } else {
    cout << "0";
  }

  return 0;
};