# Next-Geater-Element
<!-- Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x, is the first greater element on right side of x in the array. Elements for which no greater element exist, consider next greater element as -1. -->

#include <vector>
#include <stack>
vector<int> nextGreaterElement(vector<int> input) {
stack<int>stack;
   stack.push(-1);
   vector<int>ans(input.size());
   for(int i=input.size()-1;i>=0;i--){
       int curr=input[i];
       while(stack.top()!=-1 && stack.top()<=curr){
           stack.pop();
       }
       ans[i]=stack.top();
       stack.push(curr);
   }

return ans;
}
