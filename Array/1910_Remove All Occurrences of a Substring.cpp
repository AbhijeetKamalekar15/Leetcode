//brute force

class Solution {
    public:
        string removeOccurrences(string s, string part) {
            int n = part.size();
            while(1){
                int idx = s.find(part);
                if(idx!=string::npos){
                    s.erase(idx, n);
                }
                else{
                    break;
                }
            }
            return s;
        }
    };

// Stack approach
class Solution {
    public:
        string removeOccurrences(string s, string part) {
            string res = "";
            int m = part.size();
            
            for (char c : s) {
                res += c;
                if (res.size() >= m && res.substr(res.size() - m) == part) {
                    res.erase(res.size() - m);
                }
            }
            return res;
        }
    };