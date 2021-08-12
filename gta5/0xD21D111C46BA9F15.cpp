// fm_content_island_heist.ysc @ L174240
void func_3695(int iParam0)
{
  int iVar0;
  
  if (func_326())
  {
    func_3696(-837690641, iParam0, &iVar0, 0, 1, 0);
    Global_4265506[iVar0 /*85*/].f_66.f_15 = iParam0;
    Global_4265506[iVar0 /*85*/].f_66.f_16 = func_565();
  }
  else
  {
    MONEY::_NETWORK_EARN_ISLAND_HEIST(iParam0, 0, 0, 0, iParam0, func_565());
  }
}