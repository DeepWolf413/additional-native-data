// aberdeenpigfarm.ysc @ L1785
void func_77(bool bParam0)
{
  bool bVar0;

  bVar0 = Global_1894899 & 1 != false;
  if (bVar0 == bParam0)
  {
    return;
  }
  if (bParam0)
  {
    Global_1894899 |= 1;
    STATS::_0xDA26263C07CCE9C2(1);
  }
  else
  {
    Global_1894899 = (Global_1894899 - Global_1894899 & 1);
    STATS::_0xDA26263C07CCE9C2(0);
  }
}