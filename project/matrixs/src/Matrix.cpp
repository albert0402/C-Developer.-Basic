#include "../include/Matrix.h"

/************************************/
/*   Базовый класс матрицы 3 на 3   */
/************************************/

// Конструктор по умолчанию
Matrix3x3::Matrix3x3() {
    Reset();
}

// Конструктор с инициализацией
Matrix3x3::Matrix3x3(MatrixType& matrix) : mat(matrix) {}

// Метод для инициализации матрицы нулями
void Matrix3x3::Reset() {
    for (auto& row : mat) {
        row.fill(0.0f);
    }
}

// Метод для задания конкретных значений
void Matrix3x3::InitializeMatrix(MatrixType& newMat) {
    mat = newMat;
}

// Возвращает обратную матрицу (если обратная существует)
Matrix3x3 Matrix3x3::InverseMatrix() {
    Matrix3x3 inv;
    float det = DeterminantMatrix();

    if (det == 0.0f) {
        throw std::runtime_error("Matrix is singular and cannot be inverted.");
    }

    inv.mat[0][0] = mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1];
    inv.mat[0][1] = -(mat[0][1] * mat[2][2] - mat[0][2] * mat[2][1]);
    inv.mat[0][2] = mat[0][1] * mat[1][2] - mat[0][2] * mat[1][1];

    for (auto& row : inv.mat) {
        for (auto& elem : row) {
            elem /= det;
        }
    }

    return inv;
}

// Возвращает детерминант матрицы
float Matrix3x3::DeterminantMatrix() {
    return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
           mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
           mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
}

// Метод для умножения двух матриц
Matrix3x3 Matrix3x3::MultiplyMatrix(Matrix3x3& a, Matrix3x3& b) {
    Matrix3x3 result;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            result.mat[i][j] = 0;
            for (int k = 0; k < 3; ++k) {
                result.mat[i][j] += a.mat[i][k] * b.mat[k][j];
            }
        }
    }

    return result;
}

void Matrix3x3::PrintMatrix(const std::string& name) const {
    std::cout << name << ":\n";
    for (const auto& row : mat) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << "\n";
    }
}

// Метод для получения ссылки на матрицу
Matrix3x3::MatrixType& Matrix3x3::GetMatrix() {
    return mat;
}

// Метод для транспонирования матрицы
Matrix3x3 Matrix3x3::Transpose() {
    Matrix3x3 transposed;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transposed.mat[i][j] = mat[j][i];
        }
    }
    return transposed;
}

// Метод для вычисления следа матрицы
float Matrix3x3::Trace() {
    return mat[0][0] + mat[1][1] + mat[2][2];
}

// Метод для сложения матриц
void Matrix3x3::AddMatrix(const Matrix3x3& other) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            mat[i][j] += other.mat[i][j];
        }
    }
}

// Метод для вычитания матриц
void Matrix3x3::SubtractMatrix(const Matrix3x3& other) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            mat[i][j] -= other.mat[i][j];
        }
    }
}