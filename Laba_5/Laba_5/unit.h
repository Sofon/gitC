 
   float Summ(float x, float eps) { 
			  float Sum=0; //��������� �����
			  int n=1; //�������� � ������ ������� �������� �����������
			  float a=1; 
			  float b;
			  
			    while (fabs(a)>eps) { //���� �� ���������� ����������� ��������
					b= (-x*x)/(2*n*(2*n-3));
					a*=b; Sum+=a; n++;
				}
				 return Sum;
				}

			 float CheckSumm(float x) {  //���������� ����������� �����
				 return cos(x) + x*sin(x) - 1;
			 }