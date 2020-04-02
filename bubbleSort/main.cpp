#include <iostream>
#include <vector>
using namespace std;
int solution(vector<int> &A);
int main(){
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(4);
  int ans=solution(a);
  cout<<"ans is "<<ans<<endl;
  return 0;
}
int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    for(int j=A.size()-1; j >1; j-- ){
        for(int i=0; i < j; i++){
            if(A[i]>A[i+1]){
                int tmp=A[i+1];
                A[i+1]=A[i];
                A[i]=tmp;
            }
        }
    }
    for(int t=0; t<A.size(); t++){
        std::cout<<A[t];
    }
    cout <<endl;
    int s=0;
    bool haspos=false;
    for(int k=0; k<A.size(); k++){
        if(A[k]>0){
            haspos=true;
            if(A[k]!=s+1){
                return A[k]-1; 
            } else{
                s++;
                continue;
            }
        }
    }
    if(haspos) return A[A.size()-1]+1;
    return 1;
}  


