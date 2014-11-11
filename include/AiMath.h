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

//your right-hand-side (paramater) should be constant, you don't modify
//you DO return a new Vector2 without changing "this" one.
//NOTE: implement the operator+=() function first and simply use it to get your new vector2 for this
/*
e.g. Vector2 result = *this; //make a new vector and copy 'this'
     result += a_addVector; //do addition and assign to result
     return result;
*/
	Vector2 operator + (const Vector2& a_addVector);

	//No such thing as adding a vector by a scalar, just multiply
	//Vector2 operator + (const float& a_addScalar);

	/*return a reference to the calling object (*this) so you can chain your operation
	e.g. Vector2 v += v2 += v3;
	=> add v3 to v2 and assign value to v2, then add v2 to v and assign it to v
	*/
	Vector2& operator += (const Vector2& a_addVector);
	//Vector2 operator += (const float& a_addScalar);
	
	/*
	see above, same as addition
	*/
	Vector2 operator - (const Vector2& a_subVector);
	//Vector2 operator - (const float& a_subScalar);

	Vector2& operator -= (const Vector2& a_subVector);
	//Vector2 operator -= (const float& a_subScalar);

	/*
	as above, implement operatorAssignment (*=) first and use it for just operator
	*/
	Vector2 operator * (const float& a_Scalar);
	
	/*
	as above return a reference to calling object
	*/
	Vector2& operator *= (const float& a_Scalar);

	/*
	not per spec, but technically I suppose you could implement. why?
	*/
//	Vector2 operator / (const float& a_Scalar);
	//Vector2 operator /= (const float& a_Scalar);

	/*
	assignment should return reference to calling object so can chain
	e.g. a=b=c;
	*/
	Vector2& operator = (const float& a_Source);
	
	/*
	You compare to another Vector2 not a float
	if you overload == you should also do !=. Just use equality function.
	e.g.
	return !(*this == a_Source); //return the opposite of this == rhs
	*/
	//bool operator == (float& a_Source);
	bool operator == (const Vector2& rhs);
	
	bool operator!= (const Vector2& rhs);
};

#endif
