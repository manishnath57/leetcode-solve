class Solution {
public:
    bool isPalindrome(int x) {
        long long y=x;
long long ans =0;
if (x<0)
return false;
           while(x>0){

            long long  k=x%10;

               ans =ans*10+k;
                 
                 x=x/10;

           }

           if(ans ==y){

            return true;
           }

           return false;
    }

};