//
//  main.c
//  C_Struct_Test
//
//  Created by Xiao Xiang on 16/2/24.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//

#include <stdio.h>

struct weapon {
    char name[20];
    int atk;
    int price;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    struct weapon weapon_1 = {"weapon_name", 100, 200};
    printf("%s\n", weapon_1.name);
    struct weapon weapon_2[2] = {{"glock", 50, 100}, {"AK47", 100, 200}};
    printf("%s\n", weapon_2[1].name);
    return 0;
}
