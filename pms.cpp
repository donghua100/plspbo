#include "basis_pms.h"
#include "pms.h"
#include <sstream>

int main(int argc, char *argv[])
{
	srand((unsigned)time(NULL));
	start_timing();
	Satlike s;
	stringstream ss;
	ss.str("10000");
	int cutoff;
	ss>>cutoff;
	s.cutoff_time = cutoff;
	//cout<<s.cutoff_time<<endl;
	
	vector<int> init_solution;
	char name[100] = "/home/guishuo/localsearch/lspbo/test2.wecnf";
	s.build_instance(name);

	s.local_search_with_decimation(init_solution, name);

	//s.simple_print();
	s.print_best_solution();
	s.free_memory();

	return 0;
}
