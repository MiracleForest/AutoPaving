#pragma once
#include <icore/family/imacrofamily.h>
#include <icore/data/text/istring.hpp>
#include <llapi/mc/Vec3.hpp>
#include <llapi/mc/Block.hpp>
#include <nlohmann/json.hpp>

class StructureComposition
{
	using istring = _ISTD data::text::istring;
	using json = nlohmann::json;
public:

	StructureComposition(istring name);

	StructureComposition(Vec3 startPosition, Vec3 endPosition, int dimensionId);

	StructureComposition(istring name, Vec3 startPosition, Vec3 endPosition, int dimensionId);

	StructureComposition(istring name, Vec3 startPosition, Vec3 endPosition, int dimensionId, vector<istring> excludeBlockTypeNameList);

	StructureComposition(istring name, Vec3 startPosition, Vec3 endPosition, int dimensionId, vector<Block*> excludeBlockList);

	~StructureComposition();

public:

	int load() const;

	bool save2file(istring fileName) const;

	int loadFromFile(istring fileName);

	int count(vector<Block*> blockList) const;

	int count(vector<istring> blockTypeNameList) const;

	int remove(vector<Block*> blockList);

	int remove(vector<istring> blockTypeNameList);

	int addSelectedBlock(Block* selectedBlock);

	int addSelectedBlockList(vector<istring> selectedBlockList);

public:

	_CGETVF(istring, Name, name);
	_CSETVF(StructureComposition, istring, Name, name);

	_CGETVF(Vec3, StartPosition, startPosition);
	_CSETVF(StructureComposition, Vec3, StartPosition, startPosition);

	_CGETVF(Vec3, EndPosition, endPosition);
	_CSETVF(StructureComposition, Vec3, EndPosition, endPosition);

	_CGETVF(int, DimensionId, dimensionId);
	_CSETVF(StructureComposition, int, DimensionId, dimensionId);

	_CGETVF(vector<Block*>, ExcludeBlockList, excludeBlockList);
	_CSETVF(StructureComposition, vector<Block*>, ExcludeBlockList, excludeBlockList);

	_CGETVF(vector<istring>, ExcludeBlockTypeNameList, excludeBlockTypeNameList);
	_CSETVF(StructureComposition, vector<istring>, ExcludeBlockTypeNameList, excludeBlockTypeNameList);

	_CGETVF(vector<Block*>, SelectedBlockList, selectedBlockList);
	_CSETVF(StructureComposition, vector<Block*>, SelectedBlockList, selectedBlockList);

private:
	istring _name;
	Vec3 _startPosition;
	Vec3 _endPosition;
	int _dimensionId;
	vector<Block*> _excludeBlockList;
	vector<istring> _excludeBlockTypeNameList;
	vector<Block*> _selectedBlockList;
	json _loadedBlockJson = json::array();
};