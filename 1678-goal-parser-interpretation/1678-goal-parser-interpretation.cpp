class Solution {
public:
    string interpret(string command) {
        string ret;
        int len = command.size();
        
        for(int i = 0; i < len; i++) {
            if(command[i] == 'G') {
                ret += 'G';
            }
            else if(command[i] == '(' and command[i+1] == ')') {
                ret += 'o';
            }
            else if(command[i] == '(' and command[i+1] == 'a') {
                ret += "al";
            }
        }
        return ret;
    }
};