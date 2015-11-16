#pragma once
#include <iostream>
#include <algorithm>    // std::fill
using namespace std;

class ParticleInformation
{
	string type;
	float  *timebin;
	int pid;
	int sumPid;
	bool help;
	float deviation;

	int pidE;
	int pidP;

	// features
	int totalADC;
	int minThreshCountTB;
	int maxThreshCountTB;
	int numClusters;
	int highestChargeTBindex;

public:

	ParticleInformation();
	ParticleInformation(string type);
	void setType(string t);
	string getType() const;
	void addTimebin(int i, float number);
	float*  getTimeBin();
	void setNeuralNetworkPID(int value);
	int getNeuralNetworkPID() const;
	void setSumPID(int value);
	int getSumPID() const;
	void helper(bool h);
	bool getHelper();
	void setTargetDeviation(float num);
	float getTargetDeviation();

	void setTotalADC(int t);
	int getTotalADC();

	void setMinThreshCountTB(int num);
	int getMinThreshCountTB();

	void setMaxThreshCountTB(int num);
	int getMaxThreshCountTB();

	void setNumClusters(int n);
	int getNumClusters();

	void setHighestChargeTBindex(int n);
	int getHighestChargeTBindex();

	void setPID4_electron(int e);
	int getPID4_electron();

	void setPID4_pion(int p);
	int getPID4_pion();

};