#include <iostream>

using namespace std;

class ComplexNumber {
private:
    double real;
    double imag;

public:
    ComplexNumber() 
    {
        real = 0.0;
        imag = 0.0;
    }
    void setReal(double r) 
    {
        real = r;
    }
    void setImaginary(double i) 
    {
        imag = i;
    }

    double getReal() 
    {
        return real;
    }

    double getImag() 
    {
        return imag;
    }

    ComplexNumber computeSum(ComplexNumber other) {
        ComplexNumber result;
        result.setReal(real + other.real);
        result.setImaginary(imag + other.imag);
        return result;
    }

    ComplexNumber computeProduct(ComplexNumber other) {
        ComplexNumber result;
        result.setReal((real * other.real) - (imag * other.imag));
        result.setImaginary((real * other.imag) + (imag * other.real));
        return result;
    }
};

int main()
{
    ComplexNumber x;
    ComplexNumber y;

    x.setReal(10.5);
    x.setImaginary(5.0);

    y.setReal(8.0);
    y.setImaginary(6.0);

    ComplexNumber sum = x.computeSum(y);
    ComplexNumber product = x.computeProduct(y);

    cout << sum.getReal() << " + " << sum.getImag() << "i\n";
    cout << product.getReal() << " + " << product.getImag() << "i\n";

    return 0;
}