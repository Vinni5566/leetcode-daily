//Problem Link: https://leetcode.com/problems/matrix-similarity-after-cyclic-shifts/?envType=daily-question&envId=2026-03-27

#include <vector>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {

        int m = mat.size();
        int n = mat[0].size();

        k %= n;

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                int new_idx;

                if(i % 2 == 0) {
                    // left shift
                    new_idx = (j + k) % n;
                } else {
                    // right shift
                    new_idx = (j - k + n) % n;
                }

                if(mat[i][j] != mat[i][new_idx]) {
                    return false;
                }
            }
        }

        return true;
    }
};