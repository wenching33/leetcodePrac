#include <iostream>
#include <vector>
using  namespace std;
class Solution {
public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        int c = k;
        vector<int> ret;
        
        for(int i=0; i<k; i++){
            c--;
            int ans = get(nums1, nums2, c);
            
            ret.push_back(ans);
        }
        return ret;
        
        
    }
    int get(vector<int>& a, vector<int>& b, int check){
        int max_a = -1;
        int max_b = -1;
        int ind_a = -1;
        int ind_b = -1;
        for(int i =0; i<a.size(); i++){
            if(a[i] > max_a) { 
                max_a = a[i];
                ind_a = i;
            }
        }
        for(int i =0; i<b.size(); i++){
            if(b[i] > max_b) { 
                max_b = b[i];
                ind_b = i;
            }
        }
        if(max_a > max_b){
            if( ((a.size()-ind_a-1) + b.size()) >= check){
                for(int i=0; i<= ind_a; i++){
                    vector<int>::iterator it = a.begin();
                    a.erase(it);
                }
                return max_a;
            } else {
		while(1){
		  vector<int> acp = a;
		  vector<int>::iterator it = acp.begin()+ind_a;
		  acp.erase(it);
		  if(acp.size()==0)
		    break;

		  ind_a = find_maxInd(acp);
		  if( ((a.size()-ind_a-1) + b.size()) >= check){
		    return a[ind_a];
		  }

		}
	    }
        } else {
            if(max_a < max_b){
                if( ((b.size()-ind_b-1) + a.size()) >= check){
                    for(int i=0; i<= ind_b; i++){
                        vector<int>::iterator it = b.begin();
                        b.erase(it);
                        
                    }
                    return max_b;
                } else {
		  while(1){
		    vector<int> bcp = b;
		    vector<int>::iterator it = bcp.begin()+ind_b;
		    bcp.erase(it);
		    if(bcp.size()==0)
		      break;

		    ind_b = find_maxInd(bcp);
		    if( ((b.size()-ind_b-1) + a.size()) >= check){
		      return b[ind_b];
                    }

		  }
		}


                          
            } else { //max_a==max_b
	        if(check == 0){
		  return max_a;
		}
                vector<int> aa = a;
                vector<int> bb = b;
                int ans_a = 0, ans_b = 0;
                for(int i=0; i<= ind_a; i++){
                    vector<int>::iterator it = aa.begin();
                    aa.erase(it);
                    
                }
                
                ans_a = get(aa,bb,check-1);
                for(int i=0; i<= ind_b; i++){
                    vector<int>::iterator it = bb.begin();
                    bb.erase(it);
                }
		vector<int> aa2=a;
                ans_b = get(aa2,bb,check-1);
		if(ans_a == -1 && ans_b ==-1){
		  return -1;
		}
		if(ans_a == -1){
		  b=bb;
		  return max_b;
		}
		if(ans_b == -1){
		  a=aa;
		  return max_a;
		}

               		
                if(ans_a > ans_b){
                    a=aa;
                    return max_a;
                    
                } else {
                    b=bb;
                    return max_b;
                }

            }
            
        }
        return -1;
        
        
    }
    int find_maxInd(vector<int> a){
      int max=-999;
      int ind=-1;
      for(int i=0; i<a.size(); i++){
	if(a[i] > max){
	  max = a[i];
	  ind = i;
	}
      }
      return ind;

    }
};

int main(){
  Solution* s = new Solution();
  vector<int> n1;
  n1.push_back(5);
  n1.push_back(7);
  n1.push_back(3);
  //n1.push_back(5);
  vector<int> n2;
  n2.push_back(4);
  n2.push_back(2);
  n2.push_back(3);
  vector<int> ans = s->maxNumber(n1,n2,3);
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<",";
  }
  return 0;
}



