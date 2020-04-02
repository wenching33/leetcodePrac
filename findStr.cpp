#include <string>
#include <iostream>
#include <cmath>
#include <stack>
#include <vector>
using namespace std;
void func(vector<int>& arr){
  vector<int>& mem=arr;
  mem[0]=99;
}
int main()
{
  string str="abc,def";
  cout<<"size="<<str.size()<<endl;
  cout<<"length="<<str.length()<<endl;
  for(int i=0; i< str.size();i++){
    cout<<str[i]<<endl;
  }
  int ind=str.find(',');
  cout <<"index is "<<ind<<endl;

  if(str[0]=='a'){
    cout<<str.substr(0,ind)<<endl;

    cout<<str.substr(ind+1,str.length()-ind-1)<<endl;
  }
  /*
  int k=pow(2,3);
  stack<int> stk;
  stk.push(10);
  stk.push(20);
  int tmp=stk.top();
  cout <<tmp<<endl;
  */
 
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  vector<int>& b=a;
  func(b);
  cout << "a[0]="<<a[0] <<endl;
}
