#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> s(n);

  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }

  sort(s.begin(), s.end(), greater<int>());

  int sumG = 0;
  int totalSum = 0;

  for (int i = 0; i < n; i++) {
    totalSum += s[i];
  }

  for (int i = 0; i < n; i++) {
    sumG += s[i];
    int sumS = totalSum - sumG;

    if (sumG > sumS) {
      cout << i + 1 << "\n";
      break;
    } else {
      continue;
    }
  }
}
