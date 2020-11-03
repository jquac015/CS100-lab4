#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"

class Pow : public Base {
    public:
	double base;
	double power;
        Pow(double a, double b) : Base() { base = a * 1.0; power = b * 1.0; }
        virtual double evaluate() {
           if(base == 0) {
                if(power > 0){
                    return 0;
                } else {
                    throw;
                }
            }

	    if(power == 0 && base != 0) return 1;

	    double res = base * 1.0;
	    if(power > 0) {
  	        for(int i = 1; i < power; ++i){
	            res *= base;
	        }
	        return res; 			
	    } else {
		power *= -1;
                for(int i = 1; i < power; ++i){
                    res *= base;
                }
                return 1.0 / res; 
	    }
	}
        virtual std::string stringify() {
	    if(power >= 0){
		return std::to_string(base) + "**" + std::to_string(power);
	    } else {
		return std::to_string(base) + "**(" + std::to_string(power) + ")";
	    }
	}	 
};

#endif //__POW_HPP__
