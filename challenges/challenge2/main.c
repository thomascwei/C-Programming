#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  double height, width, perimeter = 0.0, area_value = 0.0;

  height = atof(argv[1]);
  width = atof(argv[2]);
  perimeter = (height + width) * 2;
  area_value = height * width;
  printf("height:%f,weight:%f,perimeter:%f\n", height, width, perimeter);
  printf("height:%.2f,weight:%.2f,area_value:%.2f\n", height, width,
         area_value);

  return 0;
}
