class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int l=candies.size();
        vector<bool> result(l);
        for(int i=0;i<l;i++){
            bool flag=false;
            for(int j=0;j<l;j++){
                if(candies[i]+extraCandies<candies[j]){
                    flag=true;
                    break;
                }
            }
            if(flag){
                result.push_back(false);
            }
            else{
                result.push_back(true);
            }
        }
        return result;
    }
};