#pragma once
#include <string>
class Shape
{
public:
    virtual void draw() const = 0;
    virtual void error(const std::string& msg);

    int objectID() const;
private:
};

class Rectangle : public Shape{};

class Ellipse : public Shape {};
