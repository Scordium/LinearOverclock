#pragma once

#include "Modules/ModuleManager.h"

class FLinearOverclockModule : public FDefaultGameModuleImpl {
public:
	virtual void StartupModule() override;

	virtual bool IsGameModule() const override { return true; }
};