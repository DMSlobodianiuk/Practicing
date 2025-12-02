#pragma once
#include "Tasks/ITask.h"
#include "Levels/Five.h"
#include <string>

namespace five { unsigned long long perimeter(int n); }

class TaskPerimeter : public ITask
{
public:
    TaskPerimeter();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Perimeter of squares in a rectangle";
    std::string mDescription = "The drawing shows 6 squares the sides of which have a length of 1, 1, 2, 3, 5, 8. It's easy to see that the sum of the perimeters of these squares is : 4 * (1 + 1 + 2 + 3 + 5 + 8) = 4 * 20 = 80.";
};
