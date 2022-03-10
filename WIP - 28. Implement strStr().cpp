class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() == 0) return 0;
        if ( haystack.size() == needle.size() ){
        return (haystack == needle) ? 0 : -1;
        }
        
        for(int i = 0; i < haystack.size(); i++){
            for(int j = 0; j < needle.size();j++){
                
                if(haystack[i] == needle[j]){
                    if(j == needle.size() - 1){
                    cout << "match all i = " << i << " j = " << j << endl;
                    return i - j;
                }
                    cout << "match i = " << i << " j = " << j << endl;
                    i++;
                    continue;
                } else{
                    cout << "check next" << endl;
                    i = i - j;
                    break;
                }
                
            }
            
        }
        return -1;
    }
};