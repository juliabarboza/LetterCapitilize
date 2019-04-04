#include <iostream>
#include <string>
using namespace std;

string LetterCapitalize(string str) { 

  // code goes here
  string str2 ="";
  for (int i =0; i < str.length(); i++)
  {
      if(i ==0)
      {
          str2 += toupper(str[i]);
      }
      else if(str[i-1]<'a' & str[i-1]<'A')
      {
          str2 += toupper(str[i]);
      }
      else
      {
          str2 += str[i];
      }
  }
  return str2; 
            
}

int main() { 
  
  // keep this function call here
  cout << LetterCapitalize(gets(stdin));
  return 0;
    
}
