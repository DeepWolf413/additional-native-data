// abigail2_1.ysc @ L48792
void func_1229(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 2f);
  }
  else if (bParam1)
  {
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.75f);
  }
  else
  {
    PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1.5f);
  }
}