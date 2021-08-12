// winter1.ysc @ L101306
void func_2911(var uParam0)
{
  iLocal_903 = 0;
  while (iLocal_903 < 1)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_22[iLocal_903]))
    {
      WEAPON::REMOVE_ALL_PED_WEAPONS(Local_14.f_22[iLocal_903], true, true);
      PED::SET_PED_CONFIG_FLAG(Local_14.f_22[iLocal_903], 243, true);
      PED::SET_PED_CONFIG_FLAG(Local_14.f_22[iLocal_903], 186, false);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_22[iLocal_903], true);
      TASK::_0xE8C296B75EACC357(Local_14.f_22[iLocal_903], 0f);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_22[iLocal_903], 35, true);
      PED::SET_COMBAT_FLOAT(Local_14.f_22[iLocal_903], 3, 0.5f);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_22[iLocal_903], 30, true);
      PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_22[iLocal_903], 111, true);
      ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_14.f_22[iLocal_903], true);
      CAM::_0x5B637D6F3B67716A(Local_14.f_22[iLocal_903]);
      PED::SET_PED_FLEE_ATTRIBUTES(Local_14.f_22[iLocal_903], 512, true);
      PED::SET_PED_COMBAT_MOVEMENT(Local_14.f_22[iLocal_903], 1);
      PED::_0x66C047719B0E80E1(Local_14.f_22[iLocal_903], joaat("HUMAN_FASTBLEEDOUT"));
      func_1903(Local_14.f_22[iLocal_903], 0);
      func_1586(Local_14.f_22[iLocal_903], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, 1, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
    }
    iLocal_903++;
  }
}