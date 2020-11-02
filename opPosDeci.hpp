#ifndef __OPPOSDECI_HPP__
#define __OPPOSDECI_HPP__

#include "base.hpp"

class OpPosDeci : public Base {
    public:
        OpPosDeci(double value) : Base() { }
        virtual double evaluate() { return 5.4; }
        virtual std::string stringify() { return "5.4"; }
};

#endif //__OPPOSDECI_HPP__

