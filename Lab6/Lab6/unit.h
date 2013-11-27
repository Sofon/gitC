#include <iostream>
class File {
	char *name, *date; //им€ файла и дата создани€ 
	int length; //длина файла
	enum  { NO_ERROR, FILE_EMPTY, NAME_EMPTY}; //виды ошибок
	char *text;
	int error;
	bool status;
public:
	File(): name(""), date(""), length(0), text(""), status(false) {}; //конструктор
    int Get_Length(); 
	void Put_Length(int siz); 
	char *Get_Name();
	void Put_Name(char * ch);
	char *Get_Date();
	void Put_Date(char *ch);
	bool Get_Status();
	void Change_Status(bool sta);
	char *Get_Text();
	void Change_Text(char *Text);
	void Add_Text(char *AddText);
	void CleanFile();
    int isError(); //проверка полей объекта на ошибки
};

File FileObject;  //глобальное объ€вление объекта класса File

int File::isError() {  // проверка полей на ошибки
  if (strlen(name)==0) error=NAME_EMPTY; else //им€ - пуста€ строка
		  if (length==0) error=FILE_EMPTY; else //
		  error=NO_ERROR;
   return error;
}


 inline int File::Get_Length() { 
     return length;
}

 inline void File::Put_Length(int len) {
	 length=len;
 }

inline char *File::Get_Date() {
	return date;
}

inline void File::Put_Date(char *ch) {
	date=ch;
}

inline char *File::Get_Name() {
	return name;
}

inline void File::Put_Name(char *ch) {
	name=ch;
}

inline void File::Change_Status(bool sta) {
	status=sta;
}

inline bool File::Get_Status() {
	return status;
}

inline char *File::Get_Text() {
	return text;
}

inline void File::Change_Text(char *Text) {
 text=Text;
}
inline void File::Add_Text(char *AddText) {
 strcat(text,AddText);
 length=strlen(text);
}
inline void File::CleanFile() {
	text="";
	status=false;
	name="";
	date="";
	length=0;

}



