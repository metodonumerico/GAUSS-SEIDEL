#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Librería para el uso de cadenas de texto
#include <cmath>    //Librería para el uso de funciones matemáticas

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conexiones
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::metodo(){
    QString temp,temp2,temp3,temp4,temp5,temp6,temp7,temp8;          //Cadenas de texto de uso temporal
    double a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,d1,d2,d3,d4,x1,x2,x3,x4,err;
    double a1=ui->A1->value();   //Recupera el valor de X1 del spinbox
    double a2=ui->A2->value();   //Recupera el valor de X2 del spinbox
    double a3=ui->A3->value();   //Recupera el valor de X3 del spinbox
    double a4=ui->A4->value();   //Recupera el valor de X4 del spinbox
    double b1=ui->B1->value();   //Recupera el valor de X1 del spinbox
    double b2=ui->B2->value();   //Recupera el valor de X2 del spinbox
    double b3=ui->B3->value();   //Recupera el valor de X3 del spinbox
    double b4=ui->B4->value();   //Recupera el valor de X4 del spinbox
    double c1=ui->C1->value();   //Recupera el valor de X1 del spinbox
    double c2=ui->C2->value();   //Recupera el valor de X2 del spinbox
    double c3=ui->C3->value();   //Recupera el valor de X3 del spinbox
    double c4=ui->C4->value();   //Recupera el valor de X4 del spinbox
    double d1=ui->D1->value();   //Recupera el valor de X1 del spinbox
    double d2=ui->D2->value();   //Recupera el valor de X2 del spinbox
    double d3=ui->D3->value();   //Recupera el valor de X3 del spinbox
    double d4=ui->D4->value();   //Recupera el valor de X4 del spinbox
    double X1=ui->X1->value();   //Recupera el valor de A del spinbox
    double X2=ui->X2->value();   //Recupera el valor de B del spinbox
    double X3=ui->X3->value();   //Recupera el valor de C del spinbox
    double X4=ui->X4->value();   //Recupera el valor de D del spinbox
    double err=ui->err->value(); //Recupera el valor del error del spinbox

    double 9=ui->X1->value();   //Recupera el valor de X1 del spinbox
    double 4=ui->X2->value();   //Recupera el valor de X2 del spinbox
        double err=ui->Err->value(); //Recupera el valor del error del spinbox
        double xr=0.0;
        double ea=100.0


    while(ea>err){
        matriz=X1*X2*X3*X4;
       X1=A-((b1*X2)-c1*X3-d1*X4)/a1;//devuelve la función de arrastre
       X2=B-((a2*X1)-(c2*X3)-(d2*X4))/b2;//devuelve la función de arrastre
       X3=C-((a3*X1)-(b3*X2)-(d3*X4))/c3;//devuelve la función de arrastre
       X3=D-((a4*X1)-(b4*X2)-(c4*X3))/d4;//devuelve la función de arrastre
 x=x*1;
        err=(ea+err)/ea; //Se calcula error
        ea=100*std::abs(ea+err)/ea; //Se calcula el error


    }

    }

   temp.append("Raiz=").append(temp2.setNum(A)).append("\nX1=" ).append(temp3.setNum(B)).append("\nX2=", ).append(temp4.setNum(C)).append("\nX3=", ).append(temp5.setNum(D).append("\nX4=",X4)).append(temp6.setNum(err)).append("\nError=").append(temp7.setNum(ea)).append(temp8.setNum(x)).append("\nIteraciones=", );  //Se prepara el texto para ser presentado
   ui->Texto->setText(temp);  //Se presenta el texto
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea)).append(temp4.setNum(A)).append("\nX1=" ).append(temp5.setNum(B)).append("\nX2=", ).append(temp6.setNum(C)).append("\nX3=", ).append(temp7.setNum(D).append("\nX4=",X4)).append(temp8.setNum(x)).append("\nIteraciones=", );;  //Se prepara el texto para ser presentado
    ui->Texto->setText(temp);  //Se presenta el texto


