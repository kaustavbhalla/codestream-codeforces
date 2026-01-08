#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end(), greater<int>());
  int sumG = 0;
  int totalSum = 0;

  for (int i : a) {
    totalSum += i;
  }
  int sumS = 0;

  for (int i = 0; i < n; i++) {
    sumG += a[i];
    sumS = totalSum - sumG;

    if (sumG > sumS) {
      cout << i + 1 << "\n";
      break;
    } else {
      continue;
    }
  }
}
