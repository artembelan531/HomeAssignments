/* Artem Belan
 st135609@student.spbu.ru
 task1_hello_world_2.0
 */
#include <iostream>
#include <string>
#include "hi.h"
using namespace std
int main(){
      string a;
      hi("world");
      while(true)   {
           cin>>a;
           if(a != "0"){
                hi(a);
                }
                else break;
          }
return 0;
}                




