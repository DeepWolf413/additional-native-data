// am_mp_casino_nightclub.ysc @ L370343
void func_5309(var uParam0, int iParam1, bool bParam2)
{
  int iVar0;
  
  func_5260(uParam0, iParam1);
  func_5259(uParam0, bParam2);
  func_5315(uParam0, iParam1, bParam2);
  func_5258(uParam0, 1);
  func_5225(uParam0, 0);
  func_5314(uParam0);
  func_4800(&(uParam0->f_657));
  PLAYER::SET_PLAYER_CONTROL(uParam0->f_948, false, 256);
  if (bParam2)
  {
    func_5312(uParam0);
    iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_5311(uParam0));
    uParam0->f_4[uParam0->f_949 /*12*/].f_4 = iVar0;
    STATS::_0xC14BD9F5337219B2(0, uParam0->f_915.f_10);
  }
  else
  {
    uParam0->f_673 = func_5310(uParam0);
    func_4800(&(uParam0->f_651));
    func_4799(&(uParam0->f_651), 0, 0);
  }
  func_5266(uParam0, 9);
}