#include <bits/stdc++.h>
#define FastIO cin.tie(nullptr), ios_base::sync_with_stdio(false);
#define REP(i, start, end) for (int i = start; i < (int)(end); i++)
#define rep(i, n) REP(i, 0, n)
using namespace std;

bool is_vowel(char ch) {
  set<char> vowel{'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
  return vowel.find(ch) != vowel.end();
}

// Alice: loves a word ended in a vowel.
// Bob: loves ended in a Bobwel.
// nobody: loves 'y'
string GetRuler(const string& kingdom) {
  char lastword = kingdom.back();
  string ruler = "";

  if (lastword == 'y' || lastword == 'Y')
    ruler = "nobody";
  else if (is_vowel(lastword))
    ruler = "Alice";
  else
    ruler = "Bob";

  return ruler;
}

void solve(int testcase) {
  string kingdom;
  cin >> kingdom;

  cout << "Case #" << testcase << ": " << kingdom << " is ruled by "
       << GetRuler(kingdom) << ".\n";
}

int main() {
  FastIO;

  int tt;
  cin >> tt;
  rep(i, tt) solve(i + 1);
}
