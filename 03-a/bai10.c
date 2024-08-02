#include <iostream>

int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) {
    int* mergeArr = new int[lenArr1 + lenArr2];
    int firstIndex = 0, secondIndex = 0, mergeIndex = 0;

    bool isAscending = firstArr[0] <= firstArr[lenArr1 - 1];

    while (firstIndex < lenArr1 && secondIndex < lenArr2) {
        if ((isAscending && firstArr[firstIndex] <= secondArr[secondIndex]) ||
            (!isAscending && firstArr[firstIndex] >= secondArr[secondIndex])) {
            mergeArr[mergeIndex++] = firstArr[firstIndex++];
        } else {
            mergeArr[mergeIndex++] = secondArr[secondIndex++];
        }
    }

    while (firstIndex < lenArr1) {
        mergeArr[mergeIndex++] = firstArr[firstIndex++];
    }

    while (secondIndex < lenArr2) {
        mergeArr[mergeIndex++] = secondArr[secondIndex++];
    }

    return mergeArr;
}
