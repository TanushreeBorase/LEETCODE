class Solution {
public:
    int countSeniors(vector<string>& details) {
        int seniorcount = 0;

        for(const string &info:details) 
            // const string &info declares a constant reference to each string element in the details container, 
            // meaning info is a read-only reference to each element.   
        {
            int age = stoi(info.substr(11,2));  
            /*
                info.substr(11, 2) calls the substr method on the string object info.
                substr(11, 2) extracts a substring starting from index 11 of info and takes 2 characters.
                stoi is a standard library function that converts a string to an int.
                stoi(info.substr(11, 2)) converts the extracted substring (which should represent a number) to an integer and assigns it to the variable age.
            */
            if(age > 60){
                seniorcount++;
            }
        }
        return seniorcount;
    }
};
