#include <cstdio>
#include <random>

int main(){

  const long numRuns = 100000;
  const double mean = 50;
  const double std = 10;
  const double initial = 74;
  const double delivery = 47;
  const long numWeeks = 11;
  const double threshold = 20.0;

  std::default_random_engine generator;
  std::normal_distribution<double> dist(mean, std);

  double cnt(0), nr(numRuns);
  while(nr--){
      double state(initial);
      long nw(numWeeks);
      while(--nw){
          state += delivery;
          double sold = dist(generator);
          state -= sold; state = (state > 0) ? state : 0;
          //printf("%.1lf\t", state);
      }
      //puts("");


      cnt += (state < threshold);
  }

  printf("%.4lf\n", cnt / numRuns);

  return 0;
}
