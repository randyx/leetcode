class Solution {
public:
	int titleToNumber(string s) {
		int retnum = 0;
		for (int i = 1; i <= s.size(); i++){
			retnum += (s[s.size() - i] - 64)*pow(26, i - 1);
		}
		return retnum;
	}
};