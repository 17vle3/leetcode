class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> numtoindex;
        vector<int> output;
        
        for(int i =0;i<nums.size(); i++){
if(numtoindex.find(target-nums[i])!=numtoindex.end()){
    output.push_back(numtoindex[target-nums[i]]);
    output.push_back(i); 
    return output;
}
else{
numtoindex[nums[i]]=i;
}
        }
        return output;
    }
};
