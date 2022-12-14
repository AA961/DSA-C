class Node
{
public:
    int get()
    {
        return object;
    };

    void set(int object)
    {
        this->object = object;
    }

    Node *getNext()
    {
        return next;
    };

    void setNext(Node *next)
    {
        this->next = next;
    }

private:
    int object;
    Node *next;
};