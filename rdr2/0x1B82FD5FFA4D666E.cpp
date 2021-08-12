// spd_andershelgerson.ysc @ L3627
void func_129()
{
  if (HUD::IS_RADAR_HIDDEN())
  {
    MAP::DISPLAY_RADAR(true);
  }
  if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
  {
    PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
  }
}