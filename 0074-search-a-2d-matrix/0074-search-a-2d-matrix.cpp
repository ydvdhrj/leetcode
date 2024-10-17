class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int l=0,r=matrix.size()-1;
        // int row=-1;
        // while(l<=r){
        //     int m = l+(r-l)/2;
        //     if(target==matrix[m][0]) return true;
        //     else if(target>matrix[m][0]){
        //         if(target<=matrix[m][matrix[m].size()-1]){
        //             row=m;
        //             break;
        //         }
        //         else{
        //             l=m+1;
        //         }
        //     }
        //     else{
        //         if(m-1>=0 && target>matrix[m-1][0]){
        //             row=m-1;
        //             break;
        //         }
        //         else{
        //             r=m-1;
        //         }
        //     }
        // }
        // if(row!=-1){
        //     int a=0,b=matrix[row].size()-1;
        //     while(a<=b){
        //         int c = a+(b-a)/2;
        //         if(target==matrix[row][c]) return true;
        //         else if(target>matrix[row][c]) a=c+1;
        //         else b=c-1;
        //     }
        // }
        // return false;


        //another better approach with same time complexities --->using a 2D array as 1D array without converting it
        int n = matrix.size();
        int m = matrix[0].size();
        int low=0;
        int high = n*m-1;
        while(low<=high){
            int mid = (low+high)/2;
            int row = mid/m;
            int col = mid%m;
            if(target==matrix[row][col]) return true;
            else if(target>matrix[row][col]) low = mid+1;
            else high = mid-1;
        }
        return false;

            
        
        
    }
};