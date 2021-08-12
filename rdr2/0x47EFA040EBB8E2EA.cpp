// gang2.ysc @ L55152
void func_1360()
{
  if (func_1097(iLocal_315[1], 0, 1, 0) != joaat("WEAPON_UNARMED"))
  {
    if (!bLocal_1160)
    {
      if (func_1909() < 5f && !func_1913())
      {
        TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(iLocal_315[1]);
        WEAPON::SET_CURRENT_PED_WEAPON(iLocal_315[1], joaat("WEAPON_UNARMED"), false, 0, false, false);
        WEAPON::SET_CURRENT_PED_WEAPON(iLocal_315[1], joaat("WEAPON_UNARMED"), false, 1, false, false);
        TASK::TASK_SWAP_WEAPON(iLocal_315[1], 0, 1, 0, 0);
        bLocal_1160 = true;
        func_213(&uLocal_1161);
      }
    }
    else if (func_919(&uLocal_1161) > 3f)
    {
      bLocal_1160 = false;
    }
  }
}