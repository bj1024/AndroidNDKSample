#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <signal.h>
#include <string.h>
#include <time.h>

#include <android/log.h>	// Android Logging

double monotnic_time()
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (double)(ts.tv_sec) + (double)(ts.tv_nsec) / 1000000000.0;
}

int main(int argc, char **argv)
{
	double curtime = monotnic_time();

	printf("%.6f Android NDK sample program.\n",curtime);

	__android_log_print(ANDROID_LOG_INFO,
				    "AndroidNDKSample",
					"%.6f Android NDK sample program",curtime);

	return 0;
}




