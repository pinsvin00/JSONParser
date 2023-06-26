#include <string>
#include "../value.hpp"
#include "util.h"
#include <iostream>
#ifndef PRNTR_H
#define PRNTR_H
namespace Asago {
    class ValuePrinter {
    public:
        bool prettyPrint = false;
        std::string stringifyValue(SEQL::Value * val);
        void printValue(SEQL::Value * val);
        ValuePrinter() = default;
    };
}

#endif