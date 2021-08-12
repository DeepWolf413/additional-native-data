// am_mp_arcade_strength_test.ysc @ L85293
bool func_697()
{
  char* sVar0;
  
  sVar0 = func_70();
  STREAMING::REQUEST_CLIP_SET(sVar0);
  return STREAMING::HAS_CLIP_SET_LOADED(sVar0);
}