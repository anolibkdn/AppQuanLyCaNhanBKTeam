#include <iostream>

using namespace std;

struct martricoperator
{
    /* data */
    int n;
    float **m;
    void setArray()
    {
        m = new float *[n];
        for (int i = 0; i < n; i++)
        {
            m[i] = new float[n];
        }
        return;
    }

    void deleteMemo()
    {

        for (int i = 0; i < n; i++)
        {
            delete m[i];
        }
        delete m;
        return;
    }

    martricoperator operator=(const martricoperator &m2)
    {
        if (this != &m2)
        {
            this->n = m2.n;
            this->setArray();
            *this = m2;
            return m2;
        }else{
            return *this;
        }
    }
};

istream &operator>>(istream &in, martricoperator &m)
{
    cout << "n >> ";
    in >> m.n;
    m.setArray();
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            cout << "A[" << i << "][" << j << "] >>";
            in >> m.m[i][j];
        }
    }
    return in;
}

ostream &operator<<(ostream &out, const martricoperator &m)
{
    for (int i = 0; i < m.n; i++)
    {
        for (int j = 0; j < m.n; j++)
        {
            out << m.m[i][j] << "   ";
        }
        out << endl;
    }
    return out;
}

martricoperator operator+(const martricoperator &m1, const martricoperator &m2)
{
    martricoperator m3;
    if (m1.n == m2.n)
    {
        m3.n = m1.n;
        m3.setArray();
        for (int i = 0; i < m1.n; i++)
        {
            for (int j = 0; j < m1.n; j++)
            {
                m3.m[i][j] = m1.m[i][j] + m2.m[i][j];
            }
        }
    }
    else
    {
        cout << "Error level of martric!" << endl;
        //return;
    }
    return m3;
}

martricoperator operator-(const martricoperator &m1, const martricoperator &m2)
{
    martricoperator m3;
    if (m1.n == m2.n)
    {
        m3.n = m1.n;
        m3.setArray();
        for (int i = 0; i < m1.n; i++)
        {
            for (int j = 0; j < m1.n; j++)
            {
                m3.m[i][j] = m1.m[i][j] - m2.m[i][j];
            }
        }
    }
    else
    {
        cout << "Error level of martric!" << endl;
        //return;
    }
    return m3;
}

martricoperator operator*(const martricoperator &m1, const float x)
{
    martricoperator m3;
    m3.setArray();
    m3.n = m1.n;
    for (int i = 0; i < m1.n; i++)
    {
        for (int j = 0; j < m1.n; j++)
        {
            m3.m[i][j] = m1.m[i][j] * x;
        }
    }

    return m3;
}

martricoperator operator*(const martricoperator &m1, const martricoperator &m2)
{
    martricoperator m3;
    if (m1.n == m2.n)
    {
        m3.n = m1.n;
        m3.setArray();
        for (int i = 0; i < m1.n; i++)
        {
            for (int j = 0; j < m1.n; j++)
            {
                m3.m[i][j] = 0;
            }
        }
        for (int i = 0; i < m1.n; i++)
        {
            for (int j = 0; j < m1.n; j++)
            {
                for (int l = 0; l < m1.n; l++)
                {
                    m3.m[i][j] += m1.m[i][l] * m2.m[l][j];
                }
            }
        }
    }
    else
    {
        cout << "Error level of martric!" << endl;
        //return;
    }
    return m3;
}

int main(int argc, char const *argv[])
{
    /* code */
    martricoperator m1, m2, m3;
    float x = 3;
    cout << "----------------INPPUT MARTRIC------------------" << endl;
    cin >> m1;
    cout << m1;
    cin >> m2;
    cout << m2;
    m3 = m1 + m2;
    cout << m3 << endl;
    m3 = m1 - m2;
    cout << m3 << endl;
    m3 = m1 * m2;
    cout << m3 << endl;
    m3 = m1 * x;
    cout << m3 << endl;
    m3 = m1;
    cout << m3 << endl;
    m1.deleteMemo();
    m2.deleteMemo();
    m3.deleteMemo();
    return 0;
}
