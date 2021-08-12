// business_battles.ysc @ L203444
void func_2922(bool bParam0)
{
  int iVar0;
  
  if (!func_2924(bParam0))
  {
    return;
  }
  if (func_1251(uLocal_2409.f_624[bParam0 /*7*/]))
  {
    iVar0 = NETWORK::NET_TO_VEH(uLocal_2409.f_624[bParam0 /*7*/]);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      if (func_2923(iVar0))
      {
        NETWORK::_0x2A5E0621DD815A9A(iVar0, 1, 0, 0);
      }
    }
  }
}