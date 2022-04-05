// Simple Two Pointer Approach

class Solution {
public:
    int maxArea(vector<int>& height) {
        /*
        
        This was increasing the time complexity
        
        int water = 0;  // this will store our answer
        int i=0;
        int j= height.size() - 1;
        while(i<j){
            int h = min(height[i],height[j]);
            water = max(water, (j-i)*h);
            while(height[i]<=h && i<j) i++;
            while(height[i]<=h && i<j) j--;
        }
        return water;
        */
      
      // Second Approach 
      
        int j=height.size()-1,i=0,mx=0;
        
        while(i<j)
        {
            mx=max(mx,((j-i)*(min(height[i],height[j]))));
            
            if(height[i]<height[j])
             i++;
             else if(height[i]>=height[j])
             j--;
        }
        return mx;
    }
};
