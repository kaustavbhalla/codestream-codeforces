#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  set<char> setS;

  for (char c : s) {
    setS.emplace(c);
  }

  if (setS.size() % 2 == 0) {
    cout << "CHAT WITH HER!" << "\n";
  } else {
    cout << "IGNORE HIM!" << "\n";
  }
}
