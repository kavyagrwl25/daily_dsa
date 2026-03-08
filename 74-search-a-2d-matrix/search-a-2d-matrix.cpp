class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    if(m == 0) return false;
    int n = matrix[0].size();
    
    int left = 0;
    int right = m * n - 1;
    
    while(left <= right){
        int mid = left + (right - left) / 2;
        int val = matrix[mid / n][mid % n]; // convert 1D index to 2D
        if(val == target) return true;
        else if(val < target) left = mid + 1;
        else right = mid - 1;
    }
    
    return false;
}
};