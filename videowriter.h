#ifndef VIDEOWRITER_H
#define VIDEOWRITER_H

#include "quantum.h"

#define LAYOUT( \
	K17, K16, K15,      K14, KC_13, K12, K11,    K10, K27, K26,    K80, KC_97, K81, K96, \
	K25, K24, K23, K22, K21, K20, K37, K36, K35, K34, K33, K32, K31, K30, K95, \
	K47, K46, K45, K44, K43, K42, K41, K40, K57, K56, K55, K54, K53,      K94, \
	K07, K51, K50, K67, K66, K65, K64, K63, K62, K61, K60, K77,      K52, K93, \
	K06, K76, K75, K74, K73, K72, K71, K70, K87, K86, K85, K05, \
	K84,                     K83,                          K82 \
) { \
	{ KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, K05,   K06, K07 }, \
	{ K10,   K11,   K12,   K13,   K14,   K15,   K16, K17 }, \
	{ K20,   K21,   K22,   K23,   K24,   K25,   K26, K27 }, \
	{ K30,   K31,   K32,   K33,   K34,   K35,   K36, K37 }, \
	{ K40,   K41,   K42,   K43,   K44,   K45,   K46, K47 }, \
	{ K50,   K51,   K52,   K53,   K54,   K55,   K56, K57 }, \
	{ K60,   K61,   K62,   K63,   K64,   K65,   K66, K67 }, \
	{ K70,   K71,   K72,   K73,   K74,   K75,   K76, K77 }, \
	{ K80,   K81,   K82,   K83,   K84,   K85,   K86, K87 }, \
	{ KC_NO, KC_NO, KC_NO, K93,   K94,   K95,   K96, K97 }  \
}

#endif
