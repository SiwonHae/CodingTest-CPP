#include <bits/stdc++.h>
using namespace std;

string S;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  getline(cin, S);

  for (int i = 0; i < S.length(); i++) {
    if (((S[i] >= 'a') && (S[i] <='m')) || ((S[i] >= 'A') && (S[i] <='M'))) {
      S[i] += 13;
      continue;
    }
    if (((S[i] >= 'n') && (S[i] <='z')) || ((S[i] >= 'N') && (S[i] <='Z'))) {
      S[i] -= 13;
      continue;
    }
  }

  cout << S;

  return 0;
};