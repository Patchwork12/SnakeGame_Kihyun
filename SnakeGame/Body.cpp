#include "Body.h"

Body::Body()
{
	SetChar('Q');
}

Body::~Body()
{
}
void Body::SpawnBody()
{
    const int SizeX = 10;
    const int SizeY = 5;

    int Bx = rand() % SizeX;
    int By = rand() % SizeY;

    while (Bx == 0 && By == 0)
    {
        Bx = rand() % SizeX;
        By = rand() % SizeY;
    }

    SetPos({ Bx, By });
}


