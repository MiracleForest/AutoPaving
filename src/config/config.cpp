#include "../other/globalVars.hpp"
#include "../config/config.h"

extern Logger logger;

config::config(const istring& configFile)
	:_configFile("plugins/MiracleForest/AutoPaving/" + configFile)
{ }

config::config()
	:_configFile("")
{ }

config::~config()
{ }

bool config::initConfig()
{
	if (!checkConfig())
	{
		return false;
	}

	try
	{
		std::fstream configFile("plugins/MiracleForest/AutoPaving/config.json");
		std::string buffer;
		buffer.assign(std::istreambuf_iterator<char>(configFile), std::istreambuf_iterator<char>());
		_config = json::parse(buffer.data());
	}
	catch (...)
	{
		logger.error("配置文件已损坏的说！准备重置配置文件的说！");
		if (remove(_configFile.cStr()) != 0)
		{
			logger.error("重置配置文件失败了的说TAT！");
			return false;
		}
		else
		{
			if (checkConfig())
			{
				return false;
			}
		}
	}
	return true;
}

bool config::checkConfig()
{
	std::filesystem::create_directories("plugins/MiracleForest/AutoPaving/");
	std::filesystem::create_directories("plugins/MiracleForest/AutoPaving/PlayerDat/");

	std::ifstream f(this->_configFile.data());

	if (!f.good())
	{
		logger.warn("配置文件不存在的说！准备创建配置文件的说！⌓‿⌓");
		std::ofstream targetConfigfile(this->_configFile.data());
		if (!targetConfigfile.is_open())
		{
			logger.error("创建配置文件失败的说(˃ ⌑ ˂ഃ )！");
			return false;
		}
		targetConfigfile.close();
		logger.info("创建配置文件成功的说(｡>∀<｡)！");
		std::fstream file(this->_configFile.data());
		json buffJson = {};
		/***************
		*			   *
		*   配置内容   *
		*			   *
		****************/
		file << buffJson.dump(4);
		file.close();
	}
	f.close();
	return true;
}


