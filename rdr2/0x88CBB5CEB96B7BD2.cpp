// beat_booby_trap.ysc @ L10294
void func_289(int iParam0, int iParam1, char[4] cParam2, bool bParam3, bool bParam4, bool bParam5)
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_431[iParam0]))
  {
    WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_431[iParam0], true, true);
    switch (iParam0)
    {
      case 0:
        func_478(iLocal_431[iParam0], iParam1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 1);
        break;
      case 1:
        func_478(iLocal_431[iParam0], iParam1, joaat("WEAPON_REVOLVER_CATTLEMAN"), 1);
        break;
    }
    if (!MISC::IS_STRING_NULL_OR_EMPTY(cParam2))
    {
      func_479(&Local_369, cParam2, iLocal_431[iParam0], 0);
    }
    if (bParam3)
    {
      WEAPON::SET_CURRENT_PED_WEAPON(iLocal_431[iParam0], joaat("WEAPON_UNARMED"), false, 0, false, false);
    }
    if (bParam4)
    {
      PED::SET_PED_STEALTH_MOVEMENT(iLocal_431[iParam0], 1, 0, 1);
    }
    if (bParam5)
    {
      TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_431[iParam0], Global_35, -1, -1f, -1f, -1f);
    }
  }
}