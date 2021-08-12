// act_cinema.ysc @ L79204
void func_422(var uParam0, int iParam1)
{
  if (MISC::IS_BIT_SET(Global_1323703[iParam1 /*142*/].f_103, 2))
  {
    func_439(*uParam0);
  }
  if (MISC::IS_BIT_SET(Global_1323703[iParam1 /*142*/].f_103, 3))
  {
    func_438();
    MISC::SET_BIT(&(Global_1323703[iParam1 /*142*/].f_103), 3);
    func_437(*uParam0, 1, 0);
    func_423(88, 3, 0);
  }
  AUDIO::SET_VEH_RADIO_STATION(*uParam0, &(Global_1323703[iParam1 /*142*/].f_122));
  MISC::CLEAR_BIT(&(Global_1323703[iParam1 /*142*/].f_103), 14);
}