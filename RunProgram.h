#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <math.h>    
#include "ParticleInformation.h"
#include "SumPIDCalculation.h"
#include "DataRetrieval.h"
#include "NeuronLayers.h"
#include <stdlib.h>     /* atoi */
#include <stdio.h>      /* printf, fgets */
#include <cstdlib> 
#include <algorithm> 
#include <ctime>


using namespace std;

	vector<ParticleInformation> particles;
	int numHiddenLayers;
	int numHiddenNodes;
	int numInputs=27; //27
	int numOutputs = 2;

	void fillInputs(ParticleInformation &particle, NeuronLayers& neuronLayers);
	void fillTargets(ParticleInformation &particle, NeuronLayers& neuronLayers);
	float fillNeuralNetworkPIDs(NeuronLayers& neuronLayers, int begin, int end);
	float makeNeuralNetworkHistogram(int begin, int end, bool print);



