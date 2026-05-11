class Solution {
public:
    void create(int ind, int k , int target, vector<int>&arr,vector<int>&temp,vector<vector<int>>&ans){
        if(temp.size()==k && target==0){
            ans.push_back(temp);
            return ;
        }
        if(temp.size()==k && target!=0){
            return ;
        }

       if (ind >= arr.size()) return;
        
        temp.push_back(arr[ind]);
        create(ind+1, k, target-arr[ind],arr,temp,ans);
        temp.pop_back();
        create(ind+1, k, target,arr,temp,ans);

    }
    vector<vector<int>> combinationSum3(int k, int n) {

        vector<vector<int>>ans;
        vector<int>temp;
        vector<int> arr;
        for(int i = 1; i <= 9; i++){
           arr.push_back(i);
        }
        create(0,k,n,arr,temp,ans);
        return ans;
        
    }
};