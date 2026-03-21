//Problem link: https://leetcode.com/problems/flip-square-submatrix-vertically/submissions/1954622196/?envType=daily-question&envId=2026-03-21

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {

        int l = x;
        int h = x+k-1;

        while(l < h) {

            for(int i = y; i <= y+k-1; i++) {
                int temp = grid[l][i];
                grid[l][i] = grid[h][i];
                grid[h][i] = temp;
            }

            l++;
            h--;
        }

        return grid;
        
    }
};