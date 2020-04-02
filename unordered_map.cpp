#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
  unordered_map<int, string> map;
  map.insert(make_pair(1,"Phil"));
  map.insert(make_pair(2,"Sharon"));
  
  unordered_map<int, string>::iterator it;
  map.erase(1);
  if((it = map.find(2)) != map.end()){
    cout<<"Find it " << it->second <<endl;
  } else {
    cout << "Not found" << endl;
  }
  return 0;
}
