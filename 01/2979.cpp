#include <bits/stdc++.h>
using namespace std;

int A, B, C;
int cnt[102];
int ret;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> A >> B >> C;

  for (int i = 0; i < 3; i++) {
    int a, b;
    cin >> a >> b;
    for (int j = a; j < b; j++) { // 범위 주의 (a 이상, b 미만)
      cnt[j]++;
    }
  }
  

  for (int i = 1; i < 100; i++) {
    if (cnt[i]) {
      if (cnt[i] == 1) {
        ret += A;
      } else if (cnt[i] == 2) {
        ret += 2 * B;
      } else if (cnt[i] == 3) {
        ret += 3 * C;
      }
    }
  }

  cout << ret;

  return 0;
};