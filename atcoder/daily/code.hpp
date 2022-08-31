/**
* @file sample.cpp
* @brief サンプルファイル
* @author Taro
* @date 05Apr2021
* @details doxygenを説明するためのサンプルファイル
*/

#include "sample.h"

//! 変数の説明は直前に書く
int a;

/**
* @brief 与えられた2値を加算する
* @param[in] a , b
* @param[out] 合計値
* @return int 加算した合計値
* @details 詳細な説明がある場合はここに書く
*/
int sum(int a, int b) {
    return a + b;
}