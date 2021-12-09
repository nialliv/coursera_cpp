#include <vector>
#include <math.h>

using namespace std;

class Queue
{

public:
    void worry(int i)
    {
        this->q[i] = true;
    };

    void quiet(int i)
    {
        this->q[i] = false;
    };

    void come(int k)
    {
        if (k > 0)
        {
            for (int i = 0; i < k; i++)
                this->q.push_back(false);
        }
        else
        {
            for (int i = 0; i < abs(k); i++)
                this->q.pop_back();
        }
    };

    int worry_count()
    {
        int w_count = 0;

        for (int i = 0; i < q.size(); i++)
        {
            if (q[i] == true)
                w_count++;
        }

        return w_count;
    };

private:
    /*
        true - взволнованный, false - спокойный
    */
    vector<bool> q;
};