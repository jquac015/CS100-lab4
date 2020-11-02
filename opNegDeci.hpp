#ifndef __OPNEGDECI_HPP__
#define __OPNEGDECI_HPP__

#include "base.hpp"

class OpNegDeci : public Base {
    public:
        OpNegDeci(double value) : Base() { }
        virtual double evaluate() { return -3.7; }
        virtual std::string stringify() { return "-3.7"; }
};

#endif //__OP_HPP__

