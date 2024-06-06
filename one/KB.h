#pragma once
#include "quantum.h"
/* K03,K04,K05,K06,K04,K24 ENCODER-A-B */

#define LAYOUT( \
	 K00, K01, K02,		\
	 K10, K11, K12		\
 ) { \
	 { K00, K01, K02},	\
	 { K10, K11, K12}	\
 }
