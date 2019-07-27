#include "Interfaces.h"
#include "sparrow.h"
#include "BirdAdapter.h"
// 
BirdAdapter::BirdAdapter(IBird b) : bird(b) {}

void BirdAdapter::squeak() {
	// translate the methods appropriately
	bird.makeSounds();
}