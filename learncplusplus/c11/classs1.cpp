#include<iostream>

using namespace std;


class rectangle
{
    private:
        /* data */
        float width, height;
    public:
        rectangle(/* args */);
        void set_value(float,float);
        float area();
        ~rectangle();
};

void rectangle::set_value(float width, float height){
    this->width = width;
    this->height = height;
}

float rectangle::area(){
    float result;
    result = this->width*this->height;
    return result;
}
rectangle::rectangle(/* args */)
{
    width = 0;
    height = 0;
}

rectangle::~rectangle()
{
}

int main(int argc, char const *argv[])
{
    /* code */
    rectangle rect;
    rect.set_value(3,4);
    cout<<"area: "<<rect.area();
    rectangle rect1;
    cout<<"area1: "<<rect1.area();
    return 0;
}
