#include <iostream>
using namespace std;

int main() {
   int n=0;
   cin>>n;
    cout<<"1"<<endl;
    int a=0, b=1, c=0;
    for (int c=1; c<n; c++)
     {c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
    return 0;
   }
