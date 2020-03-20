// User vector

#include<iostream>
using namespace std;

class Vector{
    public:
        int *arr;
        int current_size;
        int max_size;

        Vector(int s = 2)
        {
            arr = new int[s];
            current_size = 0;
            max_size = s;
        }

        void push_back(int data)
        {
            if(current_size == max_size)
            {
                int *oldarr = arr;
                int old_max_size = max_size;
                max_size = 2 * max_size;
                arr = new int[max_size];
                for(int i = 0; i < old_max_size; i++)
                {
                    arr[i] = oldarr[i];
                }
                delete []oldarr;
                
            }
            arr[current_size] = data;
            current_size++;
        }

        void pop_back()
        {
            if(current_size > 0)
            {
                current_size--;
            }
        }

        bool empty()
        {
            return current_size == 0;
        }

        int size()
        {
            return current_size;
        }
        int capacity()
        {
            return max_size;
        }

        int operator[](int i)
        {
            return arr[i];
        }

};




int main()
{
    Vector my_vector;

    my_vector.push_back(1);
    my_vector.push_back(2);
    my_vector.push_back(3);
    my_vector.push_back(4);
    my_vector.push_back(5);
    my_vector.push_back(6);

    my_vector.pop_back();

    for(int i = 0; i < my_vector.size(); i++)
    {
        cout<<my_vector[i]<<" ";
    }
    cout<<endl;
     
    cout<<"Size : "<<my_vector.size()<<endl;

    cout<<"Capacity : "<<my_vector.capacity()<<endl;




    return 0;
}