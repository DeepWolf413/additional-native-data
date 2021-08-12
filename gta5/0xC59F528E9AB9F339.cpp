// abigail1.ysc @ L39185
bool func_291()
{
  bool bVar0;
  
  bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
  if (!Global_77247)
  {
    if (!bVar0)
    {
      Global_77247 = 1;
    }
  }
  return bVar0;
}