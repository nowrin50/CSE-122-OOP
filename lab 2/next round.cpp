
//Next Round

#include<iostream>
using namespace std;
int main()
{
int p, l, i, a[100], count = 0;
cin >> p >> l;
for(i=0; i<p; i++)
    {

         cin >> a[i];
    }
    for(i = 0; i < p; i++)
    {

         if(a[i] > 0 && a[i] >= a[l - 1])
              count++;
    }

    cout << count << endl;


}
