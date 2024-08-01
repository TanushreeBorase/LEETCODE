class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorcount = 0;

        for(const string &info:details){
            int age = stoi(info.substr(11,2));  

            if(age > 60){
                seniorcount++;
            }
        }
        return seniorcount;
    }
};
