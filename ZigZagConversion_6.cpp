class Solution {
public:
    string convert(string s, int nRows) {
        if (nRows <= 1 || s.size() <= 1) return s;
        string constr;
        int spam = nRows * 2 - 2;//确定两完整列的间隔
        int spam1 = 0;
        int spam2 = 0;
        int j = 0;
        for(int i = 0; i < nRows; i++)
        {
            spam1 = spam - i * 2;
            spam2 = spam -spam1;
            j = i;
            while(j <s.size())
            {
                constr.push_back(s[j]);
                if(spam1 % spam == 0)
                {
                    j += spam;
                }
                else
                {
                    j += spam1;
                    if(j < s.size())
                    {
                        constr.push_back(s[j]);
                        j += spam2;
                    }
                    else
                        break;
                }
            }
        }
        return constr;
    }
};