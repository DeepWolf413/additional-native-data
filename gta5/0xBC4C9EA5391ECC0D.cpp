// am_mp_arena_garage.ysc @ L320219
void func_5117(var uParam0)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2) || HUD::IS_HUD_COMPONENT_ACTIVE(19))
  {
    if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "MP_HTRUCK_T_1e"))
    {
      if (func_5124())
      {
        HUD::CLEAR_HELP(true);
      }
    }
    else if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2, "MP_RGSUBM_T_1e"))
    {
      if (func_5118(1) || func_5118(2))
      {
        HUD::CLEAR_HELP(true);
      }
    }
    else if (func_1476(uParam0->f_2))
    {
      HUD::CLEAR_HELP(true);
    }
  }
}