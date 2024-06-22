//given a range of integers determine how many numbers have no repeating digits, write into the function void countNumbers(vector<vector<int>> arr)

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_set>
using namespace std;

    void countNumbers(vector<vector<int>> arr) {
        for (int i = 0; i < arr.size(); i++) {
            int count = 0;
            for (int j = arr[i][0]; j <= arr[i][1]; j++) {
                string s = to_string(j);
                unordered_set<char> set;
                for (int k = 0; k < s.size(); k++) {
                    set.insert(s[k]);
                }
                if (set.size() == s.size()) {
                    count++;
                }
            }
            cout << count << endl;
        }
    }

