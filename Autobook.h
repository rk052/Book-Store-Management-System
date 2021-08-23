#ifndef __Autobook
#define __Autobook

namespace example
{
    class Autobook
    {
    private:
        char *author, *title, *publisher;
        float *price;
        int *stock;

    public:
        Autobook();
        void feedData();
        void editData();
        void showData();
        int  search(char[],char[]);
        void buyBook();
    };
}
#endif
