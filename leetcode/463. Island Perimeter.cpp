class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int per = 0, i = 0, j = 0;
        int r = grid.size();
        int c = grid[0].size();
        int arr[r+1][c];
        int arc[r][c+1];
        memset(arr,0,sizeof(arr));
        memset(arc,0,sizeof(arc));
        for(i = 0;i<r;i++){
            for(j=0;j<c;j++){
                if(grid[i][j]){
                    per += 4;
                    
                    if(arr[i][j]) per-=2;
                    else arr[i][j] = 1;
                    
                    if(arr[i+1][j]) per-=2;
                    else arr[i+1][j] = 1;
                    
                    if(arc[i][j]) per-=2;
                    else arc[i][j] = 1;
                    
                    if(arc[i][j+1]) per-=2;
                    else arc[i][j+1] = 1;
                }
            }
        }
        return per;
    }
};
