class Solution {
public:
    bool isPalindrome(int x) {
    long int rev=0,lastdigit;
    long int n=x;
    while(x>0){
        lastdigit=x%10;
         rev=lastdigit+rev*10;
        x=x/10;
        }
    if(n==rev)
        return true;
    else
        return false ;
    }
};