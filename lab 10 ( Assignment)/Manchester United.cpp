/*  Manchester United is a class with two private integer member variables coach and
player, and a public void member function getData (). Create an object named ‘ronaldo’ in
the main function. Overload the operator '++' in this class to perform the increment of
both member variables through the following instruction ronaldo++ from the main
function. After that create another instance of the Manchester United class named
‘fernandes’. Now, you set the values of coach and player for ronaldo to 4 and 5,
and for fernandes, it is 5 and 6. Overloading only one relational operator, compare
the result of ronaldo with fernandes before and after incrementing ronaldo by one.
Which operator will be appropriate for both cases? Support your explanation by
implementing that operator.*/

#include<iostream>
using namespace std ;

class ManchesterUnited {
    private:
       int coach ;
       int player ;

    public:
      ManchesterUnited (int c, int p ) {
      coach = c;
      player = p;

}
 void getdata () {
    cout << "Coach" << coach << endl ;
    cout << "Player" << player << endl ;

 }
ManchesterUnited operator++ (int) {
   ManchesterUnited temp (coach,player);
   coach++ ;
   player++ ;
   return temp;

}

bool operator < (ManchesterUnited & other ) {   // the "<" operator will be appropriate to compare two instances of the class based on the sum of their member variables.

  return (coach + player) <(other.coach + other.player);
}

};

int main () {

ManchesterUnited ronaldo (4,5);
ronaldo++;
ManchesterUnited fernandes (5,6);

 cout << "Before incrementing Ronaldo: " << (ronaldo < fernandes ) <<endl ;
 ronaldo++ ;
 cout << "After incrementing Ronaldo: " << (ronaldo < fernandes ) << endl ;

 return 0;

}
/* In the main() function, we create an instance of the class ronaldo, call getData() to display its initial values,
 increment it using the overloaded ++ operator, and call getData() again to show the updated values. We also create
 an instance of the class fernandes, set its member variables to 5 and 6 using the curly braces initialization, and
 compare it with ronaldo before and after incrementing ronaldo using the overloaded < operator. The results show that
 before incrementing, ronaldo is less than fernandes, while after incrementing, ronaldo is greater than or equal to
 fernandes. Therefore, the < operator is appropriate for both cases, as it can compare two instances of the class based
 on their member variables.*/
