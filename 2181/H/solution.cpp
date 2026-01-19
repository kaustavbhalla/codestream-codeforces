#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  long long w, h, d;
  cin >> w >> h >> d;

  long long n;
  cin >> n;

  for (long long ijk = 1; ijk * ijk * ijk <= n; ijk++) {
    if (n % ijk != 0)
      continue;
    long long jk = n / ijk;

    for (long long j = 1; j * j <= jk; j++) {
      if (jk % j != 0)
        continue;
      long long k = jk / j;

      if ((w % ijk == 0) && (h % j == 0) && (d % k == 0)) {
        cout << ijk - 1 << " " << j - 1 << " " << k - 1 << "\n";
        return 0;
      }

      if ((w % ijk == 0) && (h % k == 0) && (d % j == 0)) {
        cout << ijk - 1 << " " << k - 1 << " " << j - 1 << "\n";
        return 0;
      }
    }
  }

  cout << -1 << "\n";
  return 0;
}
