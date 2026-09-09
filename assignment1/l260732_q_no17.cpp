#include<iostream>
using namespace std;

int q17() {
    double x1, y1, z1, x2, y2, z2, sqDist, dist;

    cout << "Quesiton 17. 3D Distance Calculator" << endl << endl;
    cout << "Enter data for first point:" << endl << "X: ";
    cin >> x1;
    cout << "Y: ";
    cin >> y1;
    cout << "Z: ";
    cin >> z1;
    cout << endl << "Enter data for second point:" << endl << "X: ";
    cin >> x2;
    cout << "Y: ";
    cin >> y2;
    cout << "Z: ";
    cin >> z2;

    sqDist = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1);

    dist = sqDist / 2; // letes compute the square root of it P:
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;
    dist = (dist + sqDist / dist) / 2.0;

    cout << endl << "Squared distance: " << sqDist << endl;
    cout << "Distance: " << dist << endl;
    return 0;
}