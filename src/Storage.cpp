#include <string>
#include <vector>
#include <iostream>
#include "Storage.h"

using namespace std;

//------------------------------------------------------------------
File::Method::Method(){
};

void File::Method::PutName(string MName){
   MethodName = MName;
};

int File::Method::GetLength(){
  return Lines.size();
};

string File::Method::GetName(){
  return MethodName;
};

string File::Method::GetLine(int index){
  return Lines[index];
};

void File::Method::AddLine(string Line){
    Lines.push_back(Line);
};

void File::Method::AddLoopRange(int begin, int finish){
  vector<int> newRange(2);
  newRange[0] = begin - 1; // -1 to make up for indexes starting at 0
  newRange[1] = finish - 1;
  Loops.push_back(newRange);
};

vector<int> File::Method::GetLoopRange(int index){
  vector<int> Range(2);
  Range[0] = Loops[index][0];
  Range[1] = Loops[index][1];
  return Range;
};
//------------------------------------------------------------------
File::File(string Name_of_File){
  FileName = Name_of_File;
};

void File::AddMethod(Method NewEntry){
  MethodsInFile.push_back(NewEntry);
};

void File::AddMethodDef(string NewDef){
  MethodDefs.push_back(NewDef);
};

void File::AddLibrary(string NewLib){
  Libraries.push_back(NewLib);
};

string File::GetMethodDef(int index){
  if(index < MethodDefs.size() && index >= 0){
    return MethodDefs[index];
  }
  else{
    return "Error: Index out of bounds";
  }

};

string File::GetLibrary(int index){
  if(index < Libraries.size() && index >= 0){
    return Libraries[index];
  }
  else{
    return "Error: Index out of bounds";
  }
};

//------------------------------------------------------------------
File* New_File(string File_Name){
  File *NFile = new File(File_Name);
  return NFile;
};
