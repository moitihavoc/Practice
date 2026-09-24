#include <iostream>
#include <map>
#include <vector>
using namespace std;

int equalPairs(vector<vector<int>> &grid) {
    // return the number of equal row and column
    int count{0};

    for (int i = 0; i < grid.size(); i++) {     // for each row
        for (int j = 0; j < grid.size(); j++) { // for each item in a column
            bool isequal = true;
            for (int c = 0; c < grid.size(); c++) {
                if (grid[i][c] != grid[c][j])
                    isequal = false;
            }
            if (isequal)
                count++;
        }
    }

    return count;
}

int betterSol(vector<vector<int>> &grid) {
    int ans{0};
    map<vector<int>, int> mp;

    for (int i = 0; i < grid.size(); i++) {
        mp[grid[i]]++;
    }

    for (int i = 0; i < grid.size(); i++) {
        vector<int> v;

        for (int j = 0; j < grid.size(); j++) {
            v.push_back(grid[j][i]);
        }
        ans += mp[v];
    }

    return ans;
}
int main(void) {
    vector<vector<int>> grid = {{3, 1, 2, 2}, {1, 4, 4, 5}, {2, 4, 2, 2}, {2, 4, 2, 2}};
    int res = betterSol(grid);
    std::cout << "there are " << res << " equal pairs in the grid" << "\n";
}
