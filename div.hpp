#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "base.hpp"

class Div : public Base {
    public:
        double val1;
        double val2;
        Div(double value1, double value2) : Base(){val1 = value1; val2 = value2;}
        virtual double evaluate() {
		if(val2==0){
			throw;
		}
		return val1/val2;}
        virtual std::string stringify() { 
		if(val2<0){ return std::to_string(val1) + "/(" + std::to_string(val2) + ")"; }
                else{return std::to_string(val1) + "/" + std::to_string(val2) + "";}
	}
};

#endif //__DIV_HPP__

