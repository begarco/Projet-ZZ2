#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "Hashelement.h"

class Hashtable
{
    protected:
        Hashelement* table_;
        int size_;

    public:
        Hashtable();
        Hashtable(int);
        virtual ~Hashtable();

        Hashelement getAt(int) const;

    private:
};

#endif // HASHTABLE_H
