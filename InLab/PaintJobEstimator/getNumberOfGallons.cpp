int numberOfGallons(double wallArea){

  double doubleGallons;
  double remainder;
  int intGallons;

  doubleGallons = wallArea / WALL_AREA_PER_GALLON;

  intGallons = static_cast<int>(doubleGallons);

  remainder = doubleGallons - static_cast<int>(doubleGallons);

  if(remainder > 0){
    intGallons += 1;
  }

  return intGallons;
}