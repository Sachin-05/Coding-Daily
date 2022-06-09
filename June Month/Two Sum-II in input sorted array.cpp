// concept binary search se ho jaega kyun ki targeted value de rakhi hai
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int lo = 0;
        int hi = numbers.size()-1;
        while(lo < hi){
            if((numbers[lo] + numbers[hi])==target){
                return {lo+1, hi +1};
            }else if((numbers[lo]+numbers[hi]) > target){
                hi--;
            }else{
                lo++;
            }
        } 
       return {}; 
    }
};
