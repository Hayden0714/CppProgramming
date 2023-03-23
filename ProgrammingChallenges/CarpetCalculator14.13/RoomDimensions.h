#pragma once
#ifndef ROOM_DIMENSIONS_H
#define ROOM_DIMENSIONS_H

#include "FeetInches.h"

class RoomDimension
{
  FeetInches length;
  FeetInches width;
  FeetInches area;

public:
  RoomDimension()
  {
  }
  RoomDimension(FeetInches len, FeetInches w)
  {
    length = len;
    width = w;
    area = len.multiply(w);
  }

  // copy constructor
  RoomDimension(const RoomDimension &obj)
  {
    length = obj.length;
    width = obj.width;
    area = obj.area;
  }

  FeetInches getArea()
  {
    return area;
  }
};

#endif