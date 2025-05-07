
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
// getter= make a info in class readable
// setter= make a info in class rewritable
class Bike
{
private:
    int speed = 0;

public:
    Bike(int speed)
    {
    }
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
    int getSpeed()
    {
        return speed;
    }
};
class Food
{   private:
    string food="Empty";
    public:
   
    void setFood(string food){
        this->food=food;
    }
    string getFood(){
        return food;
    }
};
int main()
{
    int speed = 90;
    Bike bike(speed);
    bike.setSpeed(120);
    cout << bike.getSpeed()<<"\n";
    Food food1;
    food1.setFood("Pizza");
    cout<<food1.getFood();
    return 0;
}