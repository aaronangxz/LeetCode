class Solution {
public:
    bool isValid(string s) {
        if(s.size() == 1) return false;
        stack<char> par;
        
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){ 
                par.push(')');
            }else if(s[i] == '['){
                par.push(']');
            }else if( s[i] == '{'){
                par.push('}');
            }else{
                if(par.empty()) return false;
                if(s[i] == par.top()){
                    par.pop();
                    continue;
                }
                return false;
            }
        }
        
        if(!par.empty()) return false;
        return true;
    }
};