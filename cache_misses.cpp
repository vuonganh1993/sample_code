#include <list>
#include <vector>

#define SIZE            1024 * 1024
void BM_Vector()
{
    std::vector<int> test{};
    for(int i = 0; i < SIZE; i++)
    {
        test.push_back(i);
    }

    long total = 0;
    for(auto& i : test)
    {
        total += i;
    }
}

void BM_List()
{
    std::vector<int> test{};
    for(int i = 0; i < SIZE; i++)
    {
        test.push_back(i);
    }

    long total = 0;
    for(auto& i : test)
    {
        total += i;
    }
}

int main()
{
    BM_Vector();
    return 0;
}