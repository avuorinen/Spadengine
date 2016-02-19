#include "TestScene.h"
#include <iostream>

namespace sge
{
	TestScene::TestScene(Spade* engine) : engine(engine)
	{
		std::cout << "test scene constructor says hello" << std::endl;

		// Shaders and stuff here
	}

	TestScene::~TestScene()
	{
		std::cout << "test scene terminator says hello" << std::endl;
	}

	void TestScene::update(float step)
	{
		std::cout << "test scene update rolling" << std::endl;
	}

	void TestScene::draw()
	{
		std::cout << "test scene drawing the most beautiful text ever!" << std::endl;
	}

	void TestScene::interpolate(float alpha)
	{

	}
};