

//REPEATATIVE  NUMBER CODE (ARRAY)


#include<iostream>
using namespace std;
int main () {
    int number;
    cout<<"ENTER THE ARRAY NUMBER ";
    cin>>number;
int arr[number];
for (int i=0;i<3;i++)
    { cin>>arr[i];

} for (int i =3;i<number;i++) {
arr[i] = arr[i-3];
}
for(int i=0;i<number;i++){
    cout<<arr[i];
}
return 0;
}
