#include<iostream>
using namespace std;
class Solution {
  public:
    string toLower(string S) {
        //size of the string is len
        int len = S.size();
        
        for (int i = 0; i < len; i++) {
            //checking for each charater it is upper or not if upper then converting it to lower
            if (isupper(S[i])) 
            S[i] = tolower(S[i]);
        }
        //returning converted string
        return S;
    }
};
int main()
{
    string S;
    cin>>S;
	Solution abc;
	cout<<abc.toLower(S);
	return 0;
}