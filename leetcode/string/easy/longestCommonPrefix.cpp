class Solution {
public:
    string longestCommonPrefixHS(vector<string>& strs) {
        if(strs.length() == 0 || strs == NULL){
            return "";
        }
        int n = strs.size();
        string prefix = strs[0];
        for(int i=1;i<n;i++){
            while(strs[i].find(prefix) != 0){
                prefix = substr(prefix, 0, prefix.length() - 1);
                if(prefix.isEmpty()){
                    return "";
                }
            }
        }

        return prefix;
    }
    int minLength(vector<string> strs){
        int min_l = strs[0].length();
        for(int i = 1;i<strs.size();i++){
            if(strs[i].length() < min_l){
                min_l = strs[i].length()
            }
        }
        return min_l;
    }
    string longestCommonPrefixBrute(vector<string>& strs) {
        int minLen = minLength(strs);
        int n = str.size();
        string result = "";
        for(int i=0;i<minLen;i++){
            char curr = strs[0][i];
            for(int j=1;j<n;j++){
                if(curr != strs[j][i]){
                    return result;
                }
            }
            result.push_back(curr);
        }
        return result;
    }
};
