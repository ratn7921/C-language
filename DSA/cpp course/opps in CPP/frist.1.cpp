#include<bits/stdc++.h>
#include <cctype>

using namespace std;
int main()
{
  string company_name = "sai";
  string number = "8830231066";
  string name = "saurabh";
  // char chaarr[] = {};
  string id_name = name.substr(0 , 3);
  string id;
  number = number.substr(6 , 10);
  id = company_name+id_name+number;
  //cout<<id;
  transform(id.begin(), id.end(), id.begin(), ::toupper);
  cout<<id;
  
  
  // int num = (string) number;
  /*
    
     string s1 = "Geeks";
 
    // Copy two characters of s1 (starting
    // from position 3)
    string r = s1.substr(3, 2);
 
    // prints the result
    cout << "String is: " << r;
  
  */
}