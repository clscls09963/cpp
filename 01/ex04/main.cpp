#include <iostream>
#include <fstream>
using namespace std;

void    write_line(bool &first, std::ofstream &write_file, string str, string replace)
{
    if (first)
    {
        write_file << str << replace;
        first = false;
    }
    else
        write_file << endl << str << replace;
}

void    file_replace( std::ifstream &read_file, std::ofstream &write_file, char **argv)
{
    string line;
    string find_word = argv[2];
    string replace_word = argv[3];
    bool first = true;

    while (getline(read_file, line))
    {
        size_t pos = line.find(find_word);

        if (pos == string::npos)
            write_line(first, write_file, line, "");
        else
        {
            write_line(first, write_file, line.substr(0, pos), replace_word);
            
            string new_line = line.substr(pos + find_word.length()); 
            pos = new_line.find(find_word);

            while (pos != string::npos)
            {
                write_file << new_line.substr(0, pos) << replace_word;
                new_line = new_line.substr(pos + find_word.length());
                pos = new_line.find(find_word);
            }
            write_file << new_line;
        }
    }
}

int main(int argc, char **argv)
{
    if (argc == 1 || argc > 4)
    {
        cout << "Too few or too many arguments" << endl;
        return 1;
    }

    string path = argv[1];
    std::ifstream read_file(argv[1]);
    std::ofstream write_file(path + ".replace");
        
    if (read_file.fail() || write_file.fail())
    {
        cout << "file open Error!" << endl;
        return 1;
    }

    file_replace(read_file, write_file, argv);
    read_file.close();
    write_file.close();
}