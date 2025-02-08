class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int i = digits.size()-1;
    
            while(i>=0){
                if(digits[i] == 9){
                    digits[i] = 0;
                }
                else{
                    digits[i]+=1;
                    return digits;
                }
                i--;
            }
            digits.insert(digits.begin(),1);
            return digits;
        }
    };