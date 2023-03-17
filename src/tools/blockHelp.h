#pragma once
#include <icore/family/imacrofamily.h>
#include <icore/data/text/istring.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/BlockPos.hpp>
#include <llapi/mc/Block.hpp>
#include <nlohmann/json.hpp>


class BlockHelper
{
	using json = nlohmann::json;
	using istring = _ISTD data::text::istring;
public:

	BlockHelper();

	~BlockHelper();

public:

	/// <summary>
	/// 判断指定维度的坐标是否存在方块
	/// </summary>
	/// <param name="x">指定维度的x坐标</param>
	/// <param name="y">指定维度的y坐标</param>
	/// <param name="z">指定维度的z坐标</param>
	/// <param name="dimensionId">维度id，0是主世界</param>
	/// <returns>存在方块为true，否则为false</returns>
	static bool hasBlock(float x, float y, float z, int dimensionId = 0);

	/// <summary>
	/// 获取指定维度坐标的方块类型
	/// </summary>
	/// <param name="x">指定维度的x坐标</param>
	/// <param name="y">指定维度的y坐标</param>
	/// <param name="z">指定维度的z坐标</param>
	/// <param name="dimensionId">维度id，0是主世界</param>
	/// <param name="ifNullDefault">不存在方块时的默认字符串</param>
	/// <returns>有方块返回类型名称，没有方块返回默认字符串</returns>
	static istring getBlockType(float x, float y, float z, int dimensionId = 0, istring ifNullDefault = "");

	/// <summary>
	/// 在指定维度的坐标放置方块
	/// </summary>
	/// <param name="blockTypeName">方块的类型名称</param>
	/// <param name="x">指定维度的x坐标</param>
	/// <param name="y">指定维度的y坐标</param>
	/// <param name="z">指定维度的z坐标</param>
	/// <param name="dimensionId">维度id，0是主世界</param>
	/// <param name="tileData">方块数据，暂时未知，可能与方向有关</param>
	/// <param name="replace">是否替换原本的方块，为false时，存在方块则不放置</param>
	/// <returns>放置成功为true，否则为false</returns>
	static bool placeBlock(istring blockTypeName, float x, float y, float z, int dimensionId = 0, unsigned short tileData = 0, bool replace = true);

	/// <summary>
	/// 获取指定维度坐标的方块json数据
	/// </summary>
	/// <param name="x">指定维度的x坐标</param>
	/// <param name="y">指定维度的y坐标</param>
	/// <param name="z">指定维度的z坐标</param>
	/// <param name="ifNullDefault">不存在方块时的默认Json</param>
	/// <param name="dimensionId">维度id，0是主世界</param>
	/// <returns>有方块返回Json，没有方块返回默认Json</returns>
	static json getBlockJson(float x, float y, float z, json ifNullDefault, int dimensionId = 0);

	/// <summary>
	/// 获取指定维度坐标的方块json数据
	/// </summary>
	/// <param name="x">指定维度的x坐标</param>
	/// <param name="y">指定维度的y坐标</param>
	/// <param name="z">指定维度的z坐标</param>
	/// <param name="dimensionId">维度id，0是主世界</param>
	/// <returns>有方块返回Json，没有方块返回默认Json</returns>
	static json getBlockJson(float x, float y, float z, int dimensionId = 0);

	/// <summary>
	/// 从Json读入一个方块放置到世界里
	/// </summary>
	/// <param name="blockJson">方块Json</param>
	/// <returns>放置成功返回true，否则为false</returns>
	static bool loadBlockJson(json blockJson);

private:
};
