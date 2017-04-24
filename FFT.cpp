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
	
	vector<complex<double>> freq_bins(size, 0);
	// recompile the the results into frequencybins 
	for (k = 0; k < N/2 - 1; k++) {
		t = FFT_even[k]
		complex<double> complexFactor = polar(1.0, -2*pi*k/size) * FFT_odd[k]
		
		freq_bins[k] = t + complexFactor;
		freq_bins[k+size/2] = t - complexFactor;
	}
	
	return freq_bins;
}


int main() {
	cout << "initial commit";
}
