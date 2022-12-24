#include <bits/stdc++.h>
using namespace std;

enum class State {
  COMPLETE,
  INCOMPLETE,
  CORRUPTED,
};

bool is_open(char ch) {
  return ch == '(' || ch == '{' || ch == '[' || ch == '<';
}

bool is_match(char open, char close) {
  string pair = string(1, open) + string(1, close);
  return pair == "()" || pair == "{}" || pair == "[]" || pair == "<>";
}

State chunk_state(string chunk) {
  stack<char> st;

  for (const char &ch : chunk) {
    if (is_open(ch)) {
      st.push(ch);
      continue;
    }

    if (st.empty()) {
      return State::INCOMPLETE;
    }

    char open = st.top();
    st.pop();

    // when chunk is CORRUPTED, found no-match open, close tag.
    if (not is_match(open, ch)) {
      return State::CORRUPTED;
    }
  }

  if (st.empty())
    return State::COMPLETE;
  else
    return State::INCOMPLETE;
}

vector<string> get_incompletes() {
  vector<string> incs;
  string chunk;

  while (cin >> chunk) {
    State state = chunk_state(chunk);
    if (state == State::INCOMPLETE) {
      incs.emplace_back(chunk);
    }
  }

  return incs;
}

vector<char> get_required_char(string chunk) {
  stack<char> st;

  for (const auto &ch : chunk) {
    if (is_open(ch)) {
      st.push(ch);
      continue;
    }

    // something wrong with ?!
    if (st.empty()) {
      throw runtime_error("EMPTY D:");
    }

    char open = st.top();
    st.pop();

    if (not is_match(open, ch)) {
      throw runtime_error("EMPTY D:");
    }
  }

  // st.size() > 0
  auto get_close_pair = [](char ch) {
    if (ch == '(') return ')';
    if (ch == '{') return '}';
    if (ch == '[') return ']';
    if (ch == '<') return '>';
    return '?';
  };

  vector<char> res;

  while (not st.empty()) {
    char open = st.top();
    st.pop();

    res.emplace_back(get_close_pair(open));
  }

  return res;
}

long long int calc_score(const vector<char> &vc) {
  auto score = [](char ch) {
    if (ch == ')') return 1;
    if (ch == ']') return 2;
    if (ch == '}') return 3;
    if (ch == '>') return 4;
    return -99999;
  };

  long long int sum{0};
  for (const char &ch : vc) {
    sum *= 5;
    sum += score(ch);
  }

  return sum;
}

int main() {
  vector<string> incompletes = get_incompletes();

  vector<long long int> scores;
  for (const auto &chunk : incompletes) {
    scores.emplace_back(calc_score(get_required_char(chunk)));
  }

  sort(scores.begin(), scores.end(), greater<long long int>());

  cout << scores.at(scores.size() / 2) << '\n';
}
