#include "blockHelp.h"
// 方块帮助类实现
bool BlockHelp::hasBlock(float x, float y, float z, int dimensionId)
{
	return !!Level::getBlock(BlockPos(x, y, z), dimensionId);
}

istring BlockHelp::getBlockType(float x, float y, float z, int dimensionId, istring ifNullDefault)
{
	auto block = Level::getBlock(BlockPos(x, y, z), dimensionId);
	if (block)
	{
		return block->getTypeName();
	}
	else
	{
		return ifNullDefault;
	}
}

bool BlockHelp::placeBlock(istring blockTypeName, float x, float y, float z, int dimensionId, unsigned short tileData, bool replace)
{
	if (replace)
	{
		return Level::setBlock(BlockPos(x, y, z), dimensionId, Block::create(blockTypeName.data(), tileData));
	}
	else
	{
		if (!hasBlock(x, y, z, dimensionId))
		{
			return Level::setBlock(BlockPos(x, y, z), dimensionId, Block::create(blockTypeName.data(), tileData));
		}
	}
	return false;
}

json BlockHelp::getBlockJson(float x, float y, float z, json ifNullDefault, int dimensionId)
{
	auto block = Level::getBlock(BlockPos(x, y, z), dimensionId);
	if (block)
	{
		return
		{
			{"type",block->getTypeName()},
			{"x",x},
			{"y",y},
			{"z",z},
			{"dimensionId",dimensionId},
			{"tile",block->getTileData()}
		};
	}
	else
	{
		return ifNullDefault;
	}

}

json BlockHelp::getBlockJson(float x, float y, float z, int dimensionId)
{
	return getBlockJson(x, y, z,
		{
			{"type",""},
			{"x",x},
			{"y",y},
			{"z",z},
			{"dimensionId",dimensionId},
			{"tile",0}
		},
		dimensionId
	);
}

bool BlockHelp::loadBlockJson(json blockJson)
{
	auto type = blockJson["type"].get<std::string>();
	if (type != "")
	{
		return placeBlock(blockJson["type"].get<std::string>(),
			blockJson["x"].get<float>(),
			blockJson["y"].get<float>(),
			blockJson["z"].get<float>(),
			blockJson["dimensionId"].get<int>(),
			blockJson["tile"].get<unsigned short>(),
			true);
	}
	else
	{
		return false;
	}
}

BlockHelp::BlockHelp()
{
}

BlockHelp::~BlockHelp()
{
}
