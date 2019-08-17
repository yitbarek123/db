#include <iostream>
#include<iterator>
#include<set>
#include<algorithm>
using namespace std;



class check{



public: std::set<string> set4() {
        static set<string> s4;
        s4.insert("m");
        s4.insert("n");
        s4.insert("o");
        s4.insert("p");
        s4.insert("q");

        return s4;
    }


public: std::set<string> set3() {
        static set<string> s3;
        s3.insert("20");
        s3.insert("21");
        s3.insert("22");
        s3.insert("23");
        s3.insert("24");

        return s3;
    }
public: std::set<string> set1() {
        static set<string> s1;
        s1.insert("a");
        s1.insert("b");
        s1.insert("c");
        s1.insert("d");
        s1.insert("e");

        return s1;
    }
public:set<string> set2() {
        static set<string> s2;
        s2.insert("10");
        s2.insert("11");
        s2.insert("12");
        s2.insert("13");
        s2.insert("14");
       // s2.insert("60");
        return s2;
    }
public:set<set<string>> set5(){
        static set<set<string>> s5;
        s5.insert(set1());
        s5.insert(set2());
        return s5;
    }
public:set<set<string>> set6(){
        static set<set<string>> s6;
        s6.insert(set3());
        s6.insert(set4());
        return s6;
    }

public:void ps5(){
        static set<set<string>> s5;
        s5.insert(set1());
        s5.insert(set2());
        cout<<"Table 1: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
         //   cnt++;
        }
         cout<<"},";
    }
public:void ps6(){
        static set<set<string>> s6;
        s6.insert(set3());
        s6.insert(set4());
        cout<<endl<<"Table 2: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s6.begin();new_it!=s6.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
            //   cnt++;
        }
        cout<<"},";
    }

public:void print() {
        int cnt=0;
        static set<string>::iterator itr;
        cout <<endl<<"Table 1"<<endl<<"column 1 name:{ ";
        for(itr=set1().begin();itr!=set1().end();++itr){
            cout<<*itr;
            if(cnt!=set1().size()-1){
                cout<<",";
            }
            cnt++;
        }
        cout << "}";
        cnt=0;
        cout<<endl<<"column 2 age:{ ";
        for(itr=set2().begin();itr!=set2().end();++itr){
            cout<<*itr;
            if(cnt!=set2().size()-1){
                cout<<",";
            }
            cnt++;
        }
        cout << "}";
        cout <<endl<<"Table 2"<<endl<<"column 1 name:{ ";
        for(itr=set4().begin();itr!=set4().end();++itr){
            cout<<*itr;
            if(cnt!=set4().size()-1){
                cout<<",";
            }
            cnt++;
        }
        cout << "}";
        cnt=0;
        cout<<endl<<"column 2 age:{ ";
        for(itr=set3().begin();itr!=set3().end();++itr){
            cout<<*itr;
            if(cnt!=set3().size()-1){
                cout<<",";
            }
            cnt++;
        }
        cout << "}";

    }

public: void choose(){
        int temp;
        cout<<endl<<"choose:"<<endl<<"1 select"<<endl<<"2 union"<<endl<<"3 cross join"<<endl<<"4 inner join"<<endl<<"5 natural join"<<endl<<"6 left outer join"<<endl<<"7 right outer join"<<endl<<"8 full outer join"<<endl;
        cin>>temp;
        choice(temp);
    }

public: void crosjoin(){
      //  int c=1;
        set<string> inner1,inner3,inner4;
        set<string> inner2;
        set< set<string> > outer1,outer2,outer3,outer4;
        set< set<string> >:: iterator new_it,new_it2,new_it3;
        set<string>::iterator it,it2,it3,it4,it5,new_it4,it7;

        outer1.insert(set1());
        outer2.insert(set3());

      outer3.insert(set3());
        outer4.insert(set4());
     // it4=set4().begin();
//outer1.insert(inner1);
//outer1.insert(inner2);
static set<string> s4;
        s4.insert("m");
        s4.insert("n");
        s4.insert("o");
        s4.insert("p");
        s4.insert("q");
        it3=s4.begin();

        int c=0;
       // it4=set2().begin();
      // it5=set4().begin();
static set<string> s2;
        s2.insert("10");
        s2.insert("11");
        s2.insert("12");
        s2.insert("13");
        s2.insert("14");
        it7=s2.begin();
        cout<<"{";
        for(new_it=outer1.begin();new_it!=outer1.end();new_it++)
        { cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {          //  cout<<"}";

                for(new_it2=outer2.begin();new_it2!=outer2.end();new_it2++){
                    for(it2=new_it2->begin();it2!=new_it2->end();it2++){
                   // if(c%5==0){

                            cout << "" << *it << "," << *it7;//<<","<<*it3<<","<<*it2;//<<","<<*it3

                            if (c % 2 == 1) {
                                cout << "}" << ",{";
                           } else {
                                cout << ",";
                          }
//}
                          c++;
                    }         it7++;//it3++;


                }
            }
         //   cout<<"}";

        }

          for(new_it=outer3.begin();new_it!=outer3.end();new_it++)
        {// cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {          //  cout<<"}";

                for(new_it2=outer4.begin();new_it2!=outer4.end();new_it2++){
                    for(it2=new_it2->begin();it2!=new_it2->end();it2++){
                   // if(c%5==0){

                            cout << "" << *it3 << "," << *it;//<<","<<*it3<<","<<*it2;//<<","<<*it3

                            if (c % 2 == 1) {
                                cout << "}" << ",{";
                           } else {
                               cout << ",";
                          }
//}
  c++;
                    }         it3++;//it7++;


                }
            }
            cout<<"}";

        }
        cout<<"}";
choose();
}
public:void innerjoin(){
       set<string> s1;
       set<string> s2;
       set<string> s3;
       set<string> s4;
       set<set<string>> outer1;
       set<set<string>> outer2;

       s1.insert("a");
       s1.insert("b");
       s1.insert("c");
       s1.insert("d");
       s1.insert("e");

       s2.insert("10");
       s2.insert("11");
       s2.insert("12");
       s2.insert("13");
       s2.insert("14");

       s3.insert("m");
       s3.insert("n");
       s3.insert("0");
       s3.insert("p");
       s3.insert("q");

       s4.insert("10");
       s4.insert("11");
       s4.insert("20");
       s4.insert("21");
       s4.insert("22");
cout<<endl<<"Before inner join"<<endl;
        static set<set<string>> s5;
        s5.insert(s1);
        s5.insert(s2);
        cout<<"Table 1: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
         //   cnt++;
        }
         cout<<"},";

           static set<set<string>> s6;
        s6.insert(s3);
        s6.insert(s4);
        cout<<endl<<"Table 2: {";
        set< set<string> >:: iterator new_it2;
        set<string>::iterator it2,it7,it10,it11;  cnt=1;
        for(new_it2=s6.begin();new_it2!=s6.end();new_it2++)
        {    cout<<"{";
            for(it2 = new_it2->begin(); it2!=new_it2->end(); ++it2)
            {
                cout<<*it2<<",";
            }
            cout<<"}";
            //   cnt++;
        }
        cout<<"},";

        cout<<endl<<"After inner join operation on age column"<<endl;
 cout<<"Inner join: {";

 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {   // cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {  if(*it==*it7){
                cout<<*it10<<","<<*it7<<","<<*it11<<","<<*it<<"},{";}it7++;it10++;it11++;
            }
            //cout<<"}";
         //   cnt++;
        }
         cout<<"},";

choose();
}
public:void naturaljoin(){
       set<string> s1;
       set<string> s2;
       set<string> s3;
       set<string> s4;
       set<set<string>> outer1;
       set<set<string>> outer2;

       s1.insert("a");
       s1.insert("b");
       s1.insert("c");
       s1.insert("d");
       s1.insert("e");

       s2.insert("10");
       s2.insert("11");
       s2.insert("12");
       s2.insert("13");
       s2.insert("14");

       s3.insert("m");
       s3.insert("n");
       s3.insert("0");
       s3.insert("p");
       s3.insert("q");

       s4.insert("10");
       s4.insert("11");
       s4.insert("20");
       s4.insert("21");
       s4.insert("22");
cout<<endl<<"Before natural join"<<endl;
        static set<set<string>> s5;
        s5.insert(s1);
        s5.insert(s2);
        cout<<"Table 1: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
         //   cnt++;
        }
         cout<<"},";

           static set<set<string>> s6;
        s6.insert(s3);
        s6.insert(s4);
        cout<<endl<<"Table 2: {";
        set< set<string> >:: iterator new_it2;
        set<string>::iterator it2,it7,it10,it11;  cnt=1;
        for(new_it2=s6.begin();new_it2!=s6.end();new_it2++)
        {    cout<<"{";
            for(it2 = new_it2->begin(); it2!=new_it2->end(); ++it2)
            {
                cout<<*it2<<",";
            }
            cout<<"}";
            //   cnt++;
        }
        cout<<"},";

        cout<<endl<<"After natural join operation "<<endl;
 cout<<"Natural join: {";

 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {   // cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {  if(*it==*it7){
                cout<<*it10<<","<<*it11<<","<<*it<<"},{";}it7++;it10++;it11++;
            }
            //cout<<"}";
         //   cnt++;
        }
         cout<<"},";

choose();
}

public:void leftouterjoin(){
        set<string> s1;
       set<string> s2;
       set<string> s3;
       set<string> s4;
       set<set<string>> outer1;
       set<set<string>> outer2;

       s1.insert("a");
       s1.insert("b");
       s1.insert("c");
       s1.insert("d");
       s1.insert("e");

       s2.insert("10");
       s2.insert("11");
       s2.insert("12");
       s2.insert("13");
       s2.insert("14");

       s3.insert("m");
       s3.insert("n");
       s3.insert("0");
       s3.insert("p");
       s3.insert("q");

       s4.insert("10");
       s4.insert("11");
       s4.insert("20");
       s4.insert("21");
       s4.insert("22");
cout<<endl<<"Before left outer join"<<endl;
        static set<set<string>> s5;
        s5.insert(s2);
        s5.insert(s1);
        cout<<"Table 1: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
         //   cnt++;
        }
         cout<<"},";

           static set<set<string>> s6;
        s6.insert(s4);
        s6.insert(s3);
        cout<<endl<<"Table 2: {";
        set< set<string> >:: iterator new_it2;
        set<string>::iterator it2,it7,it10,it11;  cnt=1;
        for(new_it2=s6.begin();new_it2!=s6.end();new_it2++)
        {    cout<<"{";
            for(it2 = new_it2->begin(); it2!=new_it2->end(); ++it2)
            {
                cout<<*it2<<",";
            }
            cout<<"}";
            //   cnt++;
        }
        cout<<"},";

        cout<<endl<<"After left outer join on age"<<endl;
 cout<<"left outer join: {";
int flag=s1.size(),temp=0;
 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {   // cout<<"{";
           // if(temp<5){cout<<"temp"<<temp;
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {  if(*it==*it7 && temp<flag){
                cout<<*it10<<","<<*it7<<","<<*it11<<","<<*it<<"},{";}
               if(*it!=*it7 && temp<flag){
                cout<<*it10<<","<<*it7<<","<<"null"<<","<<"null"<<"},{";
                }
                  temp++;

                it7++;it10++;it11++;
            }
            it7=s4.begin();it10=s1.begin();it11=s3.begin();
            //cout<<"}";
         //   cnt++;
         //temp++;
         //}//temp++;
        }
         cout<<"},";

choose();
}


