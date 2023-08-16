#pragma once
#include <cmath>
#include <string>

class fVector {
public:

	//Hexagonal coordinant system: q + r + s = 0
	float q;
	float h;//"imaginary q", used to fake height
	float r;
	float s;

	//constructor
	fVector(float _q = 0, float _r = 0, float _s = 0, float _h = 0) { q = _q; r = _r; s = _s; h = _h; }

	//general operators

	fVector operator+ (fVector& other) { return fVector(q + other.q, r + other.r, s + other.s); }
	fVector operator- (fVector& other) { return fVector(q - other.q, r - other.r, s - other.s); }
	fVector operator* (fVector& other) { return fVector(q * other.q, r * other.r, s * other.s); }
	fVector operator* (const float& other) { return fVector(q * other, r * other, s * other); }
	fVector operator* (const int& other) { float f = float(other); return fVector(q * f, r * f, s * f); }

	//self operators

	void operator= (const fVector& other) { q = other.q; r = other.r; s = other.s; }
	void operator+= (fVector& other) { q += other.q; r += other.r; s += other.s; }
	void operator-= (fVector& other) { q -= other.q; r -= other.r; s -= other.s; }
	void operator*= (fVector& other) { q *= other.q; r *= other.r; s *= other.s; }
	void operator*= (const float& other) { q *= other; r *= other; s *= other; }
	void operator*= (const int& other) { float f = float(other); q *= f; r *= f; s *= f; }

	//return the normalised vector
	fVector operator+ ();

	//normalise this vector
	void operator++();

	//return the vector magnitude
	float operator- ();

	//to string
	std::string toString();

	//valid coordinant?
	bool validate() { return (q + r + s) == 0; }
};

class icVector {
public:
	int x;
	int y;

	icVector(int _x = 0, int _y = 0) { x = _x; y = _y; }
};

class ihVector{
	public:
	int q;
	int r;
	int s;

	ihVector(int _q = 0, int _r = 0, int _s =0){q = _q; r = _r; s = _s;}
}