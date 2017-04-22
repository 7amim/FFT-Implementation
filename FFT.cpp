#include <iostream>
#include <fstream>
#include <vector>
#include <complex>
using namespace std; 

vector<complex<double>> FFT(vector<complex<double>> &samples) {
	int size = samples.size();
	
	if (N == 1)
		return samples;
	
	vector<complex<double>> even(size/2, 0);
	vector<complex<double>> odd(size/2, 0);
	
	for (int i = 0; i <= N/2; i++){
		even[i]=samples[2*i];
		odd[i]=samples[2*i+1];
	} 
	
	vector<complex<double>> FFT_even(size/2, 0);
	vector<complex<double>> FFT_odd(size/2, 0);
	FFT_even = FFT(even);
	FFT_odd = FFT(odd);	
	
	// recompile the the results into frequencybins 
}


int main() {
	cout << "initial commit";
}
