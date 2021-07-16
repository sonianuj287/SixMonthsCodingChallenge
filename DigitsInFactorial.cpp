class Solution{
    public:
    int digitsInFactorial(int N)
    {
        if(N < 0)
            return 0;
        if(N <= 1)
            return 1;
            
        double digit = 0;
        for(int i=2;i<=N;i++){
            digit += log10(i);
        }
        return floor(digit) + 1;
    }
};
