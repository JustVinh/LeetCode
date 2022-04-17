class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        
        int start = 0;
        int finish = n-1;
        int maxarea =0;
        
        for(int i = 0; i<= n-2; i++){
            int area = (finish - start)*(min(height[start], height[finish]));
            maxarea = max(maxarea, area);
            if(height[start] > height[finish]){
                finish--;
            }
            else{
                start++;
            }
        }
        return maxarea;
        }
};