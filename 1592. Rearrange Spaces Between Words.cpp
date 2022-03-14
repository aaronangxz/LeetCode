class Solution {
public:
    string reorderSpaces(string text) {
        int spaceCount = 0;
        string word = "";
        vector<string> words;
        
        for(int i = 0; i < text.size(); i++){
            if(text[i] == ' '){
                spaceCount ++;
                if(!word.empty()){
                    words.push_back(word);
                    word.clear();
                    continue;
                } 
            } 
            else word += text[i];
            
            if(i == text.size() -1 && !word.empty()) words.push_back(word);              
        }
        
        int each, rem;
        if(spaceCount == 0) return text;
        if(words.size()- 1 != 0){
            each = spaceCount/(words.size()-1);
            rem = spaceCount%(words.size()-1);
        }else{
            rem = spaceCount;
        }
        
        string out;
        for(int i = 0; i < words.size(); i++){
            out += words[i];
            if (each != 0 && i != words.size() - 1){
                for(int j = 1; j <= each; j++){
                    out += " ";
                } 
            }
        }
        
        if(rem != 0){
            while(rem > 0){
                out += " ";
                rem--;
            }
        }
        return out;
    }
};