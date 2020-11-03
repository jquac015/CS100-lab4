#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"

class Sub : public Base {
    public:
        double a;
	double b;
        Sub(double first, double second) : Base() { a = first; b = second;}
        virtual double evaluate() {return (a - b);}
        virtual std::string stringify() { 
	    return std::to_string(a) + "-" + std::to_string(b); 
	}
};

#endif 
