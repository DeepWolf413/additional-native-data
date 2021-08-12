// beat_chain_gang.ysc @ L6389
void func_159()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 7)
  {
    if (func_54(uLocal_1408[iVar0], 0, 0))
    {
      if (PED::_IS_PED_HOGTIED(uLocal_1408[iVar0]))
      {
        ENTITY::_0xC3ABCFBC7D74AFA5(uLocal_1408[iVar0], 2, 1);
      }
    }
    iVar0++;
  }
}