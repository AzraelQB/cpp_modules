#include <iostream>
#include <fstream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::cerr;

void	readReplaceWrite(ifstream& infile, ofstream& outfile, string& s1, \
		string& s2)
{
	unsigned int	nextOccurencePos = 0;
	string			line;

	while (!infile.eof())
	{
		getline(infile, line);
		nextOccurencePos = line.find(s1);
		for (unsigned int curPos = 0; curPos < line.size(); )
		{
			if (curPos == nextOccurencePos)
			{
				outfile << s2;
				curPos += s1.size();
				nextOccurencePos = line.find(s1, curPos);
			}
			else
				outfile << line[curPos++];
		}
		if (!infile.eof())
			outfile << "\n";
	}
	outfile.close();
}

int main(int argc, char **argv)
{
	ifstream	infile;
	string		s1;
	string		s2;
	ofstream	outfile;

	if (argc != 4)
	{
		cerr << "Invalid number of args" << endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		cerr << "Error opening the infile" << endl;
		return (1);
	}
	outfile.open((string(argv[1]) + string(".replace")).c_str());
	if (outfile.fail())
	{
		cerr << "Error opening the outfile" << endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (s1 == "" || s2 == "")
	{
		cerr << "Error: args must have printable characters" << endl;
		return (1);
	}
	readReplaceWrite(infile, outfile, s1, s2);
	infile.close();
	return (0);
}
