#include "blockHelp.h"
#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockPos.hpp>
#include <llapi/mc/Block.hpp>
using json = nlohmann::json;
using istring = _ISTD data::text::istring;


BlockHelper::BlockHelper()
{ }

BlockHelper::~BlockHelper()
{ }


bool BlockHelper::hasBlock(float x, float y, float z, int dimensionId)
{
	return !!Level::getBlock(BlockPos(x, y, z), dimensionId);
}

istring BlockHelper::getBlockType(float x, float y, float z, int dimensionId, istring ifNullDefault)
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

bool BlockHelper::placeBlock(istring blockTypeName, float x, float y, float z, int dimensionId, unsigned short tileData, bool replace)
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

json BlockHelper::getBlockJson(float x, float y, float z, json ifNullDefault, int dimensionId)
{
	auto block = Level::getBlock(BlockPos(x, y, z), dimensionId);
	if (block)
	{
		return
		{
			{"type", block->getTypeName()},
			{"x", x},
			{"y", y},
			{"z", z},
			{"dimensionId", dimensionId},
			{"tile", block->getTileData()},
			{"nbt", block->getNbt()->toPrettySNBT()}
		};
	}
	else
	{
		return ifNullDefault;
	}

}

json BlockHelper::getBlockJson(float x, float y, float z, int dimensionId)
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

bool BlockHelper::loadBlockJson(json blockJson)
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

void BlockHelper::eachBlock(float startX, float startY, float startZ, float endX, float endY, float endZ, bool(*checkIsSaftBlock)(float x, float y, float z))
{
	bool keepOn = true;
	int xDirection = endX >= startX ? 1 : -1;
	int yDirection = endY >= startY ? 1 : -1;
	int zDirection = endZ >= startZ ? 1 : -1;
	for (float i = 0; i < abs(endX - startX) && keepOn; i++)
	{
		for (float j = 0; j < abs(endY - startY) && keepOn; j++)
		{
			for (float k = 0; k < abs(endZ - startZ) && keepOn; k++)
			{
				keepOn = checkIsSaftBlock(startX + i * xDirection, startY + i * yDirection, startZ + i * zDirection);
			}
		}
	}
}
