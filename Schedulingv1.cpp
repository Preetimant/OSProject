#include <bits/stdc++.h>
using namespace std;

struct Process_Data
{
	int Num;
	int Pid;  //Process Id
	int A_time; //Process Arrival Time
	int B_time; //Process Bruest Time
	int Priority; //Process Priority
	int F_time; //Process Finish Time
	int R_time; //Process Remaining  Time During Execution
	int W_time; //Waiting Time
	int S_time; //Process start Time
	int Res_time;

};

struct Process_Data current;
typedef struct Process_Data P_d ;


