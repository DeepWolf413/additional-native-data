// rcm_war_veteran4.ysc @ L9628
void func_329(bool bParam0, bool bParam1)
{
  func_320(&iLocal_87, 128);
  func_376(&iLocal_83);
  func_662(iLocal_15);
  ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_15, func_214(25), func_215(25), false, false, true);
  if (bParam1)
  {
    ANIMSCENE::START_ANIM_SCENE(Local_314[2 /*16*/]);
  }
  else
  {
    ANIMSCENE::START_ANIM_SCENE(Local_314[1 /*16*/]);
    WEAPON::SET_PED_DROPS_INVENTORY_WEAPON(iLocal_15, joaat("WEAPON_REPEATER_CARBINE"), 0f, 0f, 0f, 9);
  }
  WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_15, false);
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_16))
  {
    ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_16, func_214(30), func_215(30), true, false, true);
    TASK::TASK_STAND_STILL(iLocal_16, -1);
    PED::_0x2EB75FB86C41F026(iLocal_16, 3, 1);
    PED::_0x23BDE06596A22CEC(iLocal_16, 3, 3f, 0);
  }
  func_355(&uLocal_85, func_214(25), 2.25f, 1, -1, 0);
  if (bParam0)
  {
    AUDIO::DISABLE_PED_PAIN_AUDIO(iLocal_15, true);
  }
  PED::APPLY_PED_DAMAGE_PACK(iLocal_15, "PD_War_Veteran_Dead", 0f, 1f);
  func_661(7);
}