#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <functional>
#include <stdexcept>

namespace helper
{

    class InputError : public std::runtime_error
    {
    public:
        using std::runtime_error::runtime_error;
    };

    class InputReader
    {
    public:
        InputReader(std::istream& in = std::cin, std::ostream& out = std::cout) noexcept;

        double readDouble(const std::string& prompt = "");
        int readInt(const std::string& prompt = "");
        long readLong(const std::string& prompt = "");
        long long readLongLong(const std::string& prompt = "");
        unsigned readUnsigned(const std::string& prompt = "");
        std::string readLine(const std::string& prompt = "");

        std::vector<double> readDoubleVectorFromLine(const std::string& prompt = "");
        std::vector<std::string> readStringVectorFromLine(const std::string& prompt = "");

        bool tryReadDouble(double& out, const std::string& prompt = "");
        bool tryReadInt(int& out, const std::string& prompt = "");
        bool tryReadLong(long& out, const std::string& prompt = "");
        bool tryReadLongLong(long long& out, const std::string& prompt = "");
        bool tryReadUnsigned(unsigned& out, const std::string& prompt = "");
        bool tryReadLine(std::string& out, const std::string& prompt = "");
        bool tryReadDoubleVectorFromLine(std::vector<double>& out, const std::string& prompt = "");
        bool tryReadStringVectorFromLine(std::vector<std::string>& out, const std::string& prompt = "");

    private:
        std::istream& m_in;
        std::ostream& m_out;

        std::vector<std::string> splitTokens(const std::string& s);
        template<typename T>
        T parseNumber(const std::string& s);
    };

}
