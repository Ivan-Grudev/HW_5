#include <iostream>
#include <regex>
#include <string>
#include <algorithm>
#include <vector>

#define C_ALL(X) cbegin(X), cend(X)

using namespace std;

int main(int argc, char ** argv)
{
//	std::regex pattern(R"(\b([01]?[0-2]|2[0-3]):([0-5]\d):([0-5]\d)\b)"); //отдельно для формата времени
	std::regex pattern(R"(\b(\d){4}.([01]?[0-2]|2[0-2]).([0-5]\d)[\s]([01]?[0-2]|2[0-3]):([0-5]\d):([0-5]\d)\b)");
    std::string data = "0005.12.20 23:23:09 aa j101:06:59 ff 10:06:59 a";

    const vector<smatch> matches{
        sregex_iterator{C_ALL(data), pattern},
        sregex_iterator{}};

    for (size_t i = 0; i < matches.size(); i++) {
        cout << matches[i].str(0) << endl;
    }

	return EXIT_SUCCESS;
}
