#pragma once

#include "Types.h"

void BulkSpeedTest ( pfHash hash, uint32_t seed );
void TinySpeedTest ( pfHash hash, int hashsize, int keysize, uint32_t seed, bool verbose, double & outCycles );

void BulkSpeedTestAggr(pfHash hash, uint32_t seed);
void TinySpeedTestAggr(pfHash hash, int hashsize, int keysize, uint32_t seed, bool verbose, double & outCycles);

void BulkSpeedTestIncr(uint32_t seed);
void TinySpeedTestIncr(int hashsize, int keysize, uint32_t seed, bool verbose, double & outCycles);

//-----------------------------------------------------------------------------
