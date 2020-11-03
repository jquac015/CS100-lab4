#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

class Add : public Base {
    public:
        double val1;
        double val2;
        Add(double value1, double value2) : Base() { val1 = value1; val2 = value2;}
        virtual double evaluate() {return val1+val2;}
        virtual std::string stringify() { 
		if(val2<0){ return std::to_string(val1) + "+(" + std::to_string(val2) + ")"; }
		else{ return std::to_string(val1) + "+" + std::to_string(val2); }
	}
};

#endif //__MULT_HPP__

