Given a non-empty string check if it can be constructed by taking a substring of it and appending multiple copies of the substring together. 
You may assume the given string consists of lowercase English letters only and its length will not exceed 10000.


class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length()<2)
            return false;
//         std::set<char> aSet(s.begin(), s.end());
        
//         if(s.length() % aSet.size() == 0){
//             std::string aFinalString;
//             std::string aBaseStr = s.substr (0,aSet.size());
//             for(int i=0;i<s.length()/aSet.size();++i)
//             {
//                 aFinalString += aBaseStr;
//             }
//            // cout<<aFinalString<<endl;
//             return(aFinalString == s);
//         }
        for(int i=1;i<=s.length()/2;++i){
            std::string aBaseStr = s.substr(0,i);
            std::string aFinalString;
            while(aFinalString.length()<=s.length())
            {
                aFinalString += aBaseStr;
                if(aFinalString == s)
                    return true;
            }
        }
        return false;
    }
};
