class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.size()%2 == 1) return false;

        int open = 0, unlocked = 0;
        for(int i=0;i<s.size();i++){
            if(locked[i] == '0'){
                unlocked++;
            } else if (s[i] == '('){
                open++;
            } else {
                if(open > 0){
                    open--;
                } else if(unlocked > 0){
                    unlocked--;
                } else{
                    return false;
                }
            }
        }

        if(open == 0) return true;
        int balance = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(locked[i] == '0'){
                unlocked--;
                balance--;
            } else if (s[i] == '('){
                open--;
                balance++;
            } else{
                balance--;
            }

            if(balance > 0) return false;
            if(unlocked == 0 && open == 0) break;
        }
        if(open > 0) return false;
        return true;
    }
};