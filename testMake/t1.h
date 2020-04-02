#include <iostream>
extern int gVar;

class t1{
  public:
    int mId;
    int key;
    static int mKey;
    t1(){ 
      mId = 0;
      gVar = 0;
      //this->mKey= 777;
      //key = this->mKey;
    }
    void setId(int in);
};
