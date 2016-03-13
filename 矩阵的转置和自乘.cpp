//计算4*4矩阵的转置和乘积
#include <iostream>
#include<iomanip>
#define M 4

using namespace std;

class matrix
{
  public:
      matrix();         //构造函数
      ~matrix(){}
      void set();            //输入一个4*4阶的矩阵
      void transpose();      //计算矩阵的转置
      void multiply();       //计算矩阵自乘的乘积
  private:
      int a[M][M];
};

matrix::matrix()     //构造函数
{
    for(int i=0;i<M;++i)
        for(int j=0;j<M;++j)
            a[i][j]=0;       //初始化矩阵
}

void matrix::set()         //输入一个4*4阶的矩阵
{
    cout<<"请输入4*4矩阵中的元素：";
    for(int i=0;i<M;++i)
        for(int j=0;j<M;++j)
            cin>>a[i][j];
}

void matrix::transpose()           //计算矩阵的转置
{
    for(int i=0;i<M;++i)
    {
        for(int j=0;j<M;++j)
            cout<<setfill(' ')<<setw(3)<<a[j][i]<<" ";
        cout<<endl;
    }

}

void matrix::multiply()                 //计算矩阵自乘的乘积
{
    int sum=0;
    for(int i=0;i<M;++i)
    {
        for(int j=0;j<M;++j)
        {
            for(int k=0;k<M;++k)
                sum+=a[i][k]*a[k][j];    //行和列相乘
            cout<<setfill(' ')<<setw(6)<<sum<<" ";
            sum=0;
        }
        cout<<endl;
    }
}



int main()
{
    matrix mymatrix;
    mymatrix.set();
    mymatrix.multiply();
    mymatrix.transpose();
    cout <<endl;
    return 0;
}
