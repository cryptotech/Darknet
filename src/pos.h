// Copyright (c) 2015-2016 The BlackCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef DARKNET_POS_H
#define DARKNET_POS_H

#include "chainparams.h"

#include <stdint.h>

class CBlockIndex;
class uint256;

/** Compute the hash modifier for proof-of-stake */
uint256 ComputeStakeModifier(const CBlockIndex* pindexPrev, const uint256& kernel);

// Check whether the coinstake timestamp meets protocol
bool CheckCoinStakeTimestamp(int64_t nTimeBlock, int64_t nTimeTx, const CBlock& block);
bool CheckStakeBlockTimestamp(int64_t nTimeBlock, const CBlock& block);

#endif // DARKNET_POS_H
