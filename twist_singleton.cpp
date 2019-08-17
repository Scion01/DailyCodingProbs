/*Implement the singleton pattern with a twist. First, instead of storing one instance, store two instances. And in every even call of getInstance(), return the first instance and in every odd call of getInstance(), return the second instance.*/
//this is not working
#include<iostream>

using namespace std;

class twisted{
	private static twisted obj1;
	private static twisted obj2;
	private int bla=0;
	private twisted(){
	}
	public static twisted twisted_get_instance(){
		if(obj1 == null && !bla){
			obj1 = new twisted();
			cout<<"obj1 returned!!!"<<endl;
			return obj1;
		}else if(!bla){
			cout<<"existing obj1 returned!!!"<<endl;
			return obj1;
		}
		else if(obj2 == null && bla){
			obj2 = new twisted();
			cout<<"obj2 returned!!"<<endl;
		}else{
			cout<<"existing obj2 returned!!!"<<endl;
			return obj2;
		}
		bla != bla;
		
	}
}

int main(){
	twisted::twisted_get_instance();
	twisted::twisted_get_instance();
	twisted::twisted_get_instance();
	twisted::twisted_get_instance();
	twisted::twisted_get_instance();
	twisted::twisted_get_instance();
	return 0;
}
