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
	
	// Place all the even and odd samples in their respective arrays
	for (int i = 0; i <= N/2; i++){
		even[i]=samples[2*i];
		odd[i]=samples[2*i+1];
	} 
	
	vector<complex<double>> DFT_even(size/2, 0);
	vector<complex<double>> DFT_odd(size/2, 0);

	// DFT of the odd and even samples
	DFT_even = FFT(even);
	DFT_odd = FFT(odd);	
	
	vector<complex<double>> freq_bins(size, 0);
	// Recompile the the results into frequency bins 
	for (k = 0; k < N/2 - 1; k++) {
		t = FFT_even[k]
		complex<double> twiddleFactor = polar(1.0, -2*pi*k/size) * DFT_odd[k]
		
		freq_bins[k] = t + twiddleFactor;
		
		// Use symmetry pattern to reduce number of computations; everything repeats after K > N/2
		freq_bins[k+size/2] = t - twiddleFactor;
	}
	
	return freq_bins;
}


int main() {
	cout << "initial commit";
}
