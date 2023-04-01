

//Codeforce Problem No: 667A
//Problem Name: Vanya and Fence

#include <iostream>
using namespace std;

int main() {

int n, h;

cin >> n >> h;

int a, width = 0;

    for(int i = 0; i < n; i++) {

cin >> a;

if(a > h) {

    width += 2;

        }

else {

    width += 1;

        }

    }

cout << width << endl;

return 0;

}
