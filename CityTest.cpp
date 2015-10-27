#include "City.h"

void CityHash64_test ( const void * key, int len, void* seed, void * out )
{
  *(uint64*)out = CityHash64WithSeed((const char *)key,len,seed);
}

void CityHash128_test ( const void * key, int len, void* seed, void * out )
{
  uint128 s(0,0);

  s.first = *((uint32_t*)seed);

  *(uint128*)out = CityHash128WithSeed((const char*)key,len,s);
}
