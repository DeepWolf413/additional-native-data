// agency_heist1.ysc @ L91797
int func_406(int iParam0, int* iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar1 = FILES::_GET_NUM_DLC_WEAPONS_SP();
  iVar0 = 0;
  while (iVar0 < iVar1)
  {
    if (FILES::_GET_DLC_WEAPON_DATA_SP(iVar0, iParam1))
    {
      if (iParam1->f_1 == iParam0)
      {
        return iVar0;
      }
    }
    iVar0++;
  }
  return -1;
}