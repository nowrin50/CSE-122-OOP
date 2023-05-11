

//Case 1 :

#include<iostream>
using namespace std;
class Zimbabwe
{
public:
    int chatara1;
protected:
    int raza2;
private:
    int ervine3;
};

class Pakistan: private Zimbabwe
{
public:
    int getchatara1()
    {
        chatara1 = 1;
        return chatara1;
    }
    int getervine3()
    {
        ervine3 = 3;
        return ervine3;
    }
};

int main()
{
    Pakistan obj;
    obj.getchatara1();
    obj.getervine3();
    return 0;
}

*/ In Case 1 where Pakistan class is privately inherited from Zimbabwe class,
 the public and protected members of the Zimbabwe class become private members
 of the Pakistan class. Therefore, the chatara1 and ervine3 member variables
of the Zimbabwe class can only be accessed through the member functions of the
 Pakistan class. Any attempt to access them directly will result in a compilation error. */
