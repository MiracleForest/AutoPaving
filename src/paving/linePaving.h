#pragma once
#include <icore/family/imacrofamily.h>
#include <llapi/mc/Vec3.hpp>

class LinePaving
{
public:

	LinePaving(Vec3 startPosition, Vec3 endPosition);

	~LinePaving();

public:

	void reset();

public:

	_CGETVF(Vec3, StartPosition, startPosition);
	_CSETVF(LinePaving, Vec3, StartPosition, startPosition);

	_CGETVF(Vec3, EndPosition, endPosition);
	_CSETVF(LinePaving, Vec3, EndPosition, endPosition);

private:
	Vec3 _startPosition;
	Vec3 _endPosition;
};
