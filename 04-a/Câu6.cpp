int** transpose(int** matrix, int nRows, int nCols) {
    int** transposeMatrix = new int* [nCols];
    for (int i = 0; i<nCols; i++) {
        transposeMatrix[i] = new int [nRows];
    }
    for (int i = 0; i<nRows; i++) {
        for (int j = 0; j<nCols; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
    return transposeMatrix;
}
