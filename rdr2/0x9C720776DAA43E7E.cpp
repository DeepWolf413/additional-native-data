// guama1.ysc @ L45812
void func_1099()
{
  int iVar0;

  PED::CLEAR_PED_WETNESS(Global_35);
  PED::SET_PED_SWEAT(Global_35, 0f);
  iVar0 = 0;
  while (iVar0 < 4)
  {
    PED::CLEAR_PED_WETNESS(uLocal_27[iVar0]);
    PED::SET_PED_SWEAT(uLocal_27[iVar0], 0f);
    iVar0++;
  }
}