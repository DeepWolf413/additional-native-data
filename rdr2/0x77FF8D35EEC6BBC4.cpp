// cv_cc_hsh_14.ysc @ L3494
bool func_92(var uParam0)
{
  if (ENTITY::IS_ENTITY_DEAD(func_49(uParam0, iLocal_94)))
  {
    uParam0->f_107[iLocal_94 /*113*/].f_5 = func_191(iLocal_125, uParam0->f_23, 0f, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0);
    PED::_SET_PED_OUTFIT_PRESET(func_49(uParam0, iLocal_94), 1, false);
    PED::SET_PED_CONFIG_FLAG(func_49(uParam0, iLocal_94), 448, true);
    AUDIO::STOP_PED_SPEAKING(func_49(uParam0, iLocal_94), true);
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(func_49(uParam0, iLocal_95)))
  {
    uParam0->f_107[iLocal_95 /*113*/].f_5 = func_191(iLocal_126, uParam0->f_23, 0f, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0);
    PED::_SET_PED_OUTFIT_PRESET(func_49(uParam0, iLocal_95), 2, false);
    PED::SET_PED_CONFIG_FLAG(func_49(uParam0, iLocal_95), 448, true);
    AUDIO::STOP_PED_SPEAKING(func_49(uParam0, iLocal_95), true);
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(func_49(uParam0, iLocal_96)))
  {
    uParam0->f_107[iLocal_96 /*113*/].f_5 = func_191(iLocal_127, uParam0->f_23, 0f, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0);
    PED::_SET_PED_SCALE(uParam0->f_107[iLocal_96 /*113*/].f_5, 1f);
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(func_49(uParam0, iLocal_97)))
  {
    uParam0->f_107[iLocal_97 /*113*/].f_5 = func_191(iLocal_127, uParam0->f_23, 0f, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0);
    PED::_SET_PED_SCALE(uParam0->f_107[iLocal_97 /*113*/].f_5, 1f);
    return false;
  }
  return true;
}