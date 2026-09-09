#include<iostream>
using namespace std;

int q5() {
    double width, length, pathWidth, fenceRate, paveRate, turfRate;
    // fenceRate is in per metre, the other two rates are per square metre
    double area, perimeter, innerArea, pathArea, fenceCost, paveCost, turfCost, totalCost;

    cout << "Question 5: The Garden Designer" << endl << endl;
    cout << "Enter garden length: ";
    cin >> length;
    cout << "Enter garden width: ";
    cin >> width;
    cout << "Enter path width: ";
    cin >> pathWidth;
    cout << "Enter rate per metre of fence: ";
    cin >> fenceRate;
    cout << "Enter rate per metre square of paving: ";
    cin >> paveRate;
    cout << "Enter rate per metre square of turf: ";
    cin >> turfRate;

    area = width * length;
    perimeter = 2 * (width + length);
    innerArea = (length - 2 * pathWidth) * (width - 2 * pathWidth);
    pathArea = area - innerArea;
    fenceCost = perimeter * fenceRate;
    paveCost = pathArea * paveRate;
    turfCost = innerArea * turfRate;
    totalCost = fenceCost + paveCost + turfCost;

    cout << endl << "Area of garden: " << area;
    cout << endl << "Area of lawn: " << innerArea;
    cout << endl << "Area of path: " << pathArea;
    cout << endl << "Perimeter: " << perimeter;
    cout << endl << "Total cost: " << totalCost << endl;
    return 0;
}