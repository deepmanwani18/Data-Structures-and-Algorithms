using namespace std;
class Fraction {
    int numerator;
    int denominator;
    public:
    //Parameterized Constructor
    Fraction(int numerator, int denominator) {
        this->numerator = numerator;
        this->denominator = denominator;
    }
    //print Function for Fraction
    void printFraction() {
        cout << this->numerator << " / " << this->denominator << endl;    //this is optional here
    }
    void simplify() {
        for(int i = max(this->numerator, this->denominator) - 1 ; i >= 2 ; i--) {
            if(this->numerator % i == 0 && this->denominator % i == 0) {
                this->numerator /= i;
                this->denominator /= i;
                break;
            }
        }
    }
    //Adding two Fraction
    Fraction add(Fraction f1) {
        int denominator = this->denominator*f1.denominator;
        int numerator = (denominator / this->denominator)* (this->numerator) + (denominator / f1.denominator)*f1.numerator;
        Fraction f2(numerator, denominator);
        f2.simplify();
        return f2;

    }

};