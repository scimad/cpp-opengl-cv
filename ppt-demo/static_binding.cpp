// C++ program to illustrate the concept of static binding
#include <iostream>
using namespace std;
 
class ComputeSum
{
    public:
 
    int sum(int x, int y) {
        return x + y;
    }
 
    int sum(int x, int y, int z) {
        return x + y + z;
    }
};
 
int main()
{
    ComputeSum obj;
    cout << "Sum is " << obj.sum(10, 20) << endl;
    cout << "Sum is " << obj.sum(10, 20, 30) << endl;
 
    return 0;
}




//Credit: https://www.techiedelight.com/difference-between-static-dynamic-binding-cpp/