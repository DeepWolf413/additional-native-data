// arena_carmod.ysc @ L126461
void func_1185(int iParam0, int iParam1, int iParam2, int iParam3)
{
  struct<4> Var0;
  struct<12> Var4;
  
  if (!MISC::IS_BIT_SET(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_267.f_27, 3))
  {
    if (!func_1201(iParam2, iParam0))
    {
      StringCopy(&Var0, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam2), 16);
      Var4 = iParam0;
      Var4.f_1 = iParam1;
      Var4.f_2 = ENTITY::GET_ENTITY_MODEL(iParam2);
      Var4.f_3 = func_1253(iParam2);
      Var4.f_4 = func_1199(Var0);
      Var4.f_5 = func_1198();
      Var4.f_6 = func_1190();
      Var4.f_7 = func_1269(joaat("mpply_char_exploit_level"));
      Var4.f_8 = iParam3;
      Var4.f_9 = func_2770(99, -1);
      Var4.f_10 = 0;
      Var4.f_11 = 0;
      STATS::_PLAYSTATS_DUPE_DETECTION(&Var4);
      func_1186(iParam2, iParam0);
    }
  }
}