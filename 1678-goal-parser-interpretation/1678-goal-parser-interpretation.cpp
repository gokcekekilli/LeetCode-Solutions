class Solution {
public:
    string interpret(string command) {
        string s = "";
        for (int i=0;i<command.size();i++) {
            if (command[i] == '(' && command[i+1] == ')') {
                s+='o';
                i++;
            }
            else if (command[i] == '(' || command[i] == ')') {
                continue;
            }
            else {
                s+=command[i];
            }
            
        }
        return s;
        
    }
};