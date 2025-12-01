#include "Helper/Reader.h"
#include <sstream>
#include <iostream>
#include <limits>
#include <cctype>
#include <algorithm>

namespace helper
{

    InputReader::InputReader(std::istream& in, std::ostream& out) noexcept
        : m_in(in), m_out(out)
    {
    }

    std::string InputReader::readLine(const std::string& prompt)
    {
        if (!prompt.empty()) m_out << prompt;
        std::string line;
        if (!std::getline(m_in, line))
        {
            throw InputError("Input closed or error while reading line");
        }
        return line;
    }

    bool InputReader::tryReadLine(std::string& out, const std::string& prompt)
    {
        try
        {
            out = readLine(prompt);
            return true;
        }
        catch (...)
        {
            return false;
        }
    }

    double InputReader::readDouble(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        return parseNumber<double>(s);
    }

    int InputReader::readInt(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        return parseNumber<int>(s);
    }

    long InputReader::readLong(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        return parseNumber<long>(s);
    }

    long long InputReader::readLongLong(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        return parseNumber<long long>(s);
    }

    unsigned InputReader::readUnsigned(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        unsigned value = parseNumber<unsigned>(s);
        return value;
    }

    bool InputReader::tryReadDouble(double& out, const std::string& prompt)
    {
        try { out = readDouble(prompt); return true; }
        catch (...) { return false; }
    }

    bool InputReader::tryReadInt(int& out, const std::string& prompt)
    {
        try { out = readInt(prompt); return true; }
        catch (...) { return false; }
    }

    bool InputReader::tryReadLong(long& out, const std::string& prompt)
    {
        try { out = readLong(prompt); return true; }
        catch (...) { return false; }
    }

    bool InputReader::tryReadLongLong(long long& out, const std::string& prompt)
    {
        try { out = readLongLong(prompt); return true; }
        catch (...) { return false; }
    }

    bool InputReader::tryReadUnsigned(unsigned& out, const std::string& prompt)
    {
        try { out = readUnsigned(prompt); return true; }
        catch (...) { return false; }
    }

    std::vector<std::string> InputReader::splitTokens(const std::string& s)
    {
        std::istringstream iss(s);
        std::vector<std::string> tokens;
        std::string token;
        while (iss >> token) tokens.push_back(token);
        return tokens;
    }

    std::vector<double> InputReader::readDoubleVectorFromLine(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        auto tokens = splitTokens(s);
        std::vector<double> out;
        out.reserve(tokens.size());
        for (auto& t : tokens) out.push_back(parseNumber<double>(t));
        return out;
    }

    std::vector<std::string> InputReader::readStringVectorFromLine(const std::string& prompt)
    {
        std::string s = readLine(prompt);
        return splitTokens(s);
    }

    bool InputReader::tryReadDoubleVectorFromLine(std::vector<double>& out, const std::string& prompt)
    {
        try { out = readDoubleVectorFromLine(prompt); return true; }
        catch (...) { return false; }
    }

    bool InputReader::tryReadStringVectorFromLine(std::vector<std::string>& out, const std::string& prompt)
    {
        try { out = readStringVectorFromLine(prompt); return true; }
        catch (...) { return false; }
    }

    template<typename T>
    T InputReader::parseNumber(const std::string& s)
    {
        std::istringstream iss(s);
        iss >> std::ws;
        T value;
        if (!(iss >> value))
        {
            throw InputError("Failed to parse number from input: '" + s + "'");
        }
        iss >> std::ws;
        if (!iss.eof())
        {
            throw InputError("Extra characters after number: '" + s + "'");
        }
        return value;
    }

   template double InputReader::parseNumber<double>(const std::string&);
    template int InputReader::parseNumber<int>(const std::string&);
    template long InputReader::parseNumber<long>(const std::string&);
    template long long InputReader::parseNumber<long long>(const std::string&);
    template unsigned InputReader::parseNumber<unsigned>(const std::string&);

} 