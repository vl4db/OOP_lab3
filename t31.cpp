#include <iostream>

using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }
    void setLength(double l) {
        length = l;
    }
    void setWidth(double w) {
        width = w;
    }

    double getLength() {
        return length;
    }

    double getWidth() {
        return width;
    }

    double computeArea() {
        return length * width;
    }

    double computePerimeter() {
        return 2 * (length + width);
    }

    int comparePerimeter(Rectangle other) {
        double P = computePerimeter();
        double otherP = other.computePerimeter();
        if (P > otherP)
            return 1;
        else if (P < otherP)
            return -1;
        else
            return 0;
    }

    int compareArea(Rectangle other) {
        double A = computeArea();
        double otherA = other.computeArea();

        if (A > otherA)
            return 1;
        else if (A < otherA)
            return -1;
        else
            return 0;
    }
};

int main()
{
    Rectangle r1; 
    Rectangle r2;

    r1.setLength(10.5);
    r1.setWidth(5.0);

    r2.setLength(8.0);
    r2.setWidth(6.0);

    cout << r1.compareArea(r2) << " " << r1.comparePerimeter(r2);

    return 0;
}