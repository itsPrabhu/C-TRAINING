// User function Template for C
int countDigits(int n) {
      int count=0;
          while(n>0)
          {
              int d=n%10;
              n/=10;
           count+=1;
              
          }
          return count;
        
}
