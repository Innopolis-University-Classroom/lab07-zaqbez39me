
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
template <typename T>
void multiples (T& sum, T x, int n)
{
    sum = 1 + x * n * (1 + n) / 2;
}