#pragma once
#include "Tasks/ITask.h"
#include "Levels/Six.h"
#include <string>

namespace six { std::string stockSummary(std::vector<std::string>& lstOfArt, std::vector<std::string>& categories); }

class TaskStockSummary : public ITask
{
public:
    TaskStockSummary();

    void run() override;

    const std::string& getName() const noexcept override;
    const std::string& getDescription() const noexcept override;
private:
    std::string mName = "Help the bookseller!";
    std::string mDescription = "A bookseller has lots of books classified in 26 categories labeled A, B, C, ..., Z.\nEach book has a code of at least 3 characters. The 1st character of a code is a capital letter which defines the book category.\n"
            "In the bookseller's stocklist each code is followed by a space and by a positive integer, which indicates the quantity of books of this code in stock.";
};
