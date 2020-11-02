#ifndef __OPNEG_HPP__
#define __OPNEG_HPP__

#include "base.hpp"

class OpNeg : public Base {
    public:
        OpNeg(double value) : Base() { }
        virtual double evaluate() { return -1; }
        virtual std::string stringify() { return "-1"; }
};

#endif //__OP_HPP__
