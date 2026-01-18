#include <iostream>
using namespace std;
int main(){
    int x =2;
    int n=2;
double y=x;
        if(n>0){
            for(int i=1;i<n;i++){
            double s = (y*x);
            y = s;
        }
            cout<< x;}
        else if(n<0){
            for(int i=1;i<(-n);i++){
                double s = (y*x);
                y=s;
            }
            cout<<(1/y);
        }
        else{
            cout<< 1;
        }
    }