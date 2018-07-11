class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
        std::sort(nums.begin(),nums.end());        
        int result=nums[0]+nums[1]+nums[2];
        int min_diff=abs(target-result);

        int vec_leng=nums.size();
        for(int i=0; i<nums.size(); i++){
            if(i>0){
                if(nums[i]==nums[i-1]){
                    continue;
                }
            }
            int low_point=i+1;
            int high_point=vec_leng-1;
            while(low_point<high_point){
                int this_diff=target-nums[i]-nums[low_point]-nums[high_point];
                if(this_diff<0 && abs(this_diff)>min_diff){
                    high_point--;
                    continue;
                }
                else if(this_diff>0 && abs(this_diff)>min_diff){
                    low_point++;
                    continue;
                }
                else if(abs(this_diff)<=min_diff){
                    min_diff=abs(this_diff);
                    result=nums[i]+nums[low_point]+nums[high_point];
                    cout<<"this "<<nums[i]<<nums[low_point]<<nums[high_point];
                    if(this_diff<=0)high_point--;
                    else if(this_diff>=0)low_point++;
                    
                }
                
            }
        }
        
        return result;
    }
};
