#include <iostream>
#include <vector>
#include <list>

#include <benchmark/benchmark.h>

static void BM_SumList(benchmark::State& state)
{
	std::list<int> test;
	for(int i = 0; i < 1024*1024; i++)
		test.push_back(i);

	long sum = 0;
	for(auto _ : state)
	{
		for(auto& i : test)
		{
			sum += i;
		}
	}
}

static void BM_SumVector(benchmark::State& state)
{
	std::vector<int> test;
	for(int i = 0; i < 1024*1024; i++)
		test.push_back(i);

	long sum = 0;
	for(auto _ : state)
	{
		for(auto& i : test)
		{
			sum += i;
		}
	}
}

BENCHMARK(BM_SumList);
BENCHMARK(BM_SumVector);

BENCHMARK_MAIN();
