class Solution{
    public:
    long long power(int N,int R,int P=1e9+7)
    {
       if(N==0)
       return 0;
       if(R==0)
       return 1;
       long long y;
       if(R%2==0)
       {
           y=power(N,R/2,P);
           y=(y*y)%P;
       }
       else
       {
           y=N%P;
           y=y*(power(N,R-1,P)%P)%P;
       }
       return (y+P)%P;  
    }
};
