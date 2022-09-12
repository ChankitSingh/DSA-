//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends



class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string s)
    {
        int arr[26] = {0};
        int num = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]>='a'&&s[i]<='z'){
                num = s[i]-'a';
            }
            else{
                 if(s[i]>='A'&&s[i]<='Z')
                
                num = s[i]-'A';
        
            }
            arr[num]++;
        }
        int max =-1;int ans =0;
        for(int i=0;i<26;i++){
            if(arr[i]>max){
                ans =i;
                max =arr[i];
            }
        }
        char fans = 'a'+ans;
        return fans;
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
