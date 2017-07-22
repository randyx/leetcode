class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(int i = 0; i < s.length(); i++)
        {
            if(!stk.empty() && ( (s[i] == ']' && stk.top() == '[') || ( s[i] == ')' && stk.top() == '(' ) || ( s[i] == '}' && stk.top() == '{')))
                stk.pop();
            else
                stk.push(s[i]);
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
};