#include <vector>
include <string>
include <iostream>
include <vector>
void main() {
    std::cout << valid_braces("(){}[]") << "\n";
}

bool valid_braces(const std::string &braces) {
    std::vector<char> b = {};
    for (char c: braces){
        if (b.size() == 0) b.push_back(c);
        else {
            for(int i = 0; i < b.size(); i++) {
                char bb{b[i]};
                int end = b.size();
                if (is_match(c, bb)){
                    char temp = bb;
                    b[i] = b[end];
                    b[end] = temp;
                    b.pop_back();
                    break;
                }

            }
        }
    }
    if (b.size() == 0) return true;
    return false;
}


bool is_match(char b1, char b2){
    if (b1 == '{' && b2 == '}'){
        return true;
    }
    else if (b1 == '(' && b2 == ')'){
        return true;
    }
    else if (b1 == '[' && b2 == ']') {
        return true;
    }
    return false;
}
