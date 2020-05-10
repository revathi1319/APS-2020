class Solution {
    public int balancedStringSplit(String s) {
        int c=0,fl=0;
        for(int i=0;i<s.length();i++)
        {
            if(s.charAt(i)=='R')
                fl++;
            else if(s.charAt(i)=='L')
                fl--;
            if(fl==0)
                c++;
        }
        return c;
    }
    
}
