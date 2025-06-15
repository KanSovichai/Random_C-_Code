#include <iostream>
using namespace std;
class Area
{
private:
    int width, height;

public:
    void getArea(int width, int height)
    {
        cout << "Area(int)=" << width * height << endl;
    }
    void getArea(int width, float height)
    {
        cout << "Area(int/float)=" << width * height << endl;
    }
    void getArea(float width, int height)
    {
        cout << "Area(float/int)=" << width * height << endl;
    }
    void getArea(float width, float height)
    {
        cout << "Area(float)=" << width * height << endl;
    }
};
int main()
{
    Area obj;
    obj.getArea(1.2f,1.3f);

    return 0;
}