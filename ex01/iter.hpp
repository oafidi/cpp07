#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename U>
void iter(T *arr, const int length, U f)
{
    if (!arr || !f || length < 0)
        return;
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

#endif