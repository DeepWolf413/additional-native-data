// beat_outlaw_transport.ysc @ L1936
void func_37()
{
  int iVar0;

  iVar0 = 4;
  while (iVar0 <= 5)
  {
    if (func_36(uLocal_801[iVar0], 0, 1))
    {
      if (ENTITY::GET_ENTITY_HEALTH(uLocal_801[iVar0]) > 15)
      {
        ENTITY::_SET_ENTITY_HEALTH(uLocal_801[iVar0], 15, 0);
      }
      PED::_0x735662994E60A710(uLocal_801[iVar0], 1);
      PED::_0x91BAB9E064F036CD(uLocal_801[iVar0], 1f);
      func_24(&iLocal_495, 32);
    }
    iVar0++;
  }
}