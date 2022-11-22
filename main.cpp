//
//  main.cpp
//  С++ ДЗ 32 Садыков Павел
//
//  Created by Павел on 22.11.2022.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

//Задача 1. Двумерный массив
void Matrix(int **arr, const int & row, const int & col);


//Задача 2. Строковый объект
void change(string &str, char &ch1,char &ch2);


//Задача 3. Структура
struct route{
    int num;
    string type;
    string start;
    string finish;
    double price;
};
void show_struct(route Bus25);
void show_struct1(route Tram14);
void show_struct2(route Trolleybus10 );

void fare(route Bus25,route Tram14,route Trolleybus10,int &num,  int &sum);



int main(int argc, const char * argv[]) {
   //Задача 1.
    cout<<"\nЗадача 1. Двумерный  массив\n";
    int ** arr{};
    Matrix(arr, 5, 3);
    
    //Задача 2.
    cout<<"\nЗадача 2. Строковый объект\n";
    string str = "Hello World\n";
    char ch1 = 'l', ch2 = 'o';
    change (str, ch1, ch2);

    //Задача 3
    cout<<"\nЗадача 3. Структура\n";
   
    route Bus25 {25, "BUS", "Railstation", "Airport",25};
    route Tram14 {14, "TRAM", "Academy IT", "District administration",15};
    route Trolleybus10 {10, "Trolleybus", "Factory № 8", "25 Ave",20 };
    show_struct(Bus25);
    show_struct1(Tram14);
    show_struct2(Trolleybus10);
    int num,  sum;
    cout<<"ВВедите количество пассажиров :\n";
    cin>>num;
    fare (Bus25,Tram14,Trolleybus10, num, sum);
    
    return 0;
}
//Задача 1
void Matrix(int **arr, const int & rows, const int & cols){
    arr = new int*[rows];
    for(int i = 0; i<rows;i++)
        arr[i] = new int [cols];
    
    //Очистка двумерного массива
  
    for (int i=0;i<rows;i++)
        delete[]arr[i];
    delete[]arr;
}

//Задача 2
void change(string &str, char &ch1,char &ch2){
    replace(str.begin(), str.end(), ch1, ch2);
    cout << str;// на экране "Heooo Worod"
}
//Задача 3.
void show_struct(route Bus25){
    cout<<"Номер маршрута: "<<Bus25.num<<endl;
    cout<<"Вид транспорта: "<<Bus25.type<<endl;
    cout<<"Начальная остановка: "<<Bus25.start<<endl;
    cout<<"Конечная остановка: "<<Bus25.finish<<endl;
    cout<<endl;
}

void show_struct1 (route Tram14){
    cout<<"Номер маршрута: "<<Tram14.num<<endl;
    cout<<"Вид транспорта: "<<Tram14.type<<endl;
    cout<<"Начальная остановка: "<<Tram14.start<<endl;
    cout<<"Конечная остановка: "<<Tram14.finish<<endl;
    cout<<endl;
    
}

void show_struct2(route Trolleybus10){
    cout<<"Номер маршрута: "<<Trolleybus10.num<<endl;
    cout<<"Вид транспорта: "<<Trolleybus10.type<<endl;
    cout<<"Начальная остановка: "<<Trolleybus10.start<<endl;
    cout<<"Конечная остановка: "<<Trolleybus10.finish<<endl;
    cout<<endl;
    
}

void fare(route Bus25,route Tram14,route Trolleybus10,int &num,  int &sum)
{
    sum=Bus25.price*num;
    cout<<"Номер маршрута: "<<Bus25.num<<endl;
    cout<<"Вид транспорта: "<<Bus25.type<<endl;
    cout<<"Начальная остановка: "<<Bus25.start<<endl;
    cout<<"Конечная остановка: "<<Bus25.finish<<endl;
    cout<<"Стоимость билета: "<<Bus25.price<<endl;
    cout<<"Проезд на автобусе для "<<num<<" человек будет стоить "<<sum<<" руб.\n";
    cout<<endl;

    sum=Tram14.price*num;
    cout<<"Номер маршрута: "<<Tram14.num<<endl;
    cout<<"Вид транспорта: "<<Tram14.type<<endl;
    cout<<"Начальная остановка: "<<Tram14.start<<endl;
    cout<<"Конечная остановка: "<<Tram14.finish<<endl;
    cout<<"Стоимость билета: "<<Tram14.price<<endl;
    cout<<"Проезд на трамвае для "<<num<<" человек будет стоить "<<sum<<" руб.\n";
    cout<<endl;
    
    
    
    sum=Trolleybus10.price*num;
    cout<<"Номер маршрута: "<<Trolleybus10.num<<endl;
    cout<<"Вид транспорта: "<<Trolleybus10.type<<endl;
    cout<<"Начальная остановка: "<<Trolleybus10.start<<endl;
    cout<<"Конечная остановка: "<<Trolleybus10.finish<<endl;
    cout<<"Стоимость билета: "<<Trolleybus10.price<<endl;
    cout<<"Проезд на троллейбусе для "<<num<<" человек будет стоить "<<sum<<" руб.\n\n";
    cout<<endl;
    
    
    
    
}
