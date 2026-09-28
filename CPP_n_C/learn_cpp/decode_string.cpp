#include <cctype>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

string solution(string s) {
  string res{};
  stack<char> st;
  for (int i = 0; i < s.length(); i++) {
    st.push(s[i]);
    if (st.top() == ']') {
      st.pop();
      string subpart{};
      string kstr{};
      while (st.top() != '[') {
        subpart = st.top() + subpart;
        st.pop();
      }
      st.pop(); // pop the [
      while (!st.empty() && isdigit(st.top())) {
        kstr = st.top() + kstr;
        st.pop();
      }
      int k = stoi(kstr);
      for (int i = 0; i < k; i++) {
        for (int j = 0; j < subpart.length(); j++) {
          st.push(subpart[j]);
        }
      }
    }
  }

  unsigned long n{st.size()};
  res.resize(n);
  for (int i = n - 1; i >= 0; i--) {
    res[i] = st.top();
    st.pop();
  }

  return res;
}

int main() {
  string s{"3[a]10[b3[c]]"};
  string res = solution(s);

  cout << "the true string is " << res << "\n";
  return 0;
}
