#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(i, n, s) for (int i = s; i < (int)(n); i++)
using namespace std;

enum class State {
  COMPLETE,
  INCOMPLETE,
  CORRUPTED,
};

int score(char ch) {
  if (ch == ')') return 3;
  if (ch == ']') return 57;
  if (ch == '}') return 1197;
  if (ch == '>') return 25137;
  return 0;
}

bool is_open_chunk(char ch) {
  return ch == '(' || ch == '[' || ch == '{' || ch == '<';
}

bool is_close_chunk(char ch) {
  return ch == ')' || ch == ']' || ch == '}' || ch == '>';
}

bool is_match_pair(char open, char close) {
  string pair = string(1, open) + string(1, close);
  return set<string>{"()", "{}", "[]", "<>"}.contains(pair);
}

State check_chunk_state(string chunk, char &illegal_ch) {
  stack<char> st;

  for (const char ch : chunk) {
    if (is_open_chunk(ch)) {
      st.push(ch);
      continue;
    }

    if (st.empty()) {
      return State::INCOMPLETE;
    }

    char open = st.top();
    st.pop();

    if (not is_match_pair(open, ch)) {
      illegal_ch = ch;
      return State::CORRUPTED;
    }
  }

  if (st.empty())
    return State::COMPLETE;
  else
    return State::INCOMPLETE;
}

int main() {
  string chunk;

  int total{0};

  while (cin >> chunk) {
    char illegal_ch{};
    State status = check_chunk_state(chunk, illegal_ch);

    if (status == State::CORRUPTED) {
      total += score(illegal_ch);
    } else if (status == State::INCOMPLETE) {
    } else {
    }
  }

  cout << total << '\n';
}
