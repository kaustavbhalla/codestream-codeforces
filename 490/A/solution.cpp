#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  vector<int> ones, twos, threes;

  for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;

    if (x == 1)
      ones.emplace_back(i);
    else if (x == 2)
      twos.emplace_back(i);
    else
      threes.emplace_back(i);
  }

  int w = min({ones.size(), twos.size(), threes.size()});
  cout << w << "\n";

  for (int i = 0; i < w; i++) {
    cout << ones[i] << " " << twos[i] << " " << threes[i] << "\n";
  }
}
