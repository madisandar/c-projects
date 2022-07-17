#include <iostream>

using namespace std;

void cube(int n,int num);
int main()
{
    int i,nums[10];

    for(int i=0; i<10; i++){
        cout<<"Original Contents";

        for(i=0; i<10; i++){
            cout<<nums[i]<<' ';
            cout<< '\n';
        }

    }

        cube(nums,10);

        cout<<"Altered contents";
        for(i=0; i<10; i++){
            cout<<nums[i]<<' ';
            return 0;
        }
    }


