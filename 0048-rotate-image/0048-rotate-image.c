void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int n = matrixSize;
    // a new 2d array
    int arr[matrixSize][matrixSize];
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize; j++){
            arr[i][j] = matrix[n - 1 - j][i];
        }
    }
    for(int i = 0; i < matrixSize; i++){
        for(int j = 0; j < matrixSize;j++){
            matrix[i][j] = arr[i][j];
        } 
    }

}