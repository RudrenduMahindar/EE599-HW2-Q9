#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(RotateTest, HandlesInputVector) {
  Solution solution;
  int arr[]={1,2,3,4};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n);
  vector<int> v1(v.size());
  v1=solution.rotate(v,4);
  vector<int> actual=v1; 
  int arr1[]={1,2,3,4};
  vector<int> expected(arr1,arr1+n);
  EXPECT_EQ(expected, actual);
}

TEST(RotateTest, HandlesEmptyInput) {
  Solution solution;
  int arr[]={};
  int n=sizeof(arr)/sizeof(int);
  vector<int> v(arr,arr+n);
  vector<int> v1(v.size());
  v1=solution.rotate(v,4);
  vector<int> actual=v1; 
  int arr1[]={};
  vector<int> expected(arr1,arr1+n);
  EXPECT_EQ(expected, actual);
}

