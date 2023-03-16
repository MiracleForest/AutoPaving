#include <llapi/LoggerAPI.h>

#include "header/version.h"
#include "header/globalVars.hpp"

extern Logger logger;

void PluginInit()
{
	logger.info("准备初始化AutoPaving！");
	if (!globalConfig.initConfig())
	{
		logger.error("初始化AutoPaving失败！");
	}
	logger.info("初始化AutoPaving完成！");
}
