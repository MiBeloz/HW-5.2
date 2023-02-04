#pragma once


#include "Parallelogram.h"


class Rhombus : public Parallelogram {
public:
	Rhombus(const int lengthABCD, const int angleAC, const int angleBD) : Parallelogram(lengthABCD, lengthABCD, angleAC, angleBD) {}

	std::string getName() override { return "Ромб"; }
};

