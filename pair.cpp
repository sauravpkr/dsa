#include <iostream>
#include <vector>
using namespace std;

class a
{
    private:
    int x;
    public:
    int getx()
    {
        return x;
    }
    void setx(int data)
    {
        x=data;
    }
    static int println()
    {
        printf("printed string");
        return 1;
    }
};
// typedef class a a_t;
int main()
{
    class a t;

    a::println();
    class a x,y;
    x.setx(5);
    y.setx(10);
    vector<a>p;
    p.push_back(x);
    p.push_back(y);
    p.push_back(x);
    p.push_back(y);


    printf("%d\n",p[2].getx());
}

