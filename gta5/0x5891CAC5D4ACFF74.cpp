// bailbond1.ysc @ L37564
void func_327()
{
  if (func_24(Local_112.f_9))
  {
    if (((Local_112.f_10 != 23 && Local_112.f_10 != 24) && Local_112.f_10 != 21) && Local_112.f_10 != 22)
    {
      PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_612);
      PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_612, 1862763509);
      if (PED::IS_PED_IN_GROUP(Local_112.f_9))
      {
        PED::REMOVE_PED_FROM_GROUP(Local_112.f_9);
      }
      TASK::CLEAR_PED_SECONDARY_TASK(Local_112.f_9);
      TASK::CLEAR_PED_TASKS(Local_112.f_9);
      ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_112.f_9, false, 1);
      WEAPON::SET_PED_DROPS_WEAPON(Local_112.f_9);
      WEAPON::REMOVE_ALL_PED_WEAPONS(Local_112.f_9, true);
      WEAPON::SET_CURRENT_PED_WEAPON(Local_112.f_9, joaat("weapon_unarmed"), true);
      PED::SET_PED_CAN_SWITCH_WEAPON(Local_112.f_9, false);
      PED::SET_PED_ARMOUR(Local_112.f_9, 0);
      PED::SET_PED_FLEE_ATTRIBUTES(Local_112.f_9, 1, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_112.f_9, 17, true);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_112.f_9, 0, false);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_112.f_9, 5, false);
      if (PED::IS_PED_IN_ANY_VEHICLE(Local_112.f_9, true))
      {
        TASK::TASK_LEAVE_ANY_VEHICLE(Local_112.f_9, 0, 0);
      }
      iLocal_429 = MISC::GET_GAME_TIMER();
      Local_112.f_10 = 23;
    }
  }
}