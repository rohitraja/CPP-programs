#include <iostream>
#include <conio.h>
#include <map>

using namespace std;
typedef long long LL;
map <LL,LL> storedValue;
int arr[1000];
LL fibo(LL n){
    LL fibN;
if(n==0) return 0;
if(n==1) return 1;
if(storedValue[n]!=0) return storedValue[n];
storedValue[n] = fibo(n-1)+fibo(n-2);
return storedValue[n];
}

int main()
{
    LL n;
    cout<<"Enter the no ";
    cin>>n;

    cout<< fibo(n);
    return 0;
}
