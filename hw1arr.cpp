#include <iostream>
using namespace std;
int main()
{
    int array[1000];
    int n;
    cout<<"enter the value: ";
    cin>>n;
    fill_n(array,1000,n);
    for (int i = 0; i < 1000; i++)
    {
        cout<<array[i]<<endl;
    }
    
    return 0;
}