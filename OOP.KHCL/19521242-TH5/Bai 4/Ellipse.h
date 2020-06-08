#pragma once

class Ellipse
{
private:
    double CoorX;
    double CoorY;
    double LongAxis;
    double ShortAxis; 
public:
    //constructor and destructor
    Ellipse();
    Ellipse(double x,double y,double lAxis,double sAxis);
    virtual~Ellipse();
    //Setter
    void SetCoorX(double x);
    void SetCoorY(double y);
    void SetLongAxis(double lAxis);
    void SetShortAxis(double sAxis);
    virtual void Set();
    //Getter
    double GetCoorX(){return CoorX;}
    double GetCoorY(){return CoorY;}
    double GetLongAxis(){return LongAxis;}
    double GetShortAxis(){return ShortAxis;}
    //other method
    virtual void Print();
};
class Circle final:public Ellipse //final to prevent inheritate 
{
private:
    double Radius;
public:
    Circle();
    Circle(double x,double y,double r);
    //Setter
    void Set();
    void SetRadius(double r);
    //Getter
    double GetRadius();
    void Draw(){/*Do nothing*/}
    void Print();
    ~Circle();
};


