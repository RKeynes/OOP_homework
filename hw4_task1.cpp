#include <iostream>
#include <cassert> // для assert()

class ArrayInt
{
private:
    int m_length;
    int* m_data;

public:
    ArrayInt() : m_length(0), m_data(nullptr)
    { }

    ArrayInt(int length) :
        m_length(length)
    {
        assert(length >= 0);

        std::cout << "Fill in " << m_length << " int elements" << std::endl;

        if (length > 0)
        {
            m_data = new int[length];
            for (int i = 0; i < m_length; i++)
            {
                int array_element;
                std::cin >> array_element;
                m_data[i] = array_element;
            }
               
            //std::fill(m_data, m_data + length, 1);
        }
        else
            m_data = nullptr;
    }

    void erase()
    {
        delete[] m_data;

        m_data = nullptr;
        m_length = 0;
    }
    int getLength() { return m_length; }

    int& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

 
    void resize(int newLength)
    {
        if (newLength == m_length)
            return;

        assert(newLength >= 0); // changed a bit
        if (newLength == 0)
        {
            erase();
            return;
        }

        int* data = new int[newLength];

        if (m_length > 0)
        {
            int elementsToCopy = (newLength > m_length) ? m_length : newLength;

            for (int index = 0; index < elementsToCopy; ++index)
                data[index] = m_data[index];
        }

        delete[] m_data;

        m_data = data;
        m_length = newLength;
    }

    void array_pop_back()
    {
        resize(m_length - 1);
    }

    void array_pop_front()
    {
        m_length = m_length - 1;
        for (int i = 0; i < m_length; i++)
            m_data[i] = m_data[i + 1];
    }

    //void array_sort()  //- не работает, посмотреть, почему
    //{
    //    int index = 0;
    //    for (int i = 0; i < m_length; i++)
    //    {
    //        for (int j = 0; j < m_length; j++)
    //        {
    //            if (m_data[j] > m_data[j + 1])
    //                index = m_data[j + 1];
    //                m_data[j + 1] = m_data[j];
    //                m_data[j] = index;
    //        }
    //    }
    //}


    void print()
    {
        for (int i = 0; i < m_length; i++)
            std::cout << m_data[i] << " ";
            
        std::cout << '\n';
    }

    ~ArrayInt()
    {
        delete[] m_data;
    }
};

int main()
{
    ArrayInt AnArray(5);
    AnArray.print();
    AnArray.array_pop_front();
    AnArray.print();
    AnArray.array_pop_back();
    AnArray.print();

    /*ArrayInt anotherArray(3);
    anotherArray.array_sort();
    anotherArray.print();*/
    
    return 0;
}


