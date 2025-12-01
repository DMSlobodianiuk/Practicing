#pragma once
#include <string>
#include <vector>
#include <functional>

class ITask
{
public:
	virtual ~ITask() = default;
    virtual int run() = 0;

    virtual const std::string& getName() const noexcept = 0;
    virtual const std::string& getDescription() const noexcept = 0;

};
