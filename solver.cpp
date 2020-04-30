
#include "solver.hpp"


solver::RealVariable &solver::operator+ (double _num ,solver::RealVariable &RV){
    return RV;
}

solver::RealVariable &solver::operator+ (solver::RealVariable &RV , double _num){
    return RV;
}

solver::RealVariable &solver::operator+ (solver::RealVariable &RV1 , solver::RealVariable &RV2){
    return RV1;
}

solver::RealVariable &solver::operator- (double _num , solver:: RealVariable &RV){
    return RV;
}
solver::RealVariable &solver::operator- (solver::RealVariable &RV , double _num){
    return RV;
}
solver::RealVariable &solver::operator- (solver::RealVariable &RV1 , RealVariable &RV2){
    return RV1;
}

solver::RealVariable &solver::operator* (double _num , solver::RealVariable &RV){
    return RV;
}
solver::RealVariable &solver::operator* (solver::RealVariable &RV , double _num){
    return RV;
}
solver::RealVariable &solver::operator* (solver::RealVariable &RV1 , solver::RealVariable &RV2){
    return RV1;
}

solver::RealVariable &solver::operator/ (double _num , solver::RealVariable &RV){
    return RV;
}
solver::RealVariable &solver::operator/ (solver::RealVariable &RV , double _num){
    return RV;
}
solver::RealVariable &solver::operator/ (RealVariable &RV1 , RealVariable &RV2){
    return RV1;
}

solver::RealVariable &solver::operator^ (double _num , solver::RealVariable &RV){
    return RV;
}
solver::RealVariable &solver::operator^ (solver::RealVariable &RV , double _num){
    return RV;
}
solver::RealVariable &solver::operator^ (solver::RealVariable &RV1 , solver::RealVariable &RV2){
    return RV1;
}

solver::RealVariable &solver::operator== (double _num , solver::RealVariable &RV){
    return RV;
}
solver::RealVariable &solver:: operator== (solver::RealVariable &RV , double _num){
    return RV;
}
solver::RealVariable &solver::operator== (RealVariable &RV1 , solver::RealVariable &RV2){
    return RV2;
}
// };
////////////////complex////////////////////////////

    solver::ComplexVariable &solver::operator+(ComplexVariable &cv1 , ComplexVariable &cv2){
        return cv1;
    }
    // solver::ComplexVariable &solver::operator+(std::complex <double> &cv1 , std::complex <double> &cv2){
    //     return cv2;
    // }
    solver::ComplexVariable &solver::operator+(std::complex <double> cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator+( ComplexVariable &cv1 , std::complex <double> cv2){
        return cv1;
    }
    solver::ComplexVariable &solver::operator+(double cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator+( ComplexVariable &cv1 , double cv2){
        return cv1;
    }

    solver::ComplexVariable &solver::operator-(ComplexVariable &cv1 , ComplexVariable &cv2){
        return cv1;
    }
    // solver::ComplexVariable &solver::operator-(std::complex <double> &cv1 , std::complex <double> &cv2){
    //     return cv2;
    // }
    solver::ComplexVariable &solver::operator-(std::complex <double> &cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator-( ComplexVariable &cv1 , std::complex <double> &cv2){
        return cv1;
    }
    solver::ComplexVariable &solver::operator-(double cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator-( ComplexVariable &cv1 , double cv2){
        return cv1;
    }

    solver::ComplexVariable &solver::operator*(ComplexVariable &cv1 , ComplexVariable &cv2){
        return cv1;
    }
    // solver::ComplexVariable &solver::operator*(std::complex <double> &cv1 , std::complex <double> &cv2){
    //     return cv1;
    // }
    solver::ComplexVariable &solver::operator*(std::complex <double> &cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator*( ComplexVariable &cv1 , std::complex <double> &cv2){
        return cv1;
    }
    solver::ComplexVariable &solver::operator*(double cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator*( ComplexVariable &cv1 , double cv2){
        return cv1;
    }

    solver::ComplexVariable &solver::operator/(ComplexVariable &cv1 , ComplexVariable &cv2){
        return cv1;
    }
    // solver::ComplexVariable &solver::operator/(std::complex <double> &cv1 , std::complex <double> &cv2){
    //     return cv1;
    // }
    solver::ComplexVariable &solver::operator/(std::complex <double> &cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator/( ComplexVariable &cv1 , std::complex <double> &cv2){
        return cv1;
    }
    solver::ComplexVariable &solver::operator/(double cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator/( ComplexVariable &cv1 , double cv2){
        return cv1;
    }

    solver::ComplexVariable &solver::operator==(ComplexVariable &cv1 , ComplexVariable &cv2){
        return cv1;
    }
    // solver::ComplexVariable &solver::operator==(std::complex <double> &cv1 , std::complex <double> &cv2){
    //     return cv1;
    // }
    solver::ComplexVariable &solver::operator==(std::complex <double> &cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator==( ComplexVariable &cv1 , std::complex <double> &cv2){
        return cv1;
    }
    
    solver::ComplexVariable &solver::operator==(double cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator==(ComplexVariable &cv1 , double cv2){
        return cv1;
    }

    solver::ComplexVariable &solver::operator^(ComplexVariable &cv1 , ComplexVariable &cv2){
        return cv1;
    }
    // solver::ComplexVariable &solver::operator^(std::complex <double> &cv1 , std::complex <double> &cv2){
    //     return cv1;
    // }
    solver::ComplexVariable &solver::operator^(std::complex <double> &cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator^( ComplexVariable &cv1 , std::complex <double> &cv2){
        return cv1;
    }
    solver::ComplexVariable &solver::operator^(double cv1 , ComplexVariable &cv2){
        return cv2;
    }
    solver::ComplexVariable &solver::operator^( ComplexVariable &cv1 , double cv2){
        return cv1;
    }
// };
double solver::solve (solver::RealVariable &_rv1){
    return 0;
}
std::complex <double>  solver::solve(solver::ComplexVariable &cv){
    return 0;
}


// }