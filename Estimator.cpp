//estimate pi_value

#include <iostream>
#include <random>
#include <iomanip>
#include <cmath>
using namespace std;

double estimator() {

	double x,y,test, pi_result;
	int npoints = 100000;
	int circle_count = 0;
	double MIN = 0.00;
	double MAX = 1.00;
	

	random_device rd;
    default_random_engine eng(rd());
    uniform_real_distribution<double> distr(MIN, MAX);
	
    //#pragma omp parallel for

	for (int i = 0; i < 100000; i++){
        
		x = (double)(distr(eng));

		y = (double)(distr(eng));

		test = pow((x-1),2)+pow((y-1),2);

    if (test<=1) {

     	circle_count++;
     }

	}

    cout << endl;

    pi_result = (4.0*circle_count)/npoints;

    return pi_result;
}

