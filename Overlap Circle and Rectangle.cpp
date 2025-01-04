class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        for(long long i=x1;i<=x2;i++){
            for(long long j=y1;j<=y2;j++){
                long long d=(xCenter-i)*(xCenter-i)+(yCenter-j)*(yCenter-j);
                if(d<=radius*radius){
                    return true;
                }
            }
        }
        return false;
    }
};
