#ifndef BLAKECOIN_H
#define BLAKECOIN_H

#include "miner.h"

extern int blakecoin_test(unsigned char *pdata, const unsigned char *ptarget, uint32_t nonce);
extern void blakecoin_regenhash(struct work *work);

#endif /* BLAKECOIN_H */