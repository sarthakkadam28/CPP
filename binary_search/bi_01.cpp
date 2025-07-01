#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
          int peakindexinmountain(vector<int>&arr){
          int s=0;
           int e=arr.size()-1;
           int mid =s+(e-s)/2;
           while (s<e)
           {
            if(arr[mid]<arr[mid+1]){
                s=mid+1;

            }
            else
            {
                e=mid;
            }
            mid=s+(e-s)/2;

           }
           return s;
        }
};
int main(){
    int n;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    if(n>3){
        cout<<"the element must be 3"<<endl;
        return 1;
    }
    vector<int>arr(n);
    cout<<"enter the mountain array eleemnet"<<endl;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    Solution sol;
    int peak=sol.peakindexinmountain(arr);
    cout<<"the peakindex is"<<peak<<endl;
    cout<<"peak value is "<<arr[peak]<<endl;
    return 0;

}

           