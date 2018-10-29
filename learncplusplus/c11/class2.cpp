#include<iostream>

using namespace std;


class circle
{
    private:
        /* data */
        float radius;
    public:
        circle(/* args */);
        circle(float r):radius(r){}
        float circum();
        ~circle();
};

float circle::circum(){
    return this->radius * 3.14 *2;
}
circle::circle(/* args */)
{
    radius = 0;
}

circle::~circle()
{
}


class cylinder
{
    private:
        /* data */
        circle base;
        float height;
    public:
        cylinder(/* args */ float,float);
        ~cylinder();
        float volume();
};

float cylinder::volume(){
    return base.circum()*height;
}
cylinder::cylinder(/* args */float h, float r):base(r),height(h){}

cylinder::~cylinder()
{
}

int main(int argc, char const *argv[])
{
    cylinder cld1(10,20);
    cout<<"volume: "<<cld1.volume();
    return 0;
}
