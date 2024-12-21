class Solution {
  public:
    int gcd(int a, int b) {
     int i=0,r;
     while(b){
        r=a%b;
        a=b;b=r;i++;
     }
     return a;
    }
};