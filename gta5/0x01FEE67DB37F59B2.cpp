// act_cinema.ysc @ L4030
int func_104()
{
  int iVar0;
  bool bVar1;
  float fVar2;
  struct<3> Var3;
  
  Var3 = { func_93(PLAYER::PLAYER_ID()) };
  iVar0 = 0;
  while (iVar0 < 32)
  {
    bVar1 = iVar0;
    if (func_36(bVar1, 1, 1))
    {
      if (PED::IS_PED_ON_FOOT(PLAYER::GET_PLAYER_PED(bVar1)))
      {
        if (!bVar1 == PLAYER::PLAYER_ID())
        {
          if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), bVar1))
          {
            fVar2 = SYSTEM::VMAG(func_93(bVar1) - Var3);
            if (fVar2 < 0.2f)
            {
              return 1;
            }
          }
        }
      }
    }
    iVar0++;
  }
  return 0;
}