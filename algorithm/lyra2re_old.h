#ifndef LYRA2REOLD_H
#define LYRA2REOLD_H

#include "miner.h"

extern int lyra2reold_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void lyra2reold_regenhash(struct work *work);

#endif /* LYRA2RE_H */
