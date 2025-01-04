class Solution {
private:
    int smoothen(vector<vector<int>>&img,int x,int y){
        int n=img.size();
        int m=img[0].size();
        int count=0;
        int sum=0;
        for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                int new_x=x+i;
                int new_y=y+j;
                if(new_x>=0 && new_x<n && new_y>=0 && new_y<m){
                    sum+=img[new_x][new_y];
                    count++;
                }
            }
        }
        return sum/count;
    }
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[i][j]+=smoothen(img,i,j);
            }
        }
        return v;
    }
};
