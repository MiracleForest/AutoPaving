#include "structureComposition.h"
#include "../../tools/blockHelp.h"

StructureComposition::StructureComposition(istring name)
	:_name(name), _startPosition(Vec3()), _endPosition(Vec3()), _dimensionId(0)
{
}

StructureComposition::StructureComposition(Vec3 startPosition, Vec3 endPosition, int dimensionId)
	:_name(""), _startPosition(startPosition), _endPosition(endPosition), _dimensionId(dimensionId)
{
}

StructureComposition::StructureComposition(istring name, Vec3 startPosition, Vec3 endPosition, int dimensionId)
	:_name(name), _startPosition(startPosition), _endPosition(endPosition), _dimensionId(dimensionId)
{
}

StructureComposition::StructureComposition(istring name, Vec3 startPosition, Vec3 endPosition, int dimensionId, vector<Block*> excludeBlockList)
	:_name(name), _startPosition(startPosition), _endPosition(endPosition), _dimensionId(dimensionId), _excludeBlockList(excludeBlockList)
{
}

StructureComposition::StructureComposition(istring name, Vec3 startPosition, Vec3 endPosition, int dimensionId, vector<istring> excludeBlockTypeNameList)
	:_name(name), _startPosition(startPosition), _endPosition(endPosition), _dimensionId(dimensionId), _excludeBlockTypeNameList(excludeBlockTypeNameList)
{
}

StructureComposition::~StructureComposition()
{
}

bool addBlockJson(float x, float y, float z)
{
	return true;
}

int StructureComposition::load() const
{
	BlockHelper::eachBlock(_startPosition.x, _startPosition.y, _startPosition.z, _endPosition.x, _endPosition.y, _endPosition.z, [](float x, float y, float z) {
		return true;
		});
	return 0;
}

bool StructureComposition::save2file(istring fileName) const
{
	return false;
}

int StructureComposition::loadFromFile(istring fileName)
{
	return 0;
}

int StructureComposition::count(vector<Block*> blockList) const
{
	return 0;
}

int StructureComposition::count(vector<istring> blockTypeNameList) const
{
	return 0;
}

int StructureComposition::remove(vector<Block*> blockList)
{
	return 0;
}

int StructureComposition::remove(vector<istring> blockTypeNameList)
{
	return 0;
}

int StructureComposition::addSelectedBlock(Block* selectedBlock)
{
	_selectedBlockList.push_back(selectedBlock);
	return 1;
}

int StructureComposition::addSelectedBlockList(vector<istring> selectedBlockList)
{
	//_selectedBlockList.insert(_selectedBlockList.end(), selectedBlockList.begin(), selectedBlockList.end());
	return 0;
}