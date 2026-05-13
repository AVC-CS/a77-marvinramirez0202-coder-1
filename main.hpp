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
    int maxsum, maxrow;
    for(int i = 0; i < NUM_ROWS; i++){
        int total = 0;
        for(int j = 0; j < NUM_COLS; j++){
            total += num[i][j];
            if((i == 0) || maxsum < total){
                maxsum = total; maxrow = i;
            }
            
        }
    }
    for(int j = 0; j < NUM_COLS; j++){
        result[j] = num[maxrow][j];
    }
}
void findMaxElm(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: for each row, store the maximum element of that row in result[i].
    int maxelm, currval;
    for(int i = 0; i < NUM_ROWS; i++){
        maxelm = num[i][0];
        for(int j = 0; j < NUM_COLS; j++){
            currval = num[i][j];
            if(maxelm < currval)
                maxelm = currval;
                result[i] = maxelm;
        }
    }

}

void findMaxVal(int result[], int num[][NUM_COLS], int rows, int cols)
{
    // TODO: find the cell (r,c) holding the global maximum value; copy row r.
    int maxval, maxrow, currval;
    maxval = num[0][0];
    for(int i = 0; i < NUM_ROWS; i++){
        for(int j = 0; j < NUM_COLS; j++){
            currval = num[i][j];
            if(maxval < currval){
                maxval = currval; maxrow = i;
            }
        }
    }

    for(int j = 0; j < NUM_COLS; j++){
        result[j] = num[maxrow][j];
    }

}

#endif
