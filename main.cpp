#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double eyeHeightInches, distanceFeet, distanceInches, angleDegrees, treeHeightFeet;

  cout << "Enter your eye height in inches: ";
  cin >> eyeHeightInches;

  cout << "Enter distance from the tree (feet): ";
  cin >> distanceFeet;

  cout << "Enter distance from the tree (inches): ";
  cin >> distanceInches;

  cout << "Enter angle in degrees: ";
  cin >> angleDegrees;

  
  distanceFeet = distanceInches
  distanceFeet = distanceInches / 12.0;

  double angleRadians = angleDegrees * M_PI / 180.0;
  double tangentValue = tan(angleRadians);

  treeHeightFeet = (eyeHeightInches / 12.0) + distanceFeet * tangentValue;

  cout << "The height of the tree will be: " << treeHeightFeet << " feet." << endl;

  return 0;
}
