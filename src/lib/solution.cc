#include "solution.h"
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

vector<int> Solution::rotate(vector<int>& v1,int R) 
{   
  int n=v1.size();
  if(n==0)
    {
      cout<< "vector empty";
      return v1;
    }
  else
  {
    int temp;
    for(int i=0;i<R;i++)
    {
      temp=v1.back();
      v1.pop_back();
      v1.insert(v1.begin(),temp);
    }
    return v1;
  }
  
}
