#ifndef PROF_H
#define PROF_H

#include<bits/stdc++.h>
#include <sqlite3.h>

using namespace std;


bool checkprof(string id , string password , sqlite3* DB)
{
	return true;
}



void updateattendance(string sid, string cid,int at,sqlite3* DB)
{
       char* messaggeError;
       int exit ;
      string sql = "update studregtable set attendance = at where studentid=sid and courseid=cid;";
      
      cout<<"*****************************************************************\n\n";
    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
    if (exit != SQLITE_OK) {
        std::cerr << "Error Update" << std::endl;
        sqlite3_free(messaggeError);
    }
    else
        std::cout << "Attendance Updated Successfully!" << std::endl;
     cout<<"*****************************************************************\n\n";

      
}


void updatemarks(string sid, string cid,int mr,sqlite3* DB)
{
       char* messaggeError;
       int exit ;
      string sql = "update studregtable set marks = mr where studentid=sid and courseid=cid;";
      
      cout<<"*****************************************************************\n\n";
    exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
    if (exit != SQLITE_OK) {
        std::cerr << "Error Update" << std::endl;
        sqlite3_free(messaggeError);
    }
    else
        std::cout << "Marks Updated Successfully!" << std::endl;
     cout<<"*****************************************************************\n\n";

      
}

#endif
