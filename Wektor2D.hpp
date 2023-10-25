#include <vector>
class Wektor2D
{
public:
    std::vector< double > v;

    Wektor2D(double vx = 0, double vy = 0)
    {
        v.push_back(vx);
        v.push_back(vy);
    };
    ~Wektor2D(){};

    void setX(double vx) { v[0] = vx; }

    void setY(double vy) { v[1] = vy; }

    double getX()
    {
        double x = v[0];

        return x;
    }

    double getY()
    {
        double y = v[1];

        return y;
    }
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    Wektor2D vSum;

    vSum.setX(v1.getX() + v2.getX());
    vSum.setY(v1.getY() + v2.getY());

    return vSum;
}

double operator*(Wektor2D v1, Wektor2D v2)
{
    double vProduct;

    vProduct = v1.getX() * v2.getX() + v1.getY() * v2.getY();
    return vProduct;
}