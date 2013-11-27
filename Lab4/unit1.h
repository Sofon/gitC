System::String^ * and_CharToSysString(char* ch) 
{
char * chr=new char[]=ch;
System::String^ str;
for(int i=0;chr[i]!='\0';i++)
{
     str+=wchar_t(ch[i]);
}
return str;
}