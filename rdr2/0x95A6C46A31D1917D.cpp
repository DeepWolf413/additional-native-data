// braithwaites2.ysc @ L71900
void func_1860()
{
  int iVar0;

  WEAPON::SET_CURRENT_PED_WEAPON(bLocal_785, joaat("WEAPON_MELEE_KNIFE_SEAN"), true, 0, false, false);
  TASK::CLEAR_PED_TASKS(bLocal_785, false, false);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_CLEAR_DEFENSIVE_AREA(0);
  TASK::TASK_SET_CROUCH_MOVEMENT(0, true, 0, false);
  if (func_163(Local_14.f_8[4], 11))
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1844.828f, -1285.897f, 41.6253f, 2f, 40000, 0.25f, 8193, 40000f);
    TASK::TASK_MELEE(0, Local_14.f_8[4], joaat("AR_STEALTH_KILL"), 1, 1, 1f, 1, -1082130432 /* Float: -1f */);
  }
  else
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1836.22f, -1279.2f, 43.35f, 1f, 20000, 0.25f, 0, 53.62f);
  }
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(bLocal_785, iVar0);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}