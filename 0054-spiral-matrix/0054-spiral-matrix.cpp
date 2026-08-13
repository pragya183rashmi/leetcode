class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int dir = 0;
        int top = 0;
        int down = m - 1;
        int left = 0;
        int right = n - 1;
        vector<int> ans;
        while (top <= down && left <= right) {
            if (dir == 0) { // left to right maens row constant
                for (int i = left; i <= right; i++) {
                    ans.push_back(matrix[top][i]);
                }
                    top++;
                }
                if (dir == 1) { // top to bottom
                    for (int i = top; i <= down; i++) {
                    ans.push_back(matrix[i][right]);
                    }
                    right--;
                }
                if (dir == 2) { // right to left
                    for (int i = right; i >= left; i--) {
                        ans.push_back(matrix[down][i]);
                    }
                    down--;
                }
                if (dir == 3) {
                    for (int i = down; i >= top; i--) {
                        ans.push_back(matrix[i][left]);
                        }
                        left++;
                    }
                    dir++;
                    if (dir == 4) {
                        dir = 0;
                    }
                }
            
                return ans;
            }
        
        };