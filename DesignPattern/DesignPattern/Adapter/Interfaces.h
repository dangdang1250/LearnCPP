#pragma once
// This is interface
class IBird {
public:
	virtual void fly() {};
	virtual void makeSounds() {};
};

// target interface
// toyducks don't fly they just make
// squeak sound
class IToyDuck {
public:
	virtual void squeak() {}; // didn't use =0 because need to create object with this class
};
