#pragma once


#include "Quadrilateral.h"


class Parallelogram : public Quadrilateral {
public:
	Parallelogram(const int lengthAC, const int lengthBD, const int angleAC, const int angleBD) : Quadrilateral(lengthAC, lengthBD, lengthAC, lengthBD, angleAC, angleBD, angleAC, angleBD) {}

	std::string getName() override { return "Параллелограмм"; }
};

