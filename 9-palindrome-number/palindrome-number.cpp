class Solution {
public:
    bool isPalindrome(int x) {
      
       long long org= x;
       int rem;
       long long red = 0;
       while(x>0){
        rem = x%10;
          red = red * 10 + rem;
        x/=10;
       
       }
        if(org == red){
            return true;
        }
        else{
            return false;
        }
    }
    
};