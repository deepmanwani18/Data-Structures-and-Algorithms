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
    // print Function for Fraction
    void printFraction() {
        cout << this->numerator << " / " << this->denominator << endl;    //this is optional here
    }
    //Simplify Function for Fraction i.e 6/8 to 3/4
    void simplify() {
        int gcd = 1;
        for(int i = 1; i <= min(this->denominator, this->numerator); i++) {
            if(this->numerator % i == 0 && this->denominator % i == 0) {
                gcd = i;
            }
        }
        this->numerator /= gcd;
        this->denominator /= gcd;
    }
    //Function for Adding two Fractions
    Fraction add(Fraction const &f1) {
        int denominator = this->denominator*f1.denominator;
        int numerator = (denominator / this->denominator)* (this->numerator) + (denominator / f1.denominator)*f1.numerator;
        Fraction f2(numerator, denominator);
        f2.simplify();
        return f2;

    }
    //Funtion for Multiplying two fractions
    Fraction multiply(Fraction const &f1) {
        int numerator = this->numerator*f1.numerator;
        int denominator = this->denominator*f1.denominator;
        Fraction f2(numerator, denominator);
        f2.simplify();
        return f2;
    }
    
    //Operator Overloading
    
    
    //Add operator(+)
    Fraction operator+(Fraction const &f1) {
        int denominator = this->denominator*f1.denominator;
        int numerator = (denominator / this->denominator)* (this->numerator) + (denominator / f1.denominator)*f1.numerator;
        Fraction f2(numerator, denominator);
        f2.simplify();
        return f2;

    }

    //Multiply operator(*)
    Fraction operator*(Fraction const &f1) {
        int numerator = this->numerator*f1.numerator;
        int denominator = this->denominator*f1.denominator;
        Fraction f2(numerator, denominator);
        f2.simplify();
        return f2;
    }
    // == operator
    bool operator==(Fraction const &f1) {
        if(this->numerator == f1.numerator && this->denominator == f1.denominator) {
            return true;
        } else {
            return false;
        }
    }
    //Pre increment(++a)
    Fraction& operator++() {
        this->numerator += this->denominator;
        simplify();
        return *this;
    }
    //Post Increment(a++) 
    Fraction operator++(int) {
        Fraction f2(numerator, denominator);
        numerator += denominator;
        simplify();
        f2.simplify();
        return f2;
    }

    // += operator(a += b)
    Fraction& operator+=(Fraction const &f2) {
        int lcm = this->denominator * f2.denominator;
        int num = (lcm/this->denominator)*this->numerator + (lcm/f2.denominator)*f2.numerator;
        this->numerator = num;
        this->denominator = lcm;
        simplify();
        return *this;
    }
};
