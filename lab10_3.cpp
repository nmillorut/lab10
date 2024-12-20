#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include<fstream>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string textline;
    int i = 0;
    double U,sum,a,N;
    while (getline(source,textline)){
        i++;
        sum += atof(textline.c_str());
        N += pow(atof(textline.c_str()),2);
	}
        U = sum/i;
        a = sqrt((N/i)-pow(U,2));

    cout << "Number of data = "<< i << endl;
    cout << setprecision(3);
    cout << "Mean = "<< U << endl;
    cout << "Standard deviation = "<< a << endl;
    return 0;
}