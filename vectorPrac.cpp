#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>

using namespace std;

void printVec(vector<int>);
void printSet(set<int>);
int main()
{
  vector<int> vec;
  vec.push_back(10);
  vec.push_back(20);
  vec.push_back(30);
  cout << "original \n";
  printVec(vec);
  vector<int>::iterator it = vec.begin();
  vec.insert(it+1,100);
  printVec(vec);
  vec.erase(vec.end()-1);
  printVec(vec);


  set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  printSet(s);
  set<int>::iterator it2;
  it2 = s.end();
  cout << "find "<< *it2 <<endl;

  map<int,string> m;
  m[1]="dog";
  m[2]="cat";
  cout << m[1] <<endl;
  
  return 0;
  
}

void printVec(vector<int> vec)
{
  for(int i = 0; i < vec.size(); i++){
    cout << vec[i] <<",";
  }
  cout << endl;
}
void printSet(set<int> s)
{
  set<int>::iterator it = s.begin();
  for(it; it != s.end(); it++){
    cout << *it <<",";
  }
  cout << endl;
}
