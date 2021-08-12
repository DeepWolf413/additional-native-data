// am_mp_hangar.ysc @ L375252
int func_6205(var uParam0, var uParam1, int* iParam2, bool bParam3)
{
  struct<3> Var0;
  
  bParam3 = bParam3;
  if (TASK::IS_PED_PLAYING_BASE_CLIP_IN_SCENARIO(PLAYER::PLAYER_PED_ID()))
  {
    return 1;
  }
  else
  {
    Var0 = { func_6204(uParam1, uParam0->f_6, iParam2) };
    Var0 = { Var0 };
    if (!bParam3)
    {
      if (!TASK::PED_HAS_USE_SCENARIO_TASK(PLAYER::PLAYER_PED_ID()))
      {
        if (TASK::DOES_SCENARIO_EXIST_IN_AREA(func_6204(uParam1, uParam0->f_6, iParam2), 2f, true))
        {
          if ((((((((((func_89(uParam1->f_31) || func_87(uParam1->f_31)) || func_88(uParam1->f_31, -1)) || func_86(uParam1->f_31)) || func_100(uParam1->f_31, -1)) || func_81(uParam1->f_31, 0, 0)) || func_6206(uParam1->f_31)) || func_54(PLAYER::PLAYER_ID())) || func_53(PLAYER::PLAYER_ID())) || iParam2->f_2480) || iParam2->f_2481)
          {
            PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 414, true);
          }
          TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(PLAYER::PLAYER_PED_ID(), func_6204(uParam1, uParam0->f_6, iParam2), 2f, 0);
        }
      }
    }
  }
  return 0;
}