// am_darts.ysc @ L121864
int func_1038()
{
  int iVar0;
  struct<13> Var1;
  char* sVar14;
  
  iVar0 = -1;
  Var1 = { func_1040() };
  if (func_448(&Var1))
  {
    if (NETWORK::_0xC32EA7A2F6CA7557())
    {
      if (NETWORK::_NETWORK_CLAN_ANIMATION("anim", &sVar14))
      {
        iVar0 = func_1039(&sVar14);
      }
    }
  }
  return iVar0;
}