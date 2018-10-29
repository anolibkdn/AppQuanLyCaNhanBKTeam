#include <QCoreApplication>
//#include<QTextStream>

//int main(int argc, char *argv[])
//{
//   // QCoreApplication a(argc, argv);
//    QTextStream out(stdout);

//    QString str1 = "The night train";
//    out << str1 << endl;

//    QString str2("A yellow rose");
//    out << str2 << endl;

//    std::string s1 = "A blue sky";
//    QString str3 = s1.c_str();
//    out << str3 << endl;

//    std::string s2 = "A thick fog";
//    QString str4 = QString::fromLatin1(s2.data(), s2.size());
//    out << str4 << endl;

//    char s3[] = "A deep forest";
//    QString str5(s3);
//    out << str5 << endl;
//    return 0;
//   // return a.exec();
//}

#include<QTextStream>
#include<QDate>
#include<QTime>
#include<QVector>
//#include "vectotrongcpll.cpp"
int main(void)
{
    QTextStream out(stdout);

    QDate dd1(2018,8,20);// thiet lap ngay theo doi tuong
    //qdate voi doi so la nam, thang, ngay

    out<<"this date is day: "<<dd1.toString()<<endl;

    QTime dt1(12,53,45);// thiet lap theo quy tac hh/mm/ss/zzz
    out<<"this is time of clock: " << dt1.toString()<<endl;


//    ============================================
//    current time and date
//    ============================================

    QDate dd2 = QDate::currentDate();
    QTime dt2 = QTime::currentTime();

    out<<"this is time and date currently: "<<dt2.toString()<<" + "<<dd2.toString()<<endl;


//    QList<int> years({2010, 2011, 2012, 2013, 2014, 2015, 2016});

//    foreach (int year, years) {
//        if (QDate::isLeapYear(year)) {
//            out << year << " is a leap year" << endl;
//        } else {
//            out << year << " is not a leap year" << endl;
//        }
//    }
//    vectotrongc();
    QVector<int> vals = {1, 2, 3, 4, 5};

    out << "The size of the vector is: " << vals.size() << endl;

    out << "The first item is: " << vals.first() << endl;
    out << "The last item is: " << vals.last() << endl;

    vals.append(6);
    vals.prepend(0);

    out << "Elements: ";

    for (int val : vals) {
        out << val << " ";
    }

    out << endl;
    return 0;
}

