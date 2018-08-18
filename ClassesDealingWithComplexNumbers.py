import math
class Complex(object):
    def __init__(self, r, m): self.real = r; self.imaginary = m;

    def __add__(self, no):
        r = self.real + no.real;
        im = self.imaginary + no.imaginary
        return Complex(r, im)

    def __sub__(self, no):
        re = self.real - no.real
        im = self.imaginary - no.imaginary
        return Complex(re, im)

    def __mul__(self, no):
        re = self.real * no.real - self.imaginary * no.imaginary;
        im = self.real * no.imaginary + self.imaginary * no.real;
        return Complex(re, im)

    def __truediv__(self, no):
        denom = no.real * no.real + no.imaginary * no.imaginary;
        re = (self.real * no.real + self.imaginary * no.imaginary) / denom;
        im = (-self.real * no.imaginary + self.imaginary * no.real) / denom;
        return Complex(re, im)

    def mod(self):
        re = math.sqrt(self.real * self.real + self.imaginary * self.imaginary)
        return Complex(re, 0.0)

    def __str__(self):
        if self.imaginary == 0:
            result = "%.2f+0.00i" % (self.real)
        elif self.real == 0:
            if self.imaginary >= 0:
                result = "0.00+%.2fi" % (self.imaginary)
            else:
                result = "0.00-%.2fi" % (abs(self.imaginary))
        elif self.imaginary > 0:
            result = "%.2f+%.2fi" % (self.real, self.imaginary)
        else:
            result = "%.2f-%.2fi" % (self.real, abs(self.imaginary))
        return result
