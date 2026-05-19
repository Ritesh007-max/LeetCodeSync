class Solution {
public:
    vector < int >  searchRange ( vector < int > &  nums ,  int  target ) {
        int  start =  0 , end =  nums . size () -  1 , upper = - 1 , lower =  - 1 ;
        vector< int > result;
        
        while (start <= end) {
            int  mid = start + (end - start) /  2 ;
            if ( nums [mid] >= target) {  
                lower = mid;              
                end = mid -  1 ;
            }
            else  {
                start = mid + 1;          
            }
        }
        
        start = 0; 
        end = nums.size() - 1;
        
        while (start <= end) {
            int  mid = start + (end - start) /  2 ;
            if ( nums [mid] > target) {
                upper = mid;
                end = mid -  1 ;
            }
            else  {
                start = mid +  1 ;        
            }
        }
        
        if (lower == -1 || nums[lower] != target) {
            return {-1, -1};
        }
        
        int final_right = (upper == -1) ? nums.size() - 1 : upper - 1;
        
        return {lower, final_right};
    }
};