/*
  @author: AkshitAggarwal
  @date: 10/03/2019
*/

#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\n===FIZZBUZZ===";
    cout<<"\nEnter a number: ";
    cin>>n;

    for(int i = 1; i <= n; i++)
    {
        if(i % 3 ==0 && i % 5 == 0) cout<<" FIZZBUZZ ";

        else if(i % 3 == 0) cout<<" FIZZ ";

        else if(i % 5 == 0) cout<<" BUZZ ";

        else cout<<i<<" ";
    }

    return 0;
}
