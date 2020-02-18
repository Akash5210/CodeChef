#include<iostream>
using namespace std;
int poli(int);
int main()
{
    int n,m,sum;
    cout<<"Enter the number";
    cin>>n;

    m=poli(n);
    //cout<<m;
    sum=n+m;
    int c=0;
    while(5){

      if(sum==poli(sum)){
        cout<<sum;
        return 0;
        }
     else{
          sum=sum+poli(sum);

         }
    }

    return 0;
}

int poli(int n)
{
    int p,d=0;
    while(n!=0)
    {
        p=n%10;
        d=d*10+p;
        n=n/10;
    }
    return d;

}
