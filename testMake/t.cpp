#include <iostream>
#include "t1.h"
int t1::mKey = 1500;

using namespace std;
int main(){
  t1* pt1 = new t1();
  printf("Id is %d \n",pt1->mId);
  pt1->setId(100);
  cout<<"Id is " << pt1->mId << " after set 100"<<endl;
  cout<<"static member is "<< pt1->mKey << endl;
  gVar = 1000;
  cout<<"extern var= "<<gVar<<endl;
}
