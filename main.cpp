#include <iostream>
#include <fstream>
#include "vector3d.h"

using namespace std;
int readFile(const char *filename, Vector3D &v1, Vector3D &v2){
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Failed to open file." << std::endl;
        return -1;
    }
    inputFile >> v1 >> v2;
    return 0;
}
void doTest(const char *filename){
    Vector3D v1, v2;

    cout << "---------------------------" << endl;
    cout << filename << endl;

    if(-1 == readFile(filename, v1, v2))
        return;

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;

    cout << "-v1: " << -v1 << endl;
    cout << "-v2: " << -v2 << endl;
    cout << "v1 + v2 = " << v1 + v2 << endl;
    cout << "v1 - v2 = " << v1 - v2 << endl;
    cout << "v1 * v2 = " << v1 * v2 << endl;
    cout << "v1 * -v2 = " << v1 * -v2 << endl;
    cout << "-v1 * v2 = " << -v1 * v2 << endl;
    cout << "-v1 * -v2 = " << -v1 * -v2 << endl;

    cout << "v1 * 2 = " << v1 * 2 << endl;
    cout << "v2 / 2 = " << v2 / 2 << endl;

    cout << "2 * v1 = " << 2 * v1 << endl;
    cout << "2 / v2 = " << 2 / v2 << endl;
}

int main(int argc, const char *argv[]) {
    if(argc == 2){
        switch(atoi(argv[1])){
            case 1:
                doTest("Test/input1.txt");
                return 0;
            case 2:
                doTest("Test/input2.txt");
                return 0;
            case 3:
                doTest("Test/input3.txt");
                return 0;
        }
    }
    doTest("Test/input1.txt");
    doTest("Test/input2.txt");
    doTest("Test/input3.txt");

    return 0;
}
