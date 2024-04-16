#include "caterpillar.h"

#define MAX_HEIGHT 1000

static int count = 0;

int calculate_days(int H, int S1, int S2) {
	const int DISTANCE_FORWARD = S1;
	const int DISTANCE_BACKWARD = S2;

	if (H > MAX_HEIGHT || S1 <= S2) {
		return -1;
	}

	int distance = H;
	int days = 0;

	while (distance > 0) {
		distance -= DISTANCE_FORWARD;

		if (distance < 0) {
			break;
		}

		distance += DISTANCE_BACKWARD;
		days++;
	}

	count++;

	return days;
}