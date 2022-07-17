#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int nums[10]={333,65,34,67,45,68,35,52,39,9};
    int a,b,t;
    int size;
    size = 10;
   // for (t=0;t<size;t++)nums[t]=rand();


 //  nums[10]={33,65,34,67,45,68,35,52,39,99};
    cout<<"Original array is:\n    ";
    for (t=0; t<size; t++)cout << nums[t] << ' ';
    cout <<'\n';
    for (a=1;a<size;a++)
        for (b=size-1; b>=a;b--)
    {
        if (nums[b-1]>nums[b]){
            t=nums[b-1];
            nums[b-1]=nums[b];
            nums[b]=t;
        }
    }
    cout<<"\n Sorted array is :\n    ";
    for (t=0; t<size; t++)
        cout << nums[t] << ' ';
    return 0;
}
