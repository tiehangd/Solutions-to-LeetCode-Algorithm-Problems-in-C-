class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> result;
        std::sort(nums.begin(),nums.end());
        int vec_leng=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(i>0){
                if(nums[i]==nums[i-1]){
                    continue;
                }
            }
            int target=-nums[i];
            int low_point=i+1;
            int high_point=vec_leng-1;
            while(low_point<high_point){
                
                if(nums[low_point]+nums[high_point]>target){
                    high_point--;
                }
                else if(nums[low_point]+nums[high_point]<target){
                    low_point++;
                }
                else {
                    if(high_point<vec_leng-1){
                        if(nums[high_point]==nums[high_point+1]){
                            high_point--;
                            continue;
                        }
                    }
                    else if(low_point>i+1){
                        if(nums[low_point]==nums[low_point-1]){
                            low_point++;
                            continue;
                        }
                    }
                    vector<int> tripet(3,0);
                    tripet[0]=nums[i]; //tripet.push_back(i);
                    tripet[1]=nums[low_point]; //tripet.push_back(low_point);
                    tripet[2]=nums[high_point]; //tripet.push_back(high_point);
                    result.push_back(tripet);
                    low_point++;
                    high_point--;
                }
                
            }
        }
        
        return result;
    }
};
