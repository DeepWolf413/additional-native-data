// agency_heist1.ysc @ L107010
bool func_631(char* sParam0)
{
  bool bVar0;
  
  bVar0 = CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0);
  if (!Global_77247)
  {
    if (!bVar0)
    {
      Global_77247 = 1;
    }
  }
  return bVar0;
}