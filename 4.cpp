#include <iostream>
#include <vector>
using namespace std;

int main()
{
    long long int n,a,cnt=0;
    vector <long long int> v;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }

    //cout<<cnt<<endl;
    for(int i=0;i<n-1;i++)
    {

        while(v[i+1]<v[i])
        {
            v[i+1]=v[i+1]+1;
            cnt=cnt+1;
        }
    }


    cout<<cnt;


}
