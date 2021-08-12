// am_casino_peds.ysc @ L248992
void func_2968(int iParam0, int iParam1)
{
  if (iParam1 != -1)
  {
    if (Global_1683970.f_4586 == -1)
    {
      if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_SMPL_INTERIOR_EXT", iParam1, true, 0))
      {
        Global_1683970.f_4586 = iParam1;
        Global_1683970.f_4585 = iParam0;
      }
    }
  }
}