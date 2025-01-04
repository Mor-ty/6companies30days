class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(i);
        }
        int curr=0;
        while(v.size()>1){
            int num=(curr+k-1)%v.size();
            v.erase(v.begin()+num);
            curr=num;
            
        }
        return v[0];
    }
    
};
