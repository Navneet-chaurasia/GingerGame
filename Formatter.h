#include"User.h"

#ifndef FORMATTER_H
#define FORMATTER_H


class Formatter
{
    public:
        Formatter();
        //method for title displaying with formatting
        void display_title();
        void Entering_into_mode(string mode);

        //welcome greeting for user
        void welcome_user();
        virtual ~Formatter();

    protected:

    private:

};

#endif // FORMATTER_H
