#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(int argc,char *argv[]){
ofstream file_to_plot("file1.txt");
if (file_to_plot.is_open()){
file_to_plot<<"14    47\n";
file_to_plot<<"15    70\n";
file_to_plot<<"16    54\n";
file_to_plot<<"17    28\n";
file_to_plot<<"19    44\n";
file_to_plot<<"22    80\n";
cout<< "finished\n ";
}else
cout<<"unable to open the file";
return 0;
}
