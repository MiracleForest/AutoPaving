#include "linePaving.h"


LinePaving::LinePaving(Vec3 startPosition, Vec3 endPosition):_startPosition(startPosition), _endPosition(endPosition)
{
}

LinePaving::~LinePaving()
{
}

void LinePaving::reset()
{
	_startPosition = Vec3();
	_endPosition = Vec3();
}
