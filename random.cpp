


mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int myrand(int l, int r)
{
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}





mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

int myrand(int l, int r)
{
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}




