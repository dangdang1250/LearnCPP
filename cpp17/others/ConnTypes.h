#pragma once
#include <cstdint>
typedef struct 
{
    uint32_t TypeOT;    // Point to point or multicast output type.
    uint32_t TypeTO;    // Point to point or multicast input type.
    uint32_t SizeOT;    // Size (in bytes) of output side of 
                                  // connection.
    uint32_t SizeTO;    // Size (in bytes) of input side of 
                                  // connection.
    uint32_t PriorityOT;// Low, High, Scheduled Urgent priority 
                                  // output side.
    uint32_t PriorityTO;// Low, High, Scheduled Urgent priority 
                                  // input side.
    uint32_t FixedVariableOT;     // Fixed/Variable sized connection output 
                                  // side.
    uint32_t FixedVariableTO;     // Fixed/Variable sized connection input 
                                  // side.
} ConntionAttributes;

