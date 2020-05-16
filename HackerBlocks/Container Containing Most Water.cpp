/*

In Coding blocks test Kartik bhaiya gave students an array of n non-negative integers a1, a2, …, an ,where each represents a point at coordinate (i, ai). n vertical lines are drawn such that the two endpoints of line i is at (i, ai) and (i, 0). The task is to find two lines, which together with x-axis forms a container, such that the container contains the most water.
Note: You may not slant the container.

Input Format
First line contains integer n as size of array. Next n lines contains a single integer as elements of array.

Constraints
n>=2

Output Format
Output maximum water the container contains.

Sample Input
9
1 8 6 2 5 4 8 3 7
Sample Output
49
Explanation
None


*/
#include<iostream>
#include<vector>
using namespace std;


   int maxArea(vector<int>& height) {
        int res=0,minh;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            minh=min(height[i],height[j]);
            res=max(res,minh*(j-i));
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return res;
    }

int main(){

  vector<int> height;
  int s;
  cin>>s;

  for(int i = 0; i < s; i++){
    int data;
    cin>>data;
    height.push_back(data);
  }

  cout<<maxArea(height);

  return 0;
}
