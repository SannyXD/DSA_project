#include "mainwindow.h"
#include <QApplication>
#include "bst.h"

Patient r[4];
BST bigdata;
void setdata(){

    qDebug()<<"Inside setup data";

    r[0].patientNo= 1;
    r[0].age=21;
    r[0].gender = "Male";
    r[0].fname= "Sanim";
    r[0].lname= "Khatri";
    r[0].patienttype = "Outpatient";
    r[0].dateofVisit = "2078/11/25";
    r[0].dateofDischarge = "0000";
    r[0].detail = "Regular Checkup";

    r[1].patientNo= 2;
    r[1].age=21;
    r[1].gender = "Male";
    r[1].fname= "Sandesh";
    r[1].lname= "Thapa";
    r[1].patienttype = "Outpatient";
    r[1].dateofVisit = "2078/11/25";
    r[1].dateofDischarge = "0000";
    r[1].detail = "Nothing";

    r[2].patientNo= 3;
    r[2].age=21;
    r[2].gender = "Male";
    r[2].fname= "Suvash";
    r[2].lname= "Joshi";
    r[2].patienttype = "Inpatient";
    r[2].dateofVisit = "2078/10/25";
    r[2].dateofDischarge = "2078/11/25";
    r[2].detail = "General Ward";

    r[3].patientNo= 4;
    r[3].age=22;
    r[3].gender = "Female";
    r[3].fname= "Someone";
    r[3].lname= "Someone";
    r[3].patienttype = "Inpatient";
    r[3].dateofVisit = "2078/11/25";
    r[3].dateofDischarge = "0000";
    r[3].detail = "ICU";

}
void tree_setup(){
    qDebug()<<"Inside tree setup";
    for(int i=0; i<4;i++){
        qDebug()<<"Inside tree setup "<<i;
        bigdata.root=bigdata.insert(bigdata.root,r[i]);
        qDebug()<<bigdata.root->a.patientNo;
        qDebug()<<bigdata.MAXID;
        bigdata.MAXID++;
    }
}

int apple=12;

int main(int argc, char *argv[])
{
    qDebug()<<"Started!";
    setdata();
    tree_setup();
    //qDebug()<<bigdata.root->a.fname;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
