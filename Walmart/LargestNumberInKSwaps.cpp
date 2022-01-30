class Solution
{
    public:
    //Function to find the largest number after k swaps.
  void findmax(string str, int k,string& max, int ctr)
{
    if (k == 0)
        return;

    int n = str.length();

    char maxm = str[ctr];
    for (int j = ctr + 1; j < n; j++) {
     
        if (maxm < str[j])
            maxm = str[j];
    }

    if (maxm != str[ctr])
        --k;
    for (int j = n-1; j >=ctr; j--) {
        if (str[j] == maxm) {
            swap(str[ctr], str[j]);

            if (str.compare(max) > 0)
                max = str;
            findmax(str, k, max, ctr + 1);

            swap(str[ctr], str[j]);
        }
    }
}
    string findMaximumNum(string str, int k)
    {
       // code here.
       string maxi=str;
       findmax(str,k,maxi,0);
       return maxi;
    }
};
