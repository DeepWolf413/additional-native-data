// ambush_gen_night_rob.ysc @ L8981
void func_301(int iParam0, int iParam1)
{
  if (PED::IS_PED_RAGDOLL(Global_35))
  {
    return;
  }
  if (((func_174(*iParam0, 1) || PED::IS_PED_PRONE(Global_35)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "script_re@mech_patdown", "loot_pistol_whip_fall_player", 1) && ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Global_35, "script_re@mech_patdown", "loot_pistol_whip_fall_player") > 0.35f)) || func_47(&(iParam0->f_1), 2f))
  {
    if (!func_174(*iParam0, 2))
    {
      func_236(iParam0, 2);
    }
    if (!func_174(*iParam0, 1))
    {
      func_236(iParam0, 4);
      PED::SET_PED_TO_RAGDOLL_WITH_FALL(Global_35, iParam1, iParam1, 2, -0.447214f, -0.894427f, 0f, 2f, 0f, 0f, 0f, 0f, 0f, 0f);
      func_236(iParam0, 1);
    }
    else
    {
      PED::SET_PED_TO_RAGDOLL(Global_35, iParam1, iParam1, 0, false, false, false);
    }
  }
}