
#include<QVector>
#include<QTextStream>


void vectotrongc(){
    QTextStream out(stdout);
//    QVector<> vals(5,10);
//    out<<"the size of the vecto: "<<vals.size()<<endl;
//    out<<"the first item is "<<vals.first()<<endl;

//    for(int var : vals){
//        out<<var<<"  ";
//    }return;
    QVector<int> vals(1);

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
    return;
}
