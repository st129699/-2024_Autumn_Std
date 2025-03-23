#include <iostream>
using namespace std;

struct Matrix
{
    int verts;
    int** data;

    Matrix() : verts(0), data(nullptr) {}


    void free()
    {
        if (data != nullptr)
        {
            for (int i = 0; i < verts; i++)
            {
                delete[] data[i];
            }
            delete[] data;
            data = nullptr;
        }
    }

    
    void init(int verts)
    {
        if (data != nullptr)
        {
            free();
        }
        this->verts = verts;
        data = new int* [verts];
        for (int i = 0; i < verts; ++i)
        {
            data[i] = new int[verts] {0};
        }
    }

    int edgesFrom(int i)
    {
        int count = 0;
        for (int j = 1; j < verts; ++j)
        {
            count += (data[i][j] != 0 ? 1 : 0);
        }
        return count;
    }

    int edgesTo(int j)
    {
        int count = 0;
        for (int i = 1; i < verts; ++i)
        {
            count += (data[i][j] != 0 ? 1 : 0);
        }
        return count;
    }


    int edges()
    {
        int count = 0;
        for (int i = 1; i < verts; ++i)
        {
            count += edgesFrom(i);
        }
        return count;
    }
};

class Graph
{
private:
    Matrix m;

public:
    void readMatrix()
    {
        int verts = 0;
        cin >> verts;
        m.init(verts + 1);
        for (int i = 1; i < m.verts; ++i)
        {
            for (int j = 1; j < m.verts; ++j)
            {
                cin >> m.data[i][j];
            }
        }
    }
    void printEdgeList()
    {
        cout << m.verts - 1 << " " << m.edges() << "\n";
        for (int i = 1; i < m.verts; ++i)
        {
            for (int j = 1; j < m.verts; ++j)
            {
                if (m.data[i][j] != 0)
                {
                    cout << i << " " << j << "\n";
                }
            }
        }
    }

    void readEdgeList()
    {
        int verts = 0;
        cin >> verts;
        m.init(verts + 1);
        int edges = 0;
        cin >> edges;
        for (int i = 0; i < edges; ++i)
        {
            int a = 0;
            int b = 0;
            cin >> a >> b;
            m.data[a][b] = 1;
        }
    }

    void printAdjencyList()
    {
        cout << m.verts - 1 << "\n";
        for (int i = 1; i < m.verts; ++i)
        {
            cout << m.edgesFrom(i) << " ";
            for (int j = 1; j < m.verts; j++)
            {
                if (m.data[i][j] != 0)
                {
                    cout << j << " ";
                }
            }
            cout << "\n";
        }
    }

    void printMatrix()
    {
        cout << m.verts - 1 << "\n";
        for (int i = 1; i < m.verts; ++i)
        {
            for (int j = 1; j < m.verts; ++j)
            {
                cout << m.data[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void readAdjencyList()
    {
        int verts = 0;
        cin >> verts;
        m.init(verts + 1);
        for (int from = 1; from < m.verts; ++from)
        {
            int count = 0;
            cin >> count;
            for (int j = 0; j < count; ++j)
            {
                int to = 0;
                cin >> to;
                m.data[from][to] = 1;
            }
        }
    }

    void printCntEdgesFrom()
    {
        readMatrix();
        for (int i = 1; i < m.verts; i++)
        {
            cout << m.edgesFrom(i) << " ";
        }
    }

    void isOriented()
    {
        readMatrix();
        for (int i = 0; i < m.verts; ++i)
        {
            if (m.data[i][i] != 0)
            {
                cout << "NO\n";
                return;
            }
        }

        for (int i = 0; i < m.verts; ++i)
        {
            for (int j = 0; j < m.verts; ++j)
            {
                if (m.data[i][j] != m.data[j][i])
                {
                    cout << "YES\n"; 
                    return;
                }
            }
        }

        cout << "NO\n"; 
    }

    void isFull()
    {
        for (int i = 1; i < m.verts; ++i)
        {
            for (int j = i + 1; j < m.verts; ++j)
            {
                if (m.data[i][j] == 0)
                {
                    cout << "NO\n"; 
                    return;
                }
            }
        }
        cout << "YES\n"; 
    }

    void drainsSources()
    {
        for (int i = 1; i < m.verts; ++i)
        {
            if (m.edgesTo(i) == 0)
            {
                cout << i << " ";
            }
        }
        cout << "\n";

        for (int i = 1; i < m.verts; ++i)
        {
            if (m.edgesFrom(i) == 0)
            {
                cout << i << " ";
            }
        }
        cout << "\n";
    }
};

int main()
{
    Graph g;
    Matrix m;
   /* g.readMatrix();
    g.printEdgeList();
    g.readEdgeList();
    g.printAdjencyList();*/
    /*g.readAdjencyList();
    g.printMatrix();*/
    /*g.printCntEdgesFrom();*/
    //g.isOriented();
    g.readMatrix();
    g.drainsSources();
    return 0;
}