#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

class Sample
{

private:

      char *m_string; 
      int   m_length;
public:
      Sample()
      {
        m_length=0;
        m_string = new char[m_length+1];
      }
      Sample(const char *str)
       {
            m_length = strlen(str)-1;
            m_string = new char[m_length];
            strcpy(m_string, str);
       }
       Sample(const Sample &rhs)
         {

            delete[]m_string;
            m_length = rhs.m_length;
            
            if(rhs.m_string)
             {

                 m_string = new char[m_length];
                 strcpy(m_string,rhs.m_string);
            }
            else
                m_string = NULL;

         }
       Sample operator+(Sample &obj)
           {
               Sample s; 
               strcat(m_string,obj.m_string);
               strcpy(s.m_string,m_string);
               return s;
           }
      
     ~Sample()
       {
          delete[]m_string;
       }

       char *getString(){return m_string;} 
       int   getLength(){return m_length;}
};

int main()
{
     Sample s("hello var");
     Sample s1("ma");
     
     Sample s2 = s+s1;

     cout<<s2.getString()<<endl;
      
    // cout<<s.getString()<<endl;
    // cout<<s1.getString()<<endl;
 return 0; 
}
 


