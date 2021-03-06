#pragma once
#include "Module.h"

static const ModuleInfo moduleInfos[] = {
	// icon, command, interval(ms)
	{"", "pamixer --get-volume | sed s/$/%/g", 50},
	{"", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g", 5000},
	{"", "date '+%b %d (%a)'", 60000},
	{"", "date '+%T'", 1000},
};
