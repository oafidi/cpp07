template <typename T>
Array<T>::Array() : arr(NULL), n(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : n(n)
{
    if (n == 0)
        arr = NULL;
    else
        arr = new T[n];
}

template <typename T>
Array<T>::Array(const Array & other) : n(other.n)
{
    if (n == 0)
    {
        arr = NULL;
        return;
    }
    T *tmp = new T[n];

    try
    {
        for (unsigned int i = 0; i < n; i++)
            tmp[i] = other.arr[i];
    }
    catch(...)
    {
        delete[] tmp;
        throw;
    }
    arr = tmp;
}

template <typename T>
Array<T>::~Array(){
    delete[] arr;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
    if (this == &other)
        return *this;

    T *tmp = NULL;

    if (other.n != 0)
    {
        tmp = new T[other.n];

        try
        {
            for (unsigned int i = 0; i < other.n; i++)
                tmp[i] = other.arr[i];
        }
        catch (...)
        {
            delete[] tmp;
            throw;
        }
    }

    delete[] arr;

    arr = tmp;
    n = other.n;

    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i > n)
        throw std::out_of_range("Index out of bounds!");
    return arr[i];
}

template <typename T>
unsigned int Array<T>::size() const {
    return n;
}
