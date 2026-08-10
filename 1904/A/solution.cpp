#include <bits/stdc++.h>
#include <utility>
using namespace std;

int countCommonPairsSpaceOptimized(std::vector<std::pair<int, int>> &v1,
                                   std::vector<std::pair<int, int>> &v2) {
  // Sorts lexicographically automatically
  std::sort(v1.begin(), v1.end());
  std::sort(v2.begin(), v2.end());

  int i = 0, j = 0, commonCount = 0;

  while (i < v1.size() && j < v2.size()) {
    if (v1[i] == v2[j]) {
      commonCount++;
      auto current = v1[i];

      // Skip duplicates in both vectors
      while (i < v1.size() && v1[i] == current)
        i++;
      while (j < v2.size() && v2[j] == current)
        j++;

    } else if (v1[i] < v2[j]) {
      i++;
    } else {
      j++;
    }
  }

  return commonCount;
}

void solve() {
  int a, b;
  cin >> a >> b;

  int xK, yK;
  cin >> xK >> yK;

  int xQ, yQ;
  cin >> xQ >> yQ;

  vector<pair<int, int>> kingProb;
  vector<pair<int, int>> queenProb;

  kingProb.emplace_back(make_pair(xK + a, yK + b));
  kingProb.emplace_back(make_pair(xK + a, yK - b));
  kingProb.emplace_back(make_pair(xK - a, yK + b));
  kingProb.emplace_back(make_pair(xK - a, yK - b));
  kingProb.emplace_back(make_pair(xK - b, yK + a));
  kingProb.emplace_back(make_pair(xK + b, yK + a));
  kingProb.emplace_back(make_pair(xK - b, yK - a));
  kingProb.emplace_back(make_pair(xK + b, yK - a));

  queenProb.emplace_back(make_pair(xQ + a, yQ + b));
  queenProb.emplace_back(make_pair(xQ + a, yQ - b));
  queenProb.emplace_back(make_pair(xQ - a, yQ + b));
  queenProb.emplace_back(make_pair(xQ - a, yQ - b));
  queenProb.emplace_back(make_pair(xQ - b, yQ + a));
  queenProb.emplace_back(make_pair(xQ + b, yQ + a));
  queenProb.emplace_back(make_pair(xQ - b, yQ - a));
  queenProb.emplace_back(make_pair(xQ + b, yQ - a));

  int ret = countCommonPairsSpaceOptimized(kingProb, queenProb);
  cout << ret << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
