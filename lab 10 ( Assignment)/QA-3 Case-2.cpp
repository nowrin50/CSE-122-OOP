

Case 2:

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

class Pakistan: public Zimbabwe
{
public:
    int getchatara1()
    {
        chatara1 = 1;
        return chatara1;
    }
    int getraza2()
    {
        raza2 = 2;
        return raza2;
    }
};

int main()
{
    Pakistan obj;
    obj.chatara1 = 1;
    obj.getchatara1();
    obj.getraza2();
    return 0;
}

In Case 2 where Pakistan class is publicly inherited from Zimbabwe class,
 the public and protected members of the Zimbabwe class become public and
 protected members of the Pakistan class respectively. Therefore, the
chatara1 and raza2 member variables of the Zimbabwe class can be accessed
 directly by the member functions of the Pakistan class or any objects
of the Pakistan class.
