#pragma once
#include <icore/family/imacrofamily.h>
#include <icore/data/text/istring.hpp>
#include <nlohmann/json.hpp>
#include <llapi/LoggerAPI.h>
#include <filesystem>
#include <fstream>


class config
{
	using istring = _ISTDTEXT istring;
	using json = nlohmann::json;
public:

	config(const istring&);

	config();

	~config();

public:

	bool initConfig();

	bool checkConfig();

public:

	_CGETVF(json, Config, config);

	_CGETVF(json, ConfigFile, configFile);

	_CSETVF(config, json, Config, config);

	_CSETVF(config, istring, ConfigFile, configFile);

private:
	istring _configFile;
	json _config;
};







