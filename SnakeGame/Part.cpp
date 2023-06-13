#include "Part.h"

Part::Part()
{
	SetChar('B');
}

Part::~Part()
{
}

void Part::SetPrev(Part* _prev)
{
	Prev = _prev;
	SetPos(Prev->PrevPos);
}

void Part::Move()
{
	PrevPos = GetPos();
	SetPos(Prev->PrevPos);
}