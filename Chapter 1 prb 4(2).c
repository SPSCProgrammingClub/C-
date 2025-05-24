#include <stdio.h>
#define PI 3.141592

int main() {
  double radius, height, volume; // we assume that the height and radius can be an integer or be a float so we defined the variable as double
  printf("Please enter the height of the cylinder:"); // output prompt
  scanf("%lf", &height); //takes the user input for height
  printf("Please enter the radius of the cylinder:"); // output prompt
  scanf("%lf", &radius); //takes the user input for radius
  volume = PI*radius*radius*height; //formula of the volume of a cylinder
  printf("The volume of the cylinder is: %lf", volume); // prints the answer
  return 0;
}
  
