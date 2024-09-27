// template de classe 
// lab3::stack<T>
#ifndef _LAB3_STACK_HPP_
#define _LAB3_STACK_HPP_

#include <cstddef>
#include <iostream>

namespace lab3
{
   template<typename T>
   class stack{
    private:
        size_t m_size, m_capacity;
        T *m_data;

    public:
        stack() : m_size{0}, 
                  m_capacity{10}, 
                  m_data{new T[m_capacity]}{
            
        }

        virtual ~stack(){
            std::cout << "Deleting " << m_data << std::endl;
            delete[] m_data;
        }

        void push(T value){
            m_data[m_size++] = value;
        }

        bool empty() const{
            return m_size == 0;
        }

        size_t size() const{
            return m_size;
        }

        void pop(){
            m_size--;
        }

        T& top(){
            return m_data[m_size - 1];
        }
   }; 
} // namespace lab3

#endif