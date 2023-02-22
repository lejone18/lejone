#include<iostream>
using namespace std;


class Rectangle 
{
	
	private:
		int Length;
		int Width;
		int Area;
		int Perimeter;
		
		public:
			Rectangle()
	{
		Length=7;
		Width=4;
		Area=0;
		Perimeter=0;
	}
			int calArea();
			int calPerimeter();
			
				void setLength(int length)
				{
				length = length;
				
				}
				void setWidth(int width)
				{
				width = width;
				}
			
				int getLength()
				{
				return(Length);
				}
			
				void setArea()
				{
				Area=Length*Width;
				
				}
				void setPerimeter()
				{
					Perimeter= CalPerimeter();
				}
				int CalArea()
				{
					return(Length * Width);
				}
				
				int CalPerimeter()
				{
					return(2 * Length + 2 * Width);
				}
				void display()
				{
					cout<<"Length"<<Length<<endl;
					cout<<"Width"<<Width<<endl;
					cout<<"Perimeter"<<Perimeter<<endl;
					cout<<"Area"<<Area<<endl;
				}
				
	
};

int main()
{
	Rectangle Calculate;
	
	Calculate.setLength(7);
	Calculate.setWidth(6);
	Calculate.setArea();
	Calculate.setPerimeter();
	
	Calculate.display();
	
	return 0;
}
