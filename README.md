# Crypto-Sign-Synth: 
### Hardware Synthesis of Dilithium AES Digital Signature Scheme

### Project Overview
The primary objective of this project is to synthesize the Dilithium AES digital signature scheme into hardware while addressing various phases of optimization to achieve better efficiency in terms of both area and latency.

### Phase 1: Hardware Synthesis with Memory and Loop Optimizations
In this phase, we strive to correctly synthesize the Dilithium AES scheme into hardware. To achieve this, we follow these key steps:

* #### Memory Optimization:
    We replace dynamic memory allocation with static memory allocation to facilitate hardware synthesis, eliminating any dynamic memory allocation that cannot be directly synthesized into hardware.
* #### Loop Optimization: 
    Dynamic loops are replaced with statically determined loop bounds to enable hardware synthesis. This involves converting dynamic loops into fixed iterations using upper bounds.


### Phase 2: Area and Latency Optimization
In this phase, we focus on improving area efficiency and reducing latency in hardware implementation. We achieve this through two distinct optimization strategies:

* ### Area Optimization
    * #### Function Inlining:
      We replace function calls with the actual code of the function at the call site. This optimization reduces function call overhead and enhances execution speed.
    * #### Loop Unrolling:
      We duplicate loop bodies to decrease the number of loop iterations, thus eliminating loop overhead. This results in faster execution of loop-based operations.
    * #### Function Allocation Instance Set to 1:
      We ensure that only one instance of each function is created and reused throughout the code. This reduces memory overhead and enhances the efficiency of function invocation.

* ### Latency Optimization
  To reduce latency, we implement a pipeline architecture in the code. The pipeline architecture enables the concurrent execution of multiple stages of processing, reducing the overall latency. The following steps are undertaken:

    * The code is broken down into smaller, independent stages.
    * These stages are processed in parallel, making efficient use of system resources.
    * The pipeline architecture minimizes waiting times for dependent operations, thereby reducing overall latency and enhancing performance.
	
* ### EXPERIMENTAL SETUP
  The basic requirements for this project are as follows-
  * Windows OS
  * Vivado HLS 2019.2	
	
 
### Conclusion
This project represents an effort to synthesize the Dilithium AES digital signature scheme into hardware, with a focus on optimization for both area and latency.


