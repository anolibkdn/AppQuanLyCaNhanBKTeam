#include<QTextStream>
#include<QDate>
#include<QTime>

int main(int argc, char *argv[])
{
    QTextStream out(stdout);

    QDate dt1(2018,8,20);

    out<<"this date is day: "<<dt1.toString()<<endl;

    return 0;
}

