class Solution {
    
private:
    vector<string> result;
    string left="(";
    string right=")";
    int mm;
public:
    vector<string> generateParenthesis(int n) {
        mm=n;
        int count_left=0;
        int count_right=0;
        int move_remain=2*n;
        step_pare("", count_left, count_right, move_remain);
        
        return result;
    }
    
    void step_pare(string prev_str, int count_left, int count_right, int move_remain){
        
        if(move_remain>0){
            if(count_left>count_right){
                if(count_left<mm){
                    step_pare(prev_str+left, (count_left+1), count_right, (move_remain-1));
                    step_pare(prev_str+right, count_left, (count_right+1), (move_remain-1));                    
                }
                else{
                    step_pare(prev_str+right, count_left, (count_right+1), (move_remain-1)); 
                }
            }
            else if(count_left==count_right){
                step_pare(prev_str+left, (count_left+1), count_right, (move_remain-1));
            }
        }
        else{
            result.push_back(prev_str);
        }
        
        
    }
    
};





