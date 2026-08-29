class Solution {
public:
    bool isPalindrome(int x) {
        long long y=x;
        if(x<0){
            return false;
        }
        long long a=0;
        while(x>0){
            long long b= x%10;
            a=(a*10)+b;
            x=x/10; 
        }
        return y==a;
    }
};