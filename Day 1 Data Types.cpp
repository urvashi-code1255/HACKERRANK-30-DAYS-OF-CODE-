#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    // Declare second integer, double, and String variables.
    int i1;
    double d1;
    string s1;
    
    cin>>i1;
    cin>>d1;
    
    cin.ignore();  // to store the string input in different buffer .
    
    getline(cin,s1);
    
    cout<<i+i1<<endl;
    cout<<fixed<<setprecision(1)<<d1 + d<<endl; //used for one decimal digit 
    cout<<s+s1<<endl;
    
    return 0;
