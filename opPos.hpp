#ifndef __OPPOS_HPP__
#define __OPPOS_HPP__

#include "base.hpp"

class OpPos : public Base {
    public:
        OpPos(double value) : Base() { }
        virtual double evaluate() { return 1; }
        virtual std::string stringify() { return "1"; }
};

#endif //__OP_HPP__
