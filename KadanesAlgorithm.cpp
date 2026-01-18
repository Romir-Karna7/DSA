#include <iostream>
#include <vector>
using namespace std;
 
int main(){
vector <int> nums = {5,4,-1,7,8};
int max =nums[0];
        int sum=0;
for(int i=0;i<nums.size();i++){
    sum+=nums[i];
    if(sum>max){
        max = sum;
    }
    if(sum<0){
        sum =0;
        continue;
    }
    


    
}
return max;
    }
return 0;}
