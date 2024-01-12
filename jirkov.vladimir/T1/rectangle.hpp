#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "shape.hpp"

namespace jirkov
{
  class Rectangle : public Shape
  {
  public:
    Rectangle(point_t bottomLeft, point_t topRight);
    virtual double getArea() const;
    virtual rectangle_t getFrameRect() const;
    virtual void move(const point_t & destination);
    virtual void move(double moveX, double moveY);
    virtual void scale(double k);
  private:
    rectangle_t rectangle;
    point_t bottomLeft_;
    point_t topRight_;
  };
}

#endif
