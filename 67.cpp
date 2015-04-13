class Solution {
public:
    string addBinary(string a, string b) {
        string c="";
        int carry=0;
        int alen=a.size();
        int blen=b.size();
        while(alen>0 && blen>0){
            c=char((a[alen-1]-2*'0'+b[blen-1]+carry)%2+'0')+c;
            carry=(a[alen-1]-2*'0'+b[blen-1]+carry)/2;
            alen--;
            blen--;
        }
        while(blen>0){
            c=char((b[blen-1]-'0'+carry)%2+'0')+c;
            carry=(b[blen-1]-'0'+carry)/2;
            blen--;
        }
        while(alen>0){
            c=char((a[alen-1]-'0'+carry)%2+'0')+c;
            carry=(a[alen-1]-'0'+carry)/2;
            alen--;
        }
        if(carry){
            c='1'+c;
        }
        return c;
    }
};