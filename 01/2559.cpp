#include <bits/stdc++.h>
using namespace std;

int N, K;
int a[100002];
int pSum[100002];
int ret[100002];
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  // 아래의 배열 초기화가 매우 중요하다.
  // 2 2
  // -100 -100    입력 시에
  // 최댓값은 -200이 출력되어야 하나 전역변수로 선언되어 있어서
  // 최댓값으로 0이 출력되기 때문에 아래와 같이 범위를 지정해주어야 한다.
  // (문제에 "N은 2 이상 100,000 이하이다. // 모두 -100 이상 100 이하이다." 라는 조건을 이용)
  // ==> -100 * (10만) 
  fill(begin(ret), end(ret), -100 * 100000 - 4); 

  cin >> N >> K;
  for (int i = 1; i <= N; i++) {
    cin >> a[i];
  }

  for (int i = 1; i <= N; i++) {
    pSum[i] = pSum[i - 1] + a[i];
  }

  for (int i = 1; i <= N - K + 1; i++) {
    ret[i] = pSum[K - 1 + i] - pSum[i - 1];
  }

  int *max = max_element(begin(ret), end(ret));

  cout << *max;

  return 0;
};