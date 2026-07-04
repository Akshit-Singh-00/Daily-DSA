class Solution {
public:
    bool isPalindrome(int x) {
       int num=x;
       long s=0;
       while(x>0){
        s=s*10+(x%10);
        x=x/10;
       } 
       return s==num;
    }
};