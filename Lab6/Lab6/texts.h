using namespace System::Runtime::InteropServices;
 
char * and_SysStringToChar(System::String^ string) // ������� ������ �� String^ � (char*)
{
return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

System::String^  and_CharToSysString(char* ch)  // ������� ����� �� (char *) � String^
{
char * chr=new char[]=ch;
System::String^ str;
for(int i=0;chr[i]!='\0';i++)
{
     str+=wchar_t(ch[i]);
}
return str;
}
