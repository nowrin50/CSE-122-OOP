
/* Suppose there are three classes named “Germany”, “Argentina” and “Brasil”.
Build a diagram to show how these classes are related. What do you need to do to
hide the implementation details of the parent class obtained from the diagram?
Demonstrate the scenario with the help of an array of pointers. */

//int main () {
 // cout << "+-----------+\n";
  //cout << "|  Germany  |\n";
  //cout << "+-----------+\n";
  //cout << "      ^\n";
  //cout << "      |\n";
  //cout << "+-----------+\n";
  //cout << "| Argentina |\n";
  //cout << "+-----------+\n";
  //cout << "      ^\n";
  //cout << "      |\n";
  //cout << "+-----------+\n";
  //cout << "|   Brasil  |\n";
  //cout << "+-----------+\n";
//}

  //return 0;

/*To hide the implementation details of the parent class, we can
declare the parent class as protected instead of public. This
 way, only the derived classes (Argentina and Brasil) can access
 the parent class's members and functions, but external code cannot.
Here is the implementation with the help of an array of pointers.: */

#include<iostream>
using namespace std;

class Germany {

protected:
    int germanyScore ;

public:
    Germany () {
    germanyScore = 0;
    }

    void goal () {
    germanyScore++ ;

    }
    int getScore () {
     return germanyScore ;
    }
};

class Argentina : public Germany {

   private:
   int argentinaScore ;

   public:
   Argentina () {
   argentinaScore = 0;
    }
    void goal () {
      argentinaScore++ ;
      Germany :: goal () ;
    }

    int getScore () {
      return argentinaScore ;
    }
};

class Brasil : public Germany {
 private:
     int brasilScore;

 public:
    Brasil () {
    brasilScore = 0;
}

void goal () {
 brasilScore++ ;
 Germany :: goal () ;
}
  int getScore () {
  return brasilScore;
 }

};

int main () {
  Germany* team [3] ;
  team  [0] = new Germany () ;
  team  [1] = new Argentina () ;
  team  [2] = new Brasil   () ;


  for (int i = 0; i <3; i++ ) {
    team [i] -> goal () ;
    cout << "Team" <<i << "score:" <<team [i] -> getScore () <<endl;


  }
return 0;

}

