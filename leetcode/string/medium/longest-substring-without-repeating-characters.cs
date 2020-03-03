public class Solution {
    public int LengthOfLongestSubstring1(string s) {
        int i = 0;
        int j = 0;
        int ans = 0;
        int n = s.Length;
        HashSet<int> h = new HashSet<int>();
        while(i < n && j < n){
            if(h.Contains(s[j])){
                h.Remove(s[i++]);
            }
            else{
                h.Add(s[j++]);
                ans = Math.Max(ans, j - i);
            }
        }
        return ans;
    }
    
    public int LengthOfLongestSubstring2(string s) {
        int ans = 0;
        int n = s.Length;
        Dictionary<char, int> h = new Dictionary<char, int>();
        for(int i=0,j=0;j<n;j++){
            if(h.ContainsKey(s[j])){
                i = max(i, h[s[j]]);
            }
            ans = max(ans, j-i+1);
            d[s[j]] = j + 1;
        }
        return ans;
    }
}