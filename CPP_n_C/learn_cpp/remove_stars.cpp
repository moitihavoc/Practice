#include <cstring>
#include <iostream>
#include <stack>
using namespace std;

void printStack(stack<char> st);

string removeStars(string s) {
    stack<char> st;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '*' && !st.empty() && st.top() != '*') {
            st.pop();
        } else if (s[i] != '*')
            st.push(s[i]);
    }

    string res;
    res.resize(st.size());

    for (int i = res.size() - 1; i >= 0; i--) {
        res[i] = st.top(); // build the string from the bottom up since stack
        st.pop();
    }

    return res;
}

string betterSol(string s) {
    // modify the string in place instead of creating a new string
    int j = 0; // anchor point to the result string

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '*')
            j--;
        else
            s[j++] = s[i];
    }

    return s.substr(0, j);
}

void printStack(stack<char> st) {
    while (!st.empty()) {
        cout << st.top() << "\n";
        st.pop();
    }
}

int main() {
    string s{"erase*****"};
    string r = removeStars(s);

    cout << "The result is " << r << "\n";
}
