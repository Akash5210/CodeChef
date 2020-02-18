#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5},b[]={6,7,8,9,10},c[10];
    for (int i=0;i<5;i++) {
        c[i]=a[i];
        c[5+i]=b[i];
    }
    for(int i=0;i<10;i++)
      cout<<c[i]<<" ";
    return 0;
}
