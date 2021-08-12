// beat_piss_pot.ysc @ L1441
int func_38()
{
  int iVar0;
  int iVar1;

  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (func_52(uLocal_37[iVar0], 0, 1))
    {
      LAW::_0x21213B833EF4DAE7(PLAYER::GET_PLAYER_INDEX(), uLocal_37[iVar0], &iVar1);
      if (iVar1 != 0)
      {
        return 1;
      }
    }
    iVar0++;
  }
  return 0;
}