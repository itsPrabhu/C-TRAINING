bool isPalindrome(int x) 
{
    int original;
    original=x;
    long long r=0,digit=0;
    if(x<0){
        return 0;
    }
    while(x>0){
     int digit=x%10;
     x/=10;
     r=(r*10)+digit;
   } 
  return original == r;
   }
