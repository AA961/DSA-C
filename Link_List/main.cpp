#include <iostream>
#include <stdlib.h>
#include "List.cpp"

using namespace std;
int main(int argc, char *argv[])
{
    List link_list;

    link_list.add(3);
    link_list.add(4);
    link_list.add(5);
    link_list.add(6);

    link_list.remove();

    link_list.start();

    while (link_list.next())
    {
        cout << link_list.get() << endl;
    }

    return 0;
}