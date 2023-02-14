#include <bits/stdc++.h>
using namespace std;
int N;
string pattern;
string s;

vector<string> split(string input, string delimeter)
{
  vector<string> ret;
  long long pos = 0;
  string token = ""; // 임시로 문자열 저장하기 위함.

  while ((pos = input.find(delimeter)) != string::npos)
  {
    token = input.substr(0, pos);
    ret.push_back(token);
    input.erase(0, pos + delimeter.length());
  }
  ret.push_back(input);

  return ret;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N;
  cin >> pattern;

  string delimiter = "*";

    // * 기준으로 앞의 문자열 동일 && 뒤의 문자열이 동일
    // split 사용

  vector<string> result = split(pattern, delimiter);
  string pFirst = result[0];
  string pLast = result[1];

  for (int i = 0; i < N; i++) {
    bool isEqual = true;

    cin >> s;

    for (int j = 0; j < pFirst.length(); j++) {
      if (s[j] != pFirst[j]) {
        isEqual = false;
        break;
      }
    }

    char tempStr[102] = {};
    for (int k = 0; k < pLast.length(); k++) {
      tempStr[k] = s[s.length() - 1 - k];
    }
    reverse(tempStr, tempStr + pLast.length());
    
    for (int j = 0; j < pLast.length(); j++) {
      if (tempStr[j] != pLast[j]) {
        isEqual = false;
        break;
      }
    }

    // 아래 코드가 매우 중요함. 반례
    if (pFirst.length() + pLast.length() > s.length()) {
      isEqual = false;
    }

    if (isEqual) {
      cout << "DA" << "\n";
    } else {
      cout << "NE" << "\n";
    }

  }

  return 0;
};