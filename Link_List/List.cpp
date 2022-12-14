#include <stdlib.h>
#include "Node.cpp"
using namespace std;

class List
{
public:
    List()
    {
        head_node = new Node();
        head_node->setNext(NULL);
        current_node = NULL;
        size = 0;
    };

    void add(int value)
    {
        Node *new_node = new Node();
        new_node->set(value);

        if (current_node != NULL)
        {
            new_node->setNext(current_node->getNext());
            current_node->setNext(new_node);
            last_node = current_node;
            current_node = new_node;
        }
        else
        {
            new_node->setNext(NULL);
            head_node->setNext(new_node);
            last_node = head_node;
            current_node = new_node;
        }

        size++;
    }

    int get()
    {
        if (current_node != NULL)
        {
            return current_node->get();
        }
    };

    bool next()
    {
        if (current_node == NULL)
        {
            return false;
        }

        last_node = current_node;
        current_node = current_node->getNext();

        if (current_node == NULL || size == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    };

    void start()
    {
        last_node = current_node;
        current_node = head_node;
    };

    int length()
    {
        return size;
    };

    void remove()
    {
        if (current_node != NULL && current_node != head_node)
        {
            last_node->setNext(current_node->getNext());
            delete current_node;
            current_node = last_node->getNext();
            size--;
        }
    }

private:
    Node *head_node;
    Node *current_node;
    Node *last_node;
    int size;
};
