#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
using namespace std;

const int SIZE = 10;
const int NUM_ROWS = 6;
const int NUM_COLS = 5;

void findMaxSum(int[], int[][NUM_COLS], int, int);
void findMaxElm(int[], int[][NUM_COLS], int, int);
void findMaxVal(int[], int[][NUM_COLS], int, int);

void findMaxSum(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: find the row whose sum is the largest, copy that row into result.
    int maxsum = 0, maxrow = 0;
    for(int i = 0; i < rows; i++){
        int total = 0;
        for(int j = 0; j < cols; j++){
            total += num[i][j];
            if((i == 0) || maxsum < total){
                maxsum = total; maxrow = i;
            }
            
        }
        for(int j = 0; j < cols; j++){
        result[j] = num[maxrow][j];
    }
    }
}
void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: for each row, store the maximum element of that row in result[i].
    int maxelm, currval;
    for(int i = 0; i < rows; i++){
        maxelm = num[i][0];
        for(int j = 1; j < cols; j++){
            if(maxelm < num[i][j])
                maxelm = num[i][j];
                result[i] = maxelm;
        }
    }

}

void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: find the cell (r,c) holding the global maximum value; copy row r.
    int maxval, maxrow;
    maxval = num[0][0];
    maxrow = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(maxval < num[i][j]){
                maxval = num[i][j]; maxrow = i;
            }
        }
    }

    for(int j = 0; j < cols; j++){
        result[j] = num[maxrow][j];
    }

}

#endif
