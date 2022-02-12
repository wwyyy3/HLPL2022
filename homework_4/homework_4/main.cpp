//
//  main.cpp
//  homework_4.5.1_try this
//
//  Created by xuan on 2022/2/12.
//

#include "std_lib_facilities.h"

int square(int x)
{
    int i=x, ans=0;
    for (; i>0; i--){
        ans=ans+x;}
    return ans;
}

int main() {
    cout<<square(2)<<"\n";
    return 0;
}
