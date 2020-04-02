#include <iostream>
#include <math.h>
#include <vector>
#include <string>

using namespace std;
int main()
{
  string astr = "good";
  string bstr = "day";
  vector<string> words;
  words.push_back(astr);
  words.push_back(bstr);
  int product= words[0].length()*words[1].length();
  
  //float a=sqrt(133);
  cout<< "product="<<product;
  return 0;
}
