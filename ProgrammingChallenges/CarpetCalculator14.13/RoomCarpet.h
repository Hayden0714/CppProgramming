#pragma once
#ifndef ROOM_CARPET_H
#define ROOM_CARPET_H

#include "RoomDimensions.h"

class RoomCarpet
{
  RoomDimension dimensions;
  double cost;

public:
  RoomCarpet(RoomDimension rd, double c)
  {
    dimensions = rd;
    cost = c;
  }

  double getTotalCost()
  {
    double area = dimensions.getArea();
    return area * cost;
  }
};

#endif