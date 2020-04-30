
#include <iostream>
#include <complex>

namespace solver{
class RealVariable{
    private:
    double num;

    public:
RealVariable(){
    (*this).num=0;
}
RealVariable(double _num){
num=_num;
}
    

friend RealVariable& operator+ (double _num1 , RealVariable &RV1);/////
friend RealVariable& operator+ (RealVariable &RV , double _num);
friend RealVariable& operator+ (RealVariable &RV1 , RealVariable &RV2);

friend RealVariable& operator- (double _num , RealVariable &RV);
friend RealVariable& operator- (RealVariable &RV , double _num);
friend RealVariable& operator- (RealVariable &RV1 , RealVariable &RV2);

friend RealVariable& operator* (double _num , RealVariable &RV);
friend RealVariable& operator* (RealVariable &RV , double _num);
friend RealVariable& operator* (RealVariable &RV1 , RealVariable &RV2);

friend RealVariable& operator/ (double _num , RealVariable &RV);
friend RealVariable& operator/ (RealVariable &RV , double _num);
friend RealVariable& operator/ (RealVariable &RV1 , RealVariable &RV2);

friend RealVariable& operator^ (double _num , RealVariable &RV);
friend RealVariable& operator^ (RealVariable &RV , double _num);
friend RealVariable& operator^ (RealVariable &RV1 , RealVariable &RV2);

friend RealVariable& operator== (double _num , RealVariable &RV);
friend RealVariable& operator== (RealVariable &RV , double _num);
friend RealVariable& operator== (RealVariable &RV1 , RealVariable &RV2);
};
////////////////complex////////////////////////////

    class ComplexVariable{
        private:
        std::complex <double> x;
        public:
        ComplexVariable(){
            (*this).x=(0);
        }
        ComplexVariable(std::complex <double> _x){
        *this = _x;
        }
        
    friend ComplexVariable& operator+(ComplexVariable &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator+(std::complex <double> cv1 , std::complex <double> cv2);
    friend ComplexVariable& operator+(std::complex <double> cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator+( ComplexVariable &cv1 , std::complex <double> cv2);
    friend ComplexVariable& operator+(double cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator+( ComplexVariable &cv1 , double cv2);

    friend ComplexVariable& operator-(ComplexVariable &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator-(std::complex <double> &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator-(std::complex <double> &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator-( ComplexVariable &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator-(double cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator-( ComplexVariable &cv1 , double cv2);

    friend ComplexVariable& operator*(ComplexVariable &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator*(std::complex <double> &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator*(std::complex <double> &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator*( ComplexVariable &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator*(double cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator*( ComplexVariable &cv1 , double cv2);

    friend ComplexVariable& operator/(ComplexVariable &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator/(std::complex <double> &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator/(std::complex <double> &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator/( ComplexVariable &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator/(double cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator/( ComplexVariable &cv1 , double cv2);

    friend ComplexVariable& operator==(ComplexVariable &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator==(std::complex <double> &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator==(std::complex <double> &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator==( ComplexVariable &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator==(double cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator==(ComplexVariable &cv1 , double cv2);

    friend ComplexVariable& operator^(ComplexVariable &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator^(std::complex <double> &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator^(std::complex <double> &cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator^( ComplexVariable &cv1 , std::complex <double> &cv2);
    friend ComplexVariable& operator^(double cv1 , ComplexVariable &cv2);
    friend ComplexVariable& operator^( ComplexVariable &cv1 , double cv2);
};
double solve (solver::RealVariable &_rv1);
std::complex <double>  solve(solver::ComplexVariable &cv);



}