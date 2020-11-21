#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    return n;
    else
    return n*fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter the number to find the factorial of it"<<endl;
    cin>>n;
    cout<<fact(n);
    return 0;
}
