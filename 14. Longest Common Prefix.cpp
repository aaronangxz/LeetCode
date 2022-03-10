class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int min = strs[0].size();
        int count = 0;
        
       for (int i = 1; i < strs.size();i++){
           for(int j = 0; j < strs[i].size();j++){
               if ((strs[i][j] == strs[0][j]) && (j < strs[0].size())){
                   count++;
                   cout << "common " << strs[0][j] << endl;
                   cout << "min: " << min << endl;
                   cout << "count: " << count << endl;
               }else{
                   break;
               }
           }
           if (count < min) min = count;
           count = 0;
       }
        
        string common = "";
        for (int i = 0; i < min; i++){
            common += strs[0][i];
        }
    return common;
    }
};
