﻿#pragma once


#include "Triangle.h"


class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(const int lengthAC, const int lengthB, const int angleAC, const int angleB) : Triangle(lengthAC, lengthB, lengthAC, angleAC, angleB, angleAC) {}

	std::string getName() override { return "Равнобедренный треугольник"; }
};

