#include <iostream>
#include <map>
#include <queue>
using namespace std;

string solution(string senate) {
    queue<char> q;
    map<char, int> ban = {{'R', 0}, {'D', 0}};
    map<char, int> sn = {{'R', 0}, {'D', 0}};
    for (int i = 0; i < senate.length(); i++) {
        if (ban[senate[i]] > 0) {
            ban[senate[i]]--;
            continue;
        }
        sn[senate[i]]++;
        senate[i] == 'R' ? ban['D']++ : ban['R']++;
        q.push(senate[i]);
    }

    while (sn['R'] > 0 && sn['D'] > 0 && !q.empty()) {
        if (ban[q.front()] > 0) {
            ban[q.front()]--;
            sn[q.front()]--;
            q.pop();
            continue;
        }
        q.push(q.front());
        q.front() == 'R' ? ban['D']++ : ban['R']++;
        q.pop();
    }

    if (sn['R'] <= 0)
        return "Dire";
    return "Radiant";
}

int main() {
    std::string senate = "RD";
    std::string res = solution(senate);
    std::cout << "result: " << res << "\n";
    return 0;
}
