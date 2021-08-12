// fm_mission_controller.ysc @ L692353
void func_11529(bool bParam0)
{
  iLocal_52134 = -3;
  MISC::CLEAR_BIT(&(Local_31280[bLocal_3288 /*292*/].f_129), 23);
  MISC::CLEAR_BIT(&(Local_31280[bLocal_3288 /*292*/].f_129), 24);
  MISC::CLEAR_BIT(&(Local_31280[bLocal_3288 /*292*/].f_129), 25);
  MISC::CLEAR_BIT(&(Local_31280[bLocal_3288 /*292*/].f_129), 26);
  MISC::CLEAR_BIT(&(Local_31280[bLocal_3288 /*292*/].f_129), 27);
  func_2(&Local_52136);
  func_2(&Local_52138);
  if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_3286, false))
  {
    ENTITY::SET_ENTITY_COLLISION(iLocal_3286, true, false);
  }
  ENTITY::SET_ENTITY_INVINCIBLE(iLocal_3286, false);
  ENTITY::SET_ENTITY_VISIBLE(iLocal_3286, true, false);
  func_2(&Local_52140);
  func_33(&Local_52140, 0, 0);
  HUD::CLEAR_HELP(true);
  Global_1316787 = 0;
  if (func_590(Global_4456448.f_133963))
  {
    OBJECT::SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(true);
    OBJECT::SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(0, Global_4456448.f_594[Local_31280[bLocal_3288 /*292*/].f_1 /*16832*/].f_5426[Local_28024[Local_31280[bLocal_3288 /*292*/].f_1]]);
  }
  if (bParam0)
  {
    iLocal_52133 = -1;
  }
}