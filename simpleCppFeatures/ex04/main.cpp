#include <iostream>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;

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
		cout << "Invalid number of args" << endl;
		return (1);
	}
	infile.open(argv[1]);
	outfile.open(string(argv[1]) + string(".replace"));
	if (infile.fail() || outfile.fail())
	{
		cout << "Error opening the file" << endl;
		return (1);
	}
	s1 = argv[2];
	s2 = argv[3];
	if (s1 == "" || s2 == "")
	{
		cout << "Error: args must have printable characters" << endl;
		return (1);
	}
	readReplaceWrite(infile, outfile, s1, s2);
	infile.close();
	return (0);
}
