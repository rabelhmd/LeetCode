class Solution {
public:
    string interpret(string command) {
        string ret;
        int len = command.size();
        
        for(int i = 0; i < len;) {
            if(command[i] == 'G') {
                ret += 'G'; i += 1;
            }
            else if(command[i] == '(' and command[i+1] == ')') {
                ret += 'o'; i += 2;
            }
            else if(command[i] == '(' and command[i+1] == 'a') {
                ret += "al"; i += 4;
            }
        }
        return ret;
    }
};