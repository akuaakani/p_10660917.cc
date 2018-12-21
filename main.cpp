#include <iostream>
using namespace std;

 struct student{
        string stud_id;
        string stud_name;
        string stud_age;
        string stud_telephone;
        string stud_course;
        string stud_grade;
    };

     struct course{
         string courseName;
         string courseCode;
         string lecturer;
    };

     struct staff{
        string staff_id;
        string staff_name;
        string staff_age;
        string staff_telephone;
    };

int main()
{

 //variables
   bool isTrue = true;
   int options,options2;
   bool isTrue2 = true;
   bool isFalse = false;
   bool isFalse2 = true;
   bool isFalse3 = true;
   bool show = false ;
   bool show2 = false;
   bool show3 =false;
   bool found = false;
   bool x = true;
   bool check = false;
   bool check2 = false;
   int number;
   int hold;
   string name , age , id , tel;
   char option3;
   int track= 0;
   int track2 = 0;
   int track3 = 0;
   string options4 ;
   string y;

   string cour_name , cour_code;

   student Students[10];
   course Courses[5];
   staff Staffs[10];

   for(int i = 0; i < 27; i++){
    cout<<"#";
   }
   cout<<"SCHOOL MANAGEMENT SYSTEM";
   for(int i = 0; i < 27; i++){
    cout<<"#";
   }


   while(x){
     cout<<"\n"<<endl;
   cout<<"                   Please choose an option"<<endl;
   cout<<"                   ------------------------"<<endl;
   cout<<"                   To Add/Edit/Remove Student enter 1"<<endl;
   cout<<"                   To Add/Edit/Remove Course enter 2"<<endl;
   cout<<"                   To Add/Edit/Remove Staff enter 3"<<endl;
   cout<<"                   FOR STUDENT: Enter 4 to choose course"<<endl;
   cout<<"                   FOR STAFF: Enter 5 to grade student"<<endl;
   cout<<"                   For academic records of student enter 6"<<endl;
   cout<<"                   To Exit press 7"<<endl;
   cout<<">> ";
   cin>> options ;


    if(options == 1){

   cout<<"Enter 1 to add student"<<endl;
   cout<<"Enter 2 to Edit student"<<endl;
   cout<<"Enter 3 to remove student"<<endl;
   cout<<"Waiting for your input"<<endl;
   cout<<">> ";
   cin>>options2 ;
    if(options2 == 1 ){
         cout<<"**********Complete the form for student***********"<<endl;
        if(track == 0){
        for(int i = 0 ; i < 10 ; i++){
            cout<<""<<endl;
            cout<<"STUDENT ID :";
            cin>>id;
            cout<<""<<endl;

            cout<<"STUDENT Name :";

            cin>>name;
            cout<<""<<endl;

            cout<<"STUDENT age :";
            ;
            cin>>age;
            cout<<""<<endl;

            cout<<"STUDENT Telephone :";

            cin>>tel;
            cout<<""<<endl;

            Students[i] = {id , name, age , tel };
            cout<<"*******Details successfully added********"<<endl;

            cout << "Do you wish to continue (y/n)"<<endl;
            cout<<">> ";
            cin >> option3 ;
            track++;
            if(option3 == 'y'){
                continue;
            }else if(option3=='n'){
                break;
            }else{
                cout<<"wrong input"<<endl;
                break;
            }
        }
    }else if(track > 0){
    if(track == 9){
        cout<<"Sorry cannot add aditional student LIST FULL"<<endl;
    }else{
        for(int i = track ; i < 10 ; i++){

            cout<<"STUDENT ID :";

            cin>>id;
            cout<<""<<endl;

            cout<<"STUDENT Name :";

            cin>>name;
            cout<<""<<endl;

            cout<<"STUDENT age :";

            cin>>age;
            cout<<""<<endl;

            cout<<"STUDENT Telephone :";

            cin>>tel;
            cout<<""<<endl;

            Students[i] = {id , name, age , tel };
            cout<<"*******Details successfully added********"<<endl;

            cout << "Do you wish to continue (y/n)"<<endl;
             cout<<">> ";
            cin >> option3 ;
            track++;
            if(option3 == 'y'){
                continue;
            }else if(option3=='n'){
                break;
            }else{
                cout<<"wrong input"<<endl;
                break;
            }
        }
    }
    }
}else if(options2 == 2){
        cout << "Enter the name of student you want to edit"<<endl;
        cin>>options4;

        for(int i = 0 ; i < 10 ; i++){
            if(options4 == Students[i].stud_name ){
                cout<<"these are the previous details entered"<<endl;
                cout<<"Name: "<<Students[i].stud_name<<endl;
                cout<<"ID: "<<Students[i].stud_id<<endl;
                cout<<"Age: "<<Students[i].stud_age<<endl;
                cout<<"Teephone: "<<Students[i].stud_telephone<<endl;

                cout<<"CHANGE DETAILS"<<endl;
                cout<<""<<endl;

                cout<<"STUDENT ID :";
                cin>>id;
                cout<<""<<endl;

                cout<<"STUDENT Name :";
                cin>>name;
                cout<<""<<endl;

                cout<<"STUDENT age :";
                cin>>age;
                cout<<""<<endl;

                cout<<"STUDENT Telephone :";
                cin>>tel;
                cout<<""<<endl;

                Students[i] = {id , name, age , tel };
                cout<<"*******Details Edited Successfully********"<<endl;
                break;



            }else{
                isFalse = true;
            }
        }if(isFalse == true){
            cout<<"******************NO MATCH FOUND*******************"<<endl;
        }

   }
   else if(options2 ==3){
        cout<<"Enter the name of the student record you want to Erase"<<endl;
        cin>>options4;

        for(int i = 0 ; i < 10 ; i++){
            if(Students[i].stud_name == options4){
                number = i ;
                show = true;
            }

        }
        if(show == true){
            for(int i = number ; i < 10-1; i++){
                Students[i] = Students[i+1] ;


            }
            track-- ;
            cout<<"SUCCESSFULLY ERASED"<<endl;
        }else{
            cout<<"*********The name of the student does not exit**********"<<endl;
        }


   }




}else if(options == 2){


    cout<<"*****ADD/DELETE/EDIT CORSES******"<<endl;
    cout<<"Enter 1 to add courses"<<endl;
    cout<<"Enter 2 to Edit course"<<endl;
    cout<<"Enter 3 to remove student"<<endl;
    cout<<"Waiting for your input"<<endl;
    cin>>options2;
    if(options2 == 1){




















               cout<<"**********COMPLETE THE FORM FOR COURSES***********"<<endl;
        if(track2 == 0){
        for(int i = 0 ; i < 5 ; i++){

            cout<<"COURSE NAME :";
            cin>>id;
            cout<<""<<endl;

            cout<<"COURSE CODE :";
            cin>>name;
            cout<<""<<endl;


            cout<<"LECTURER ID :";
            cin>>tel;
            cout<<""<<endl;



            Courses[i] = {id , name , tel };
            cout<<"*******Course successfully added********"<<endl;


            cout << "Do you wish to continue (y/n)"<<endl;


            cin >> option3 ;
            track2++;
            if(track2 == 5){
        cout<<"Sorry cannot add aditional course ## LIST FULL ##"<<endl;
    }
            if(option3 == 'y'){
                continue;
            }else if(option3=='n'){
                break;
            }else{
                cout<<"wrong input"<<endl;
                break;
            }
        }
    }else if(track2 > 0){
    if(track2 == 5){
        cout<<"Sorry cannot add aditional course ## LIST FULL ##"<<endl;
    }else{
        for(int i = track2 ; i < 5 ; i++){

            cout<<"Course Name :";
            cin>>id;
            cout<<""<<endl;

            cout<<"COURSE CODE :";
            cin>>name;
            cout<<""<<endl;



            Courses[i] = {id , name };
            cout<<"*******Course successfully added********"<<endl;

            cout << "Do you wish to continue (y/n)"<<endl;
            cin >> option3 ;
            track2++;
            if(option3 == 'y'){
                continue;
            }else if(option3=='n'){
                break;
            }else{
                cout<<"wrong input"<<endl;
                break;
            }
        }
    }
    }
}else if(options2 == 2){


     cout << "Enter the name of the course you want to edit"<<endl;
        cin>>options4;

        for(int i = 0 ; i < 5 ; i++){
            if(options4 == Courses[i].courseName ){
                cout<<"these are the previous details entered"<<endl;
                cout<<"Course Name: "<<Courses[i].courseName<<endl;
                cout<<"Course Code: "<<Courses[i].courseCode<<endl;


                cout<<"CHANGE DETAILS"<<endl;
                cout<<""<<endl;

                cout<<"Course Name :";
                cin>>id;
                cout<<""<<endl;

                cout<<"COURSE CODE :";
                cin>>name;
                cout<<""<<endl;



                Courses[i] = {id , name };
                cout<<"*******Course edited successfully ********"<<endl;

                break;



            }else{
                isFalse2 = false;
            }

        }if(isFalse2 == false){
            cout<<"******************NO MATCH FOUND*******************"<<endl;
        }

   }else if(options2 == 3){
    //DELETION OF COURSES
     cout<<"Enter the name of the course record you want to Erase"<<endl;
        cin>>options4;

        for(int i = 0 ; i < 5 ; i++){
            if(Courses[i].courseName == options4){
                number = i ;
                show2 = true;
            }

        }
        if(show2 == true){
            for(int i = number ; i < 5-1; i++){
                Courses[i] = Courses[i+1] ;


            }
            track2-- ;
            cout<<"COURSE SUCCESSFULLY ERASED"<<endl;
        }else{
            cout<<"*********The course does not exit**********"<<endl;
        }

}

}else if(options == 3){
   cout<<"Enter 1 to add staff"<<endl;
   cout<<"Enter 2 to Edit staff"<<endl;
   cout<<"Enter 3 to remove staff"<<endl;
   cout<<"Waiting for your input"<<endl;
   cin>>options2 ;

   if(options2 == 1 ){
         cout<<"**********Complete the form for staff***********"<<endl;
        if(track3 == 0){
        for(int i = 0 ; i < 10 ; i++){

            cout<<"STAFF ID :";
            cin>>id;
            cout<<""<<endl;

            cout<<"STAFF Name :";
            cin>>name;
            cout<<""<<endl;

            cout<<"STAFF age :";
            cin>>age;
            cout<<""<<endl;

            cout<<"STAFF Telephone :";
            cin>>tel;
            cout<<""<<endl;

            Staffs[i] = {id , name, age , tel };
            cout<<"*******Details successfully added********"<<endl;

            cout << "Do you wish to continue (y/n)"<<endl;
            cin >> option3 ;
            track3++;
            if(option3 == 'y'){
                continue;
            }else if(option3=='n'){
                break;
            }else{
                cout<<"wrong input"<<endl;
                break;
            }
        }
    }else if(track3 > 0){
    if(track3 == 9){
        cout<<"Sorry cannot add aditional staff LIST FULL"<<endl;
    }else{
        for(int i = track3 ; i < 10 ; i++){

            cout<<"STAFF ID :";
            cin>>id;
            cout<<""<<endl;

            cout<<"STAFF Name :";
            cin>>name;
            cout<<""<<endl;

            cout<<"STAFF age :";
            cin>>age;
            cout<<""<<endl;

            cout<<"STAFF Telephone :";
            cin>>tel;
            cout<<""<<endl;

            Staffs[i] = {id , name, age , tel };
            cout<<"*******Details successfully added********"<<endl;

            cout << "Do you wish to continue (y/n)"<<endl;
            cin >> option3 ;
            track3++;
            if(option3 == 'y'){
                continue;
            }else if(option3=='n'){
                break;
            }else{
                cout<<"wrong input"<<endl;
                break;
            }
        }
    }
    }
}else if(options2 == 2){


     cout << "Enter the name of the Staff you want to edit"<<endl;
        cin>>options4;

        for(int i = 0 ; i < 10 ; i++){
            if(options4 == Staffs[i].staff_name ){
                cout<<"these are the previous details entered"<<endl;
                cout<<"Staff Name: "<<Staffs[i].staff_name<<endl;
                cout<<"Staff Id: "<<Staffs[i].staff_id<<endl;
                cout<<"Staff Age: "<<Staffs[i].staff_age<<endl;
                cout<<"Staff Telephone: "<<Staffs[i].staff_telephone<<endl;


                cout<<"CHANGE DETAILS"<<endl;
                cout<<""<<endl;

                cout<<"STAFF ID :";
                cin>>id;
                cout<<""<<endl;

                cout<<"STAFF Name :";
                cin>>name;
                cout<<""<<endl;

                cout<<"STAFF age :";
                cin>>age;
                cout<<""<<endl;

                cout<<"STAFF Telephone :";
                cin>>tel;
                cout<<""<<endl;

                Staffs[i] = {id , name, age , tel };
                cout<<"*******Details Edited successfully ********"<<endl;

                break;



            }else{
                isFalse3 = false;
            }

        }if(isFalse3 == false){
            cout<<"******************NO MATCH FOUND*******************"<<endl;
        }

   }else if(options2 == 3){
    //DELETION OF STAFF
     cout<<"Enter the name of the staff record you want to Erase"<<endl;
        cin>>options4;

        for(int i = 0 ; i < 10 ; i++){
            if(Staffs[i].staff_name == options4){
                number = i ;
                show3 = true;
            }

        }
        if(show3 == true){
            for(int i = number ; i < 10-1; i++){
                Staffs[i] = Staffs[i+1] ;


            }
            track3-- ;
            cout<<"Staff SUCCESSFULLY ERASED"<<endl;
        }else{
            cout<<"*********The staff does not exit**********"<<endl;
        }

}

}else if(options == 4){

    cout<<"Enter your student id to choose a course"<<endl;
    cout<<">>";
    cin>>options4;
    for(int i = 0 ; i < 10 ; i++){
        if(options4 == Students[i].stud_id){
            found = true;
            hold = i;
            break;
        }
    }
    if(track > 0){
        if(track2 > 0){
             if(found == true){
            cout<<"Available Courses Are:"<<endl;
            for(int i = 0 ; i < 5 ; i ++){
                cout<< i <<"." <<Courses[i].courseName<<endl;
            }
            cout << "Enter the number of the course you want to offer"<<endl;
            cout << ">> "<<endl;
            cin>>options2 ;

            Students[hold].stud_course = Courses[options2].courseName;

            cout <<"*****COURSE SUCCESSFULLY ADDED *********"<<endl;

    }else{
        cout <<"THE ID YOU ENTERED  DOES NOT EXIST"<<endl;
    }
        }else{
            cout<<"NO COURSE AVAILABLE... SORRY TRY AGAIN LATER"<<endl;
        }


    }else{
        cout<<"NO STUDENT ADDED... SORRY MAKE SURE YOU ARE REGISTERED"<<endl;
    }

}else if(options==5){
    cout<<"Enter your staff id to proceed"<<endl;
    cout <<">> "<<endl;
    cin>>options4;

    for(int i = 0 ; i < 10; i++){
        if(Staffs[i].staff_id == options4){
            check = true;
            break;
        }
    }
    if(check == true){
        for(int i = 0 ;i < 5 ; i++){
            if(options4 == Courses[i].lecturer){
                    y = Courses[i].courseName;
                    check2 = true;

            }
        }
    }else{
        cout<<"staff does not exit"<<endl;
    }
    if(check2 == true){
        cout<<"Names of student. Please enter their grades"<<endl;
        for(int i = 0 ; i < 10 ; i++){
            if(Students[i].stud_course == y ){
                cout<<i<<"."<<Students[i].stud_grade<<": "<<endl;
                cin>>option3;

                Students[i].stud_grade = option3 ;

            }
        }

    }else{
        cout<<"sorry you are not a lecturer"<<endl;
    }

}else if(options == 6 ){

    for(int i = 0 ; i < 10 ; i++){

        cout<< Students[i].stud_course <<" :  " << Students[i].stud_grade<<endl;
    }

}else if(options == 7){
        x=false;
    }




 cout<<track<<endl;
 cout<<track2<<endl;
 cout<<track3<<endl;




   }
   return 0 ;
}
