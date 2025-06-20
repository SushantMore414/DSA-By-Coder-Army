#include<iostream>
#include<vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
  if (nums.size() == 0)
      return 0;
  
  int i = 0;  // slow pointer

  for (int j = 1; j < nums.size(); j++) {  // fast pointer
      if (nums[j] != nums[i]) {
          i++;               // move slow pointer
          nums[i] = nums[j];  // copy unique element
      }
  }
  return i + 1;  // because 'i' is index (0-based)
}

int main(){
  vector<int>nums={1, 1, 2, 2, 3, 3, 3, 4};
  removeDuplicates(nums);

 
  
  



}