// ambush_exc_road_robbery.ysc @ L4153
bool func_144()
{
  char* sVar0;
  int iVar1;

  if (VOLUME::_DOES_VOLUME_EXIST(Local_274.f_86[4]))
  {
    if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_86[4], Global_36))
    {
      iVar1 = -1;
      sVar0 = func_306(&Local_15, &Local_274, 0, &iVar1);
      PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
      TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, 3000, false, 1);
      func_164(Local_15[0], &(Local_15.f_22[0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
      func_164(Local_15[1], &(Local_15.f_22[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
      func_307(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1);
      return true;
    }
  }
  return false;
}