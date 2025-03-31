#ifndef S21_MATRIX_PLUS_H
#define S21_MATRIX_PLUS_H

#include <iostream>

class S21Matrix {
  private:
      
      int rows_, cols_;         
      double **matrix_;

  public:

      int get_rows();
      int get_col();
      void set_rows(int rows);
      void set_cols(int cols);
/*===================================Default constructor===================================*/
      S21Matrix() noexcept;
      S21Matrix(int rows, int cols);
      ~S21Matrix(); 
      S21Matrix(const S21Matrix &other);
/*===================================Operations on matrices================================*/
      bool EqMatrix(const S21Matrix& other);
      void SumMatrix(const S21Matrix& other);
      void SubMatrix(const S21Matrix& other);
      void MulNumber(const double num);
      void MulMatrix(const S21Matrix& other);
      S21Matrix Transpose();
/*==================================Opeartor overload==========================================*/
      S21Matrix operator + (const S21Matrix& other);
      S21Matrix operator - (const S21Matrix& other);
      S21Matrix operator * (const S21Matrix& other);
      S21Matrix operator * (double num);

      S21Matrix operator += (const S21Matrix& other);
      S21Matrix operator -= (const S21Matrix& other);
      S21Matrix operator *= (const S21Matrix& other);
      S21Matrix operator *= (const double num);
      
      bool operator == (const S21Matrix& other);
      S21Matrix operator = (const S21Matrix& other);

/*======================================Helpers================================================*/
     void filling_matrix();
     void print_matrix();
};


  
#endif