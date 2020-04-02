#include <iostream>
using namespace std;
class Solution {
public:
    int * bulbs;
    int bulbSwitch(int n) {
        bulbs = new int[n];
        for(int i = 0; i < n; i++){bulbs[i] =1;}
        for(int i = 2; i<=n; i++){
            int k = i;
            cout << "i=" << i <<endl;
            while(true){
                flip(k-1);
                k += i;
                if((k-1) > (n-1)){
                    break;
                }  
            }
        }
        int ans = 0;
        for(int j = 0; j < n; j++){
            if(bulbs[j] == 1){
                ans++;
            }
        }
        return ans;
    }
    void flip(int index){
        if(bulbs[index] == 0){
            bulbs[index] = 1;
        } else {
            bulbs[index] = 0;
        }
    }
};

int main(){
  Solution * sp = new Solution();
  int ans = sp->bulbSwitch(99999999);
  cout << "ans is "<< ans << endl;
  return 0;
}