public:void rightouterjoin(){
        set<string> s1;
       set<string> s2;
       set<string> s3;
       set<string> s4;
       set<set<string>> outer1;
       set<set<string>> outer2;

       s1.insert("a");
       s1.insert("b");
       s1.insert("c");
       s1.insert("d");
       s1.insert("e");

       s2.insert("10");
       s2.insert("11");
       s2.insert("12");
       s2.insert("13");
       s2.insert("14");

       s3.insert("m");
       s3.insert("n");
       s3.insert("0");
       s3.insert("p");
       s3.insert("q");

       s4.insert("10");
       s4.insert("11");
       s4.insert("20");
       s4.insert("21");
       s4.insert("22");
cout<<endl<<"Before right outer join"<<endl;
        static set<set<string>> s5;
        s5.insert(s2);
        s5.insert(s1);
        cout<<"Table 1: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
         //   cnt++;
        }
         cout<<"},";

           static set<set<string>> s6;
        s6.insert(s4);
        s6.insert(s3);
        cout<<endl<<"Table 2: {";
        set< set<string> >:: iterator new_it2;
        set<string>::iterator it2,it7,it10,it11;  cnt=1;
        for(new_it2=s6.begin();new_it2!=s6.end();new_it2++)
        {    cout<<"{";
            for(it2 = new_it2->begin(); it2!=new_it2->end(); ++it2)
            {
                cout<<*it2<<",";
            }
            cout<<"}";
            //   cnt++;
        }
        cout<<"},";

        cout<<endl<<"After right outer join on age"<<endl;
 cout<<"Inner join: {";
int flag=s3.size(),temp=0;
 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {   // cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {  if(*it==*it7 && temp<flag){
                cout<<*it10<<","<<*it7<<","<<*it11<<","<<*it<<"},{";}
               if(*it!=*it7 && temp<flag){
                cout<<"null"<<","<<"null"<<","<<*it11<<","<<*it<<"},{";
                }
                 temp++;

                it7++;it10++;it11++;
            }
            it7=s4.begin();it10=s1.begin();it11=s3.begin();
            //cout<<"}";
         //   cnt++;
        }
         cout<<"},";

choose();
}


public:void fullouterjoin(){
       set<string> s1;
       set<string> s2;
       set<string> s3;
       set<string> s4;
       set<set<string>> outer1;
       set<set<string>> outer2;

       s1.insert("a");
       s1.insert("b");
       s1.insert("c");
       s1.insert("d");
       s1.insert("e");

       s2.insert("10");
       s2.insert("11");
       s2.insert("12");
       s2.insert("13");
       s2.insert("14");

       s3.insert("m");
       s3.insert("n");
       s3.insert("0");
       s3.insert("p");
       s3.insert("q");

       s4.insert("10");
       s4.insert("11");
       s4.insert("20");
       s4.insert("21");
       s4.insert("22");
cout<<endl<<"Before full outer join"<<endl;
        static set<set<string>> s5;
        s5.insert(s2);
        s5.insert(s1);
        cout<<"Table 1: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=1;
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {    cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
            }
            cout<<"}";
         //   cnt++;
        }
         cout<<"},";

           static set<set<string>> s6;
        s6.insert(s4);
        s6.insert(s3);
        cout<<endl<<"Table 2: {";
        set< set<string> >:: iterator new_it2;
        set<string>::iterator it2,it7,it10,it11;  cnt=1;
        for(new_it2=s6.begin();new_it2!=s6.end();new_it2++)
        {    cout<<"{";
            for(it2 = new_it2->begin(); it2!=new_it2->end(); ++it2)
            {
                cout<<*it2<<",";
            }
            cout<<"}";
            //   cnt++;
        }
        cout<<"},";

        cout<<endl<<"After full outer join on age"<<endl;
 cout<<"full outer join: {";
int flag=s1.size(),temp=0;
 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {   // cout<<"{";
           // if(temp<5){cout<<"temp"<<temp;
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {  if(*it==*it7 && temp<flag){
                cout<<*it10<<","<<*it7<<","<<*it11<<","<<*it<<"},{";}
               if(*it!=*it7 && temp<flag){
                cout<<*it10<<","<<*it7<<","<<"null"<<","<<"null"<<"},{";
                }
                  temp++;

                it7++;it10++;it11++;
            }
            it7=s4.begin();it10=s1.begin();it11=s3.begin();
            //cout<<"}";
         //   cnt++;
         //temp++;
         //}//temp++;
        }
        flag=s3.size();temp=0;
 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();

 flag=s3.size();temp=0;
 cnt=1;
 it7=s4.begin();it10=s1.begin();it11=s3.begin();
        for(new_it=s5.begin();new_it!=s5.end();new_it++)
        {   // cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {  if(*it==*it7 && temp<flag){
                //cout<<*it10<<","<<*it7<<","<<*it11<<","<<*it<<"},{";
                }
               if(*it!=*it7 && temp<flag){
                cout<<"null"<<","<<"null"<<","<<*it11<<","<<*it<<"},{";
                }
                 temp++;

                it7++;it10++;it11++;
            }
            it7=s4.begin();it10=s1.begin();it11=s3.begin();
            //cout<<"}";
         //   cnt++;
        }
         cout<<"},";
