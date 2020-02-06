#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using namespace std;

int main()
{
    Solution solution ;
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v(arr,arr+n);
    cout<< "Input : " ; 
    for(auto it=v.begin();it!=v.end();it++)
        cout<< *it << " ";
    vector<int> v1(v.size());
    v1=solution.rotate(v,1);
    cout<< "\nOutput : " ; 
    for(auto it=v1.begin();it!=v1.end();it++)
        cout<< *it << " ";
    cout<< "\n";    
    return EXIT_SUCCESS;
}