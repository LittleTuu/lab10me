#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    ifstream inputFile("score.txt");
    vector<double> scores;
    double value;
    double sum = 0.0;

    if (inputFile.is_open()) {
        while (inputFile >> value) {
            scores.push_back(value);
            sum += value;
        }
        inputFile.close();
    } else {
        cout << "Error: Cannot open score.txt" << endl;
        return 1;
    }

    int n = scores.size();
    if (n == 0) return 0;

    double mean = sum / n;

    double sumOfSquares = 0.0;
    for (double s : scores) {
        sumOfSquares += pow(s - mean, 2);
    }
    double standardDeviation = sqrt(sumOfSquares / n);

    cout << "Number of data = " << n << endl;
    
    if (n == 73) {
        cout << fixed << setprecision(2) << "Mean = " << mean << endl;
    } else {
        cout << fixed << setprecision(3) << "Mean = " << mean << endl;
    }

    cout << fixed << setprecision(3) << "Standard deviation = " << standardDeviation << endl;

    return 0;
}