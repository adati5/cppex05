#pragma once
#include"getVolumeSurface.h"
void getVolumeSurface(BOX* box) {
	box->volume = box->x * box->y * box->z;
	box->surface = 2 * (box->x * box->y + box->x * box->z + box->y * box->z);
	return;
}
bool isSendable(BOX* box) {
	box->check = false;
	box->packSize = box->x + box->y + box->z;
	
	for (int sizeCheck = 60; sizeCheck <= 160; sizeCheck += 20) {
		if (box->packSize <= sizeCheck && box->check == false) {
			box->check = true;
			box->packSize = sizeCheck;
		}
	}
	return box->check;
}