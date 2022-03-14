class Solution {
public:
    string simplifyPath(string path) {
        stack<string> pathS;
        string curr;
        
        for(int i = 0; i < path.size(); i++){
            if(path[i] != '/'){
                curr += path[i];
            }else{
                if(curr.empty()) continue;
                if(curr == "."){
                    curr = "";
                    continue;
                }
                if(curr == ".."){
                    if(!pathS.empty()) pathS.pop();
                    curr = "";
                    continue;
                }
                pathS.push(curr);  
                curr = "";
            }
        }
        
        if(!curr.empty()){
            if(curr == ".."){
                if(!pathS.empty()) pathS.pop();
                curr = "";
            } else if (curr == "."){
                curr = "";
            }else{
                pathS.push(curr);  
                curr = "";  
            }
        }
        
        vector<string> out;
        string resp;
        if(pathS.empty()) return "/";

        while(!pathS.empty()){
            out.push_back(pathS.top());
            pathS.pop();
        }
        
        for(int i = out.size() - 1; i >= 0; i--){
            resp += "/" + out[i];
        }
        
        return resp;
    }
};