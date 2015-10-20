#ifndef FILEREADER_H
#define FILEREADER_H

#include <iostream>
#include <fstream>
#include <string>

#include "Hashtable.h"

class FileReader {
    protected:
        std::ifstream   m_file; // Any file used
        std::string     m_separator; // Contains the list of separators
        Hashtable*       m_hash_table; // Storing words we have to ignore

    public:
        FileReader();
        FileReader(std::string);
        virtual ~FileReader();

        void read(std::string);
        void process(std::string);

    private:
        bool isSeparator(const char &);
};

#endif // FILEREADER_H