//         cout<<"},";

choose();
}



public: void selectset(){
        int temp;
        cout<<endl<<"choose table"<<endl;
        cin>>temp;
        switch(temp){
            //case 1:insertset();
            case 1:selectset1();
            case 2:selectset2();
      //      case 3:crossjoin();
            default: selectset();
        }
    }
public: void insertset(){
       int temp;string temp2;
       cout<<"slect set"<<endl;
       cin>>temp;
       if(temp==1){
           cout<<"insert into set 1: ";
           cin>>temp2;
           set1().insert(temp2);
       }
        if(temp==2){
            cout<<"insert into set 2: ";
            cin>>temp2;
            set2().insert(temp2);
        }
 //       print();
 choose();
    }


public:void selectset1(){
        std::set<string> sett = set1();
        string temp;        //std::set<int> even = set2();
        cout<<endl<<"insert the minimum number for selection: "<<endl;
        cin>>temp;

        //std::set<int> s;
        //std::merge(odd.begin(), odd.end(),
          //         even.begin(), even.end(),
            //       std::inserter(s, s.begin()));

        for (auto const &e: sett) {
            if(e>temp){
                std::cout << e << ' ';}
        }
choose();
    }

public:void selectset2(){
        std::set<string> sett = set2();
        string temp;        //std::set<int> even = set2();
        cout<<endl<<"insert the minimum number for selection: "<<endl;
        cin>>temp;

        //std::set<int> s;
        //std::merge(odd.begin(), odd.end(),
        //         even.begin(), even.end(),
        //       std::inserter(s, s.begin()));

        for (auto const &e: sett) {
          if(e>temp){
                std::cout << e << ' ';}
        }
        choose();

    }

public:void unionset(){
        std::set<set<string>> first = set5();
        std::set<set<string>> second = set6();

        std::set<set<string>> s;
        std::merge(first.begin(), first.end(),
                   second.begin(), second.end(),
                   std::inserter(s, s.begin()));

        cout<<endl<<"Union: {";
        set< set<string> >:: iterator new_it;
        set<string>::iterator it;int cnt=0;
        for(new_it=s.begin();new_it!=s.end();new_it++)
        {    //cout<<"{";
            for(it = new_it->begin(); it!=new_it->end(); ++it)
            {
                cout<<*it<<",";
                if(cnt==set5().size()){
                //    cout<<"}";
                }
             //   cnt++;
            }
            cnt++;
            if(cnt==2){
   cout<<"}"<<"{";}
        }
        cout<<"}";
choose();
    }

public:void printing(set<string> a){
        static set<string>::iterator itr;
        int cnt=0;
        cout <<endl<< "union:{ ";
        for(itr=a.begin();itr!=a.end();++itr){
            cout<<*itr;
            if(cnt!=a.size()-1){
                cout<<",";
            }
            cnt++;
        }
        cout << "}"<<"{";

    }

public: void choice(int temp){
        switch(temp){
           // case 1:insertset();
            case 1:selectset();
            case 2:unionset();
            case 3:crosjoin();
            case 4:innerjoin();
            case 5:naturaljoin();
            case 6:leftouterjoin();
            case 7:rightouterjoin();
            case 8:fullouterjoin();
            default:choose();
        }

    }

};
int main() {
    check setclass;
    // set1.ch();
    //setclass.unionset();
    setclass.ps5();
    setclass.ps6();
    setclass.print();
    setclass.choose();


    return 0;
}

