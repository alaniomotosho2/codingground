#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int ar[] {3,5,1,0,6,22};
    for(int i =0; i <5; ++i){
        for(int j =i+1; j < 5; j++){
            int temp;
            if(ar[i] > ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    for(auto i: ar){
        cout<<i<<endl;
    }
}