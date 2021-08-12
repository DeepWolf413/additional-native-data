// hao1.ysc @ L49218
void func_541(int iParam0)
{
  if (func_687(Local_853[iParam0 /*18*/].f_3))
  {
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_853[iParam0 /*18*/].f_3, true);
    VEHICLE::SET_VEHICLE_IS_RACING(Local_853[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_853[iParam0 /*18*/].f_6, false);
    VEHICLE::SET_VEHICLE_ENGINE_ON(Local_853[iParam0 /*18*/].f_6, true, true, false);
    ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_853[iParam0 /*18*/].f_3, true);
    ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_853[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_STRONG(Local_853[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_853[iParam0 /*18*/].f_6, true);
    VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_853[iParam0 /*18*/].f_6, false);
    PED::SET_PED_CONFIG_FLAG(Local_853[iParam0 /*18*/].f_3, 32, false);
    PED::SET_PED_CONFIG_FLAG(Local_853[iParam0 /*18*/].f_3, 29, false);
    PED::SET_PED_CONFIG_FLAG(Local_853[iParam0 /*18*/].f_3, 116, false);
    PED::SET_PED_CONFIG_FLAG(Local_853[iParam0 /*18*/].f_3, 118, false);
    PED::SET_PED_CONFIG_FLAG(Local_853[iParam0 /*18*/].f_3, 26, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_853[iParam0 /*18*/].f_6, true, 1);
    PED::SET_PED_DIES_IN_WATER(Local_853[iParam0 /*18*/].f_3, false);
    if (Local_582.f_1 == 3)
    {
      ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_853[iParam0 /*18*/].f_6, false);
      PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_853[iParam0 /*18*/].f_3, 3);
    }
    Local_853[iParam0 /*18*/] = 0;
  }
}