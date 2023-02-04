#pragma once


#include "Rhombus.h"


class Square : public Rhombus {
public:
	Square(const int lengthABCD) : Rhombus(lengthABCD, 90, 90) {}

	std::string getName() override { return "Квадрат"; }
};