void MainWindow::borrar(){

    ui->A1->value();   //Recupera el valor de X1 del spinbox
    ui->A2->value();   //Recupera el valor de X2 del spinbox
    ui->A3->value();   //Recupera el valor de X1 del spinbox
    ui->A4->value();   //Recupera el valor de X2 del spinbox
    ui->B1->value();   //Recupera el valor de X1 del spinbox
    ui->B2->value();   //Recupera el valor de X2 del spinbox
    ui->B3->value();   //Recupera el valor de X1 del spinbox
    ui->B4->value();   //Recupera el valor de X2 del spinbox
    ui->C1->value();   //Recupera el valor de X1 del spinbox
    ui->C2->value();   //Recupera el valor de X2 del spinbox
    ui->C3->value();   //Recupera el valor de X1 del spinbox
    ui->C4->value();   //Recupera el valor de X2 del spinbox
    ui->D1->value();   //Recupera el valor de X1 del spinbox
    ui->D2->value();   //Recupera el valor de X2 del spinbox
    ui->D3->value();   //Recupera el valor de X1 del spinbox
    ui->D4->value();   //Recupera el valor de X2 del spinbox
    ui->X1->value();   //Recupera el valor de X1 del spinbox
    ui->X2->value();   //Recupera el valor de X2 del spinbox
    ui->X3->value();   //Recupera el valor de X1 del spinbox
    ui->X4->value();   //Recupera el valor de X2 del spinbox
    ui->err->value(); //Recupera el valor del error del spinbox

    ui->Texto->clear();     //Se borra el texto
}
/*
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Librería para el uso de cadenas de texto
#include <cmath>    //Librería para el uso de funciones matemáticas

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conexiones
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::funcion(double c){
    return (667.38/c)*(1-exp(-0.146843*c))-40; //devuelve la función de arrastre
}

void MainWindow::metodo(){
    QString temp,temp2,temp3;          //Cadenas de texto de uso temporal
    double x1=ui->X1->value();   //Recupera el valor de X1 del spinbox
    double x2=ui->X2->value();   //Recupera el valor de X2 del spinbox
    double err=ui->Err->value(); //Recupera el valor del error del spinbox
    double xr=0.0;
    double ea=100.0;
    while(ea>err){
        xr=(x1+x2)/2; //Se calcula la bisección
        ea=100*std::abs(xr-x2)/xr; //Se calcula el error
        if(funcion(x1)*funcion(xr)<0)  //Se evaluan la función en X1 y Xr
            x2=xr;
        if(funcion(x1)*funcion(xr)>0)  //Se evaluan la función en X1 y Xr
            x1=xr;
    }
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea));  //Se prepara el texto para ser presentado
    ui->Texto->setText(temp);  //Se presenta el texto
}

void MainWindow::borrar(){
    ui->X1->setValue(0.0);  //Se borran los spinbox
    ui->X2->setValue(0.0);
    ui->Err->setValue(0.0);
    ui->Texto->clear();     //Se borra el texto
}


/*
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Librería para el uso de cadenas de texto
#include <cmath>    //Librería para el uso de funciones matemáticas

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conexiones
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


//Gaus-seidel (Written by: Manas Sharma - University of Delhi)
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    cout.precision(4);
    cout.setf(ios::fixed);
    int n,i,j,k,flag=0,count=0;
    cout<<"\nEnter the no. of equations\n";
    cin>>n;                    //Input no. of equations
    double a[n][n+1];            //declare a 2d array for storing the elements of the augmented matrix
    double x[n];                //declare an array to store the values of variables
    double eps,y;
    cout<<"\nEnter the elements of the augmented matrix row-wise:\n";
    for (i=0;i<n;i++)
        for (j=0;j<=n;j++)
            cin>>a[i][j];
    cout<<"\nEnter the initial values of the variables:\n";
    for (i=0;i<n;i++)
        cin>>x[i];
    cout<<"\nEnter the accuracy upto which you want the solution:\n";
    cin>>eps;
    for (i=0;i<n;i++)                    //Pivotisation(partial) to make the equations diagonally dominant
        for (k=i+1;k<n;k++)
            if (abs(a[i][i])<abs(a[k][i]))
                for (j=0;j<=n;j++)
                {
                    double temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
    cout<<"Iter"<<setw(10);
    for(i=0;i<n;i++)
        cout<<"x"<<i<<setw(18);
    cout<<"\n----------------------------------------------------------------------";
    do                            //Perform iterations to calculate x1,x2,...xn
    {
        cout<<"\n"<<count+1<<"."<<setw(16);
        for (i=0;i<n;i++)                //Loop that calculates x1,x2,...xn
        {
            y=x[i];
            x[i]=a[i][n];
            for (j=0;j<n;j++)
            {
                if (j!=i)
                x[i]=x[i]-a[i][j]*x[j];
            }
            x[i]=x[i]/a[i][i];
            if (abs(x[i]-y)<=eps)            //Compare the ne value with the last value
                flag++;
            cout<<x[i]<<setw(18);
        }
        cout<<"\n";
        count++;
    }while(flag<n);                        //If the values of all the variables don't differ from their previious values with error more than eps then flag must be n and hence stop the loop

    cout<<"\n The solution is as follows:\n";
    for (i=0;i<n;i++)
        cout<<"x"<<i<<" = "<<x[i]<<endl;        //Print the contents of x[]
    return 0;
}


double MainWindow::funcion(double c){
    return (667.38/c)*(1-exp(-0.146843*c))-40; //devuelve la función de arrastre
}

void MainWindow::metodo(){
    QString temp,temp2,temp3;          //Cadenas de texto de uso temporal
    double x1=ui->X1->value();   //Recupera el valor de X1 del spinbox
    double x2=ui->X2->value();   //Recupera el valor de X2 del spinbox
    double err=ui->Err->value(); //Recupera el valor del error del spinbox
    double xr=0.0;
    double ea=100.0;
    while(ea>err){
        xr=(x1+x2)/2; //Se calcula la bisección
        ea=100*std::abs(xr-x2)/xr; //Se calcula el error
        if(funcion(x1)*funcion(xr)<0)  //Se evaluan la función en X1 y Xr
            x2=xr;
        if(funcion(x1)*funcion(xr)>0)  //Se evaluan la función en X1 y Xr
            x1=xr;
    }
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea));  //Se prepara el texto para ser presentado
    ui->Texto->setText(temp);  //Se presenta el texto
}

void MainWindow::borrar(){
    ui->X1->setValue(0.0);  //Se borran los spinbox
    ui->X2->setValue(0.0);
    ui->Err->setValue(0.0);
    ui->Texto->clear();     //Se borra el texto
}



#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>  //Librería para el uso de cadenas de texto
#include <cmath>    //Librería para el uso de funciones matemáticas

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Conexiones
    connect(ui->Procesar,SIGNAL(clicked()),this,SLOT(metodo()));
    connect(ui->Borrar,SIGNAL(clicked()),this,SLOT(borrar()));
    connect(ui->Salir,SIGNAL(clicked()),this,SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

double MainWindow::funcion(double c){
    return (667.38/c)*(1-exp(-0.146843*c))-40; //devuelve la función de arrastre
}

void MainWindow::metodo(){
    QString temp,temp2,temp3;          //Cadenas de texto de uso temporal
    double x1=ui->X1->value();   //Recupera el valor de X1 del spinbox
    double x2=ui->X2->value();   //Recupera el valor de X2 del spinbox
    double err=ui->Err->value(); //Recupera el valor del error del spinbox
    double xr=0.0;
    double ea=100.0;
    while(ea>err){
        xr=(x1+x2)/2; //Se calcula la bisección
        ea=100*std::abs(xr-x2)/xr; //Se calcula el error
        if(funcion(x1)*funcion(xr)<0)  //Se evaluan la función en X1 y Xr
            x2=xr;
        if(funcion(x1)*funcion(xr)>0)  //Se evaluan la función en X1 y Xr
            x1=xr;
    }
    temp.append("Raiz=").append(temp2.setNum(xr)).append("\nError=").append(temp3.setNum(ea));  //Se prepara el texto para ser presentado
    ui->Texto->setText(temp);  //Se presenta el texto
}

void MainWindow::borrar(){
    ui->X1->setValue(0.0);  //Se borran los spinbox
    ui->X2->setValue(0.0);
    ui->Err->setValue(0.0);
    ui->Texto->clear();     //Se borra el texto
}

 */

