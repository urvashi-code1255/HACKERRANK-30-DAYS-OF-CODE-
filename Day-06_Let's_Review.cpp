#include <iostream>
#include<string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    string s,a,b;
    while(t--)
    {
        cin>>s;
        for(int i=0 ;i< s.size(); i++)
        {
            if(i%2==0) // even
            a += s[i];
            else
            b += s[i]; //odd
        }
        cout<<a<<" "<<b<<endl;
        a = ""; // again making a empty.
        b = ""; // again making b empty.
    }  
    return 0;
}

