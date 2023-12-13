/*
 * Creating an interface class for shapes and derive drawable shapes from it
 */

#include <iostream>
#include <string>
#include <vector>

//shape interface class /base class
class shape
{
    public:
    virtual void draw() = 0; //when we put the "= 0",also called "pure virtual function", we force the derived classes to have an implementation to this function, otherwise it will cause an error
};

class circle : public shape
{
    public:
    void draw()
    {
        std::cout << "circle drawed\n";
    }
};
class rectangle : public shape
{
    public:
    void draw()
    {
        std::cout << "rectangle drawed\n";
    }
};
class triangle : public shape
{
    public:
    void draw()
    {
        std::cout << "triangle drawed\n";
    }
};

void drawDisplay(shape *p)
{
    p->draw();
}
int main()
{
    circle c;
    rectangle r;
    triangle t;

    shape *s;

    // s = &c;
    // s->draw();

    // s = &r;
    // s->draw();
    
    // s = &t;
    // s->draw();

    drawDisplay(&c);
    drawDisplay(&r);
    drawDisplay(&t);

    return 0;
}
