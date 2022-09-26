#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {

        int n = names.size();

        vector<pair<int, string>> data(n);
        for(int i = 0; i < n; i ++) data[i] = {heights[i], names[i]};
        sort(data.begin(), data.end(), greater<pair<int, string>>());

        vector<string> res(n);
        for(int i = 0; i < n; i ++) res[i] = data[i].second;
        return res;
    }
};

int main() {

    return 0;
}
