// agency_prep2amb.ysc @ L6707
void func_142(int iParam0, struct<3> Param1)
{
  int iVar0;
  
  if (HUD::DOES_BLIP_EXIST(Global_31724[iParam0 /*23*/].f_19))
  {
    HUD::SET_BLIP_COORDS(Global_31724[iParam0 /*23*/].f_19, Param1);
  }
  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 <= 2)
  {
    Global_31724[iParam0 /*23*/][iVar0 /*3*/] = { Param1 };
    iVar0++;
  }
}