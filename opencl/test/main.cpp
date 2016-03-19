#include <cstdlib>
#include <unistd.h>
#include <iostream>
#include <cstdio>
#include <vector>
#include "CL/opencl.h"
using namespace std;
int main(int argc, char const *argv[])
{
	int err;
	cl_int errNum;
cl_uint numPlatforms;
cl_platform_id * platformIds;
cl_context context = NULL;
	//get platform numbers
errNum = clGetPlatformIDs(0, NULL, &numPlatforms);
platformIds = (cl_platform_id *)alloca(sizeof(cl_platform_id) * numPlatforms);
errNum = clGetPlatformIDs(numPlatforms, platformIds, NULL);
printf("Hello\n");
}