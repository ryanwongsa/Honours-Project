#include "ParticleInformation.h"

	ParticleInformation :: ParticleInformation()
	{
		type = "UNKNOWN";
		timebin = new float[27];
		std::fill(timebin, timebin+27,0);
		deviation=0;
		
	}

	ParticleInformation :: ParticleInformation(string t)
	{
		type = t;
		timebin = new float[27];
		std::fill(timebin, timebin+27,0);
		deviation=0;

	}

	void ParticleInformation :: setType(string t)
	{
		type = t; 
	}

	string ParticleInformation :: getType() const
	{
		return type;
	}

	void ParticleInformation :: addTimebin(int i, float number)
	{
		timebin[i]+=number;
	}

	float* ParticleInformation :: getTimeBin()
	{
		return timebin;
	}

	void ParticleInformation :: setNeuralNetworkPID(int value)
	{
		pid=value;
	}

	int ParticleInformation :: getNeuralNetworkPID() const
	{
		return pid;
	}

	void ParticleInformation :: setSumPID(int value)
	{
		sumPid=value;
	}

	int ParticleInformation :: getSumPID() const
	{
		return sumPid;
	}

	void ParticleInformation :: helper(bool h)
	{
		help =h;
	}

	bool ParticleInformation :: getHelper()
	{
		return help;
	}

	void ParticleInformation :: setTargetDeviation(float num)
	{
		deviation = num;
	}

	float ParticleInformation :: getTargetDeviation()
	{
		return deviation;
	}

	void ParticleInformation :: setTotalADC(int t)
	{
		totalADC =t;
	}

	int ParticleInformation :: getTotalADC()
	{
		return totalADC;
	}

	void ParticleInformation :: setMinThreshCountTB(int num)
	{
		minThreshCountTB=num;
	}

	int ParticleInformation :: getMinThreshCountTB()
	{
		return minThreshCountTB;
	}

	void ParticleInformation :: setMaxThreshCountTB(int num)
	{
		maxThreshCountTB=num;
	}

	int ParticleInformation :: getMaxThreshCountTB()
	{
		return maxThreshCountTB;
	}

	void ParticleInformation :: setNumClusters(int n)
	{
		numClusters=n;
	}

	int ParticleInformation :: getNumClusters()
	{
		return numClusters;
	}

	void ParticleInformation :: setHighestChargeTBindex(int n)
	{
		highestChargeTBindex=n;
	}

	int ParticleInformation :: getHighestChargeTBindex()
	{
		return highestChargeTBindex;
	}


	void ParticleInformation :: setPID4_electron(int e)
	{
		pidE=e;
	}

	int ParticleInformation :: getPID4_electron()
	{
		return pidE;
	}

	void ParticleInformation :: setPID4_pion(int p)
	{
		pidP=p;
	}

	int ParticleInformation :: getPID4_pion()
	{
		return pidP;
	}