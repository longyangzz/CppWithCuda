#include "cudaPrint.cuh"
#include "cuda_runtime.h"
#include "stdio.h"
#include "helper_cuda.h"
#include "helper_functions.h"
void CUDA_Printf(int argc, char* argv[]) {
	printf("this is CUDA Printf");

    int devID;
    cudaDeviceProp deviceProps;
    // This will pick the best possible CUDA capable device
    devID = findCudaDevice(argc, (const char**)argv);

    // get device name
    cudaGetDeviceProperties(&deviceProps, devID);
    printf("CUDA device [%s]\n", deviceProps.name);
}