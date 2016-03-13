//����4*4�����ת�úͳ˻�
#include <iostream>
#include<iomanip>
#define M 4

using namespace std;

class matrix
{
  public:
      matrix();         //���캯��
      ~matrix(){}
      void set();            //����һ��4*4�׵ľ���
      void transpose();      //��������ת��
      void multiply();       //��������Գ˵ĳ˻�
  private:
      int a[M][M];
};

matrix::matrix()     //���캯��
{
    for(int i=0;i<M;++i)
        for(int j=0;j<M;++j)
            a[i][j]=0;       //��ʼ������
}

void matrix::set()         //����һ��4*4�׵ľ���
{
    cout<<"������4*4�����е�Ԫ�أ�";
    for(int i=0;i<M;++i)
        for(int j=0;j<M;++j)
            cin>>a[i][j];
}

void matrix::transpose()           //��������ת��
{
    for(int i=0;i<M;++i)
    {
        for(int j=0;j<M;++j)
            cout<<setfill(' ')<<setw(3)<<a[j][i]<<" ";
        cout<<endl;
    }

}

void matrix::multiply()                 //��������Գ˵ĳ˻�
{
    int sum=0;
    for(int i=0;i<M;++i)
    {
        for(int j=0;j<M;++j)
        {
            for(int k=0;k<M;++k)
                sum+=a[i][k]*a[k][j];    //�к������
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
