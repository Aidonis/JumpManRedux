#ifndef _THE_MATH_H_
#define _THE_MATH_H_

#include <math.h>
#include <iostream>

class Vector2
{
public:
	Vector2();
	~Vector2();

	Vector2(float a_x, float a_y);

	float x, y;

	Vector2 operator + (Vector2& a_addVector);
	Vector2 operator + (const float& a_addScalar);

	Vector2 operator += (Vector2& a_addVector);
	Vector2 operator += (const float& a_addScalar);

	Vector2 operator - (Vector2& a_subVector);
	Vector2 operator - (const float& a_subScalar);

	Vector2 operator -= (Vector2& a_subVector);
	Vector2 operator -= (const float& a_subScalar);

	Vector2 operator * (const float& a_Scalar);
	Vector2 operator *= (const float& a_Scalar);

	Vector2 operator / (const float& a_Scalar);
	Vector2 operator /= (const float& a_Scalar);

	Vector2 operator = (const float& a_Source);
	bool operator == (const float& a_Source);

};

#endif