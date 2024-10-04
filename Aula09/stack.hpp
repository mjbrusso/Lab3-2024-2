// TODO:
//    ✔ resize() @ push()
//    ✔ overflow @ pop()  & top()
//    ✔ Rule of 3


// template de classe 
// lab3::stack<T>
#ifndef _LAB3_STACK_HPP_
#define _LAB3_STACK_HPP_

#include <cstddef>
#include <iostream>
#include <algorithm>
#include <stdexcept>

namespace lab3
{
   template<typename T>
   class stack{
    private:
        // Fields
        size_t m_size, m_capacity;
        T *m_data;

        // Functions
        void resize(){
            T *newdata= new T[m_capacity];
            std::copy_n(m_data, m_size, newdata);
            delete m_data;
            m_data = newdata;
            // std::cout << "Resized to " << m_capacity << "\n";
        }

    public:
        stack() : m_size{0}, 
                  m_capacity{10}, 
                  m_data{new T[m_capacity]}{
            
        }

        // stack(stack &other) = delete;

        stack(stack &other) : m_size{other.m_size},
                              m_capacity{other.m_capacity},
                              m_data{new T[other.m_capacity]}
        {
            std::copy_n(m_data, m_size, other.m_data);
        }

        virtual ~stack(){
            std::cout << "Deleting " << m_data << std::endl;
            delete[] m_data;
        }

        void push(T value){
            if(m_size==m_capacity){
                m_capacity *= 2;
                resize();
            }
            m_data[m_size++] = value;
        }

        bool empty() const{
            return m_size == 0;
        }

        size_t size() const{
            return m_size;
        }

        void pop(){
            if(m_size==0) 
                throw std::underflow_error("Stack is empty!");

            m_size--;
        }

        T& top(){
            if(m_size==0) 
                throw std::underflow_error("Stack is empty!");

            return m_data[m_size - 1];
        }

        stack& operator=(const stack &other){
            if(this!=&other){
                delete[] m_data;
                m_capacity = other.m_capacity;
                m_size = other.m_size;
                m_data = new T[m_capacity];
                std::copy_n(m_data, m_size, other.m_data);
            }
            return *this;
        }
   }; 
} // namespace lab3

#endif