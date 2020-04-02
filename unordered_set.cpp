#include <iostream>
#include <unordered_set>
using namespace std;
int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(3);
  s.insert(5);
  //s.insert(5);
  //s.erase(5);
  unordered_set<int>::iterator it =  s.find(5);
  int x = s.count(5);
  cout << x <<" times"<<endl;
  if(s.end() != it){
    cout << *it << endl;
  } else {
    cout << "can't find it" <<endl;
  }
  return 0;
}
