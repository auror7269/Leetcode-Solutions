class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowers, int n) {
        for(int i=0;i<flowers.size();i++){
            if((flowers[i]==0) &&(i==0||flowers[i-1]==0)&& (i==flowers.size()-1 ||
            flowers[i+1]==0)){
                flowers[i]=1;
                n--;
            }
        }
        if(n>0) return false;

        return true;
    }
};