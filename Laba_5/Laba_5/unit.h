 
   float Summ(float x, float eps) { 
			  float Sum=0; //начальная сумма
			  int n=1; //начинаем с самого первого элемента суммировать
			  float a=1; 
			  float b;
			  
			    while (fabs(a)>eps) { //пока не достигнута необходимая точность
					b= (-x*x)/(2*n*(2*n-3));
					a*=b; Sum+=a; n++;
				}
				 return Sum;
				}

			 float CheckSumm(float x) {  //Вычисление контрольной суммы
				 return cos(x) + x*sin(x) - 1;
			 }