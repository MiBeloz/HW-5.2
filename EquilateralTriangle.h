#pragma once


#include "IsoscelesTriangle.h"


class EquilateralTriangle : public IsoscelesTriangle {
public:
	EquilateralTriangle(const int lengthABC) : IsoscelesTriangle(lengthABC, lengthABC, 60, 60) {}

	std::string getName() override { return "Равносторонний треугольник"; }
};

