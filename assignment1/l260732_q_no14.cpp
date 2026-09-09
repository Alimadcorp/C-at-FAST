#include<iostream>
using namespace std;

int q14() {
    int fileSize, packetSize, packets, remaining;
    
    cout << "Question 14. Network Packet Fragmentation" << endl << endl;
    cout << "Enter message size: ";
    cin >> fileSize;
    cout << "Enter packet size: ";
    cin >> packetSize;

    packets = fileSize / packetSize;
    remaining = fileSize % packetSize;

    cout << endl << "Total packets: " << packets;
    cout << endl << "Leftover: " << remaining << endl;
    return 0;
}