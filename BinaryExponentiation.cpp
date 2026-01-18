#include <iostream>
using namespace std;
int main(){
      long BF =n;
        double ans=1;
        if(n<0){
            x =1/x;
            BF= -BF;
        }
        while(BF>0){
            if(BF%2==1){
                ans *=x;
                
            }
            x *=x;
            BF/=2;
        }
        return ans;
    }
    }