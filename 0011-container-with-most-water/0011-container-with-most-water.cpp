class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int front=0;
        int rear=n-1;
        int mx=0;
            while(front<=rear){
            int h = min(height[front],height[rear]);
            int area = (rear-front)*h;
            mx = max(mx,area);
            if(height[front]<height[rear]){
                front++;
            }
            else rear--;
        }
        return mx;
    }
};