// am_casino_peds.ysc @ L309733
void func_4282(var uParam0, var uParam1, var uParam2, var uParam3)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
  {
    ENTITY::SET_ENTITY_DYNAMIC(*uParam1, false);
    ENTITY::SET_ENTITY_VISIBLE(*uParam1, false, false);
    ENTITY::SET_ENTITY_COLLISION(*uParam1, true, false);
    ENTITY::FREEZE_ENTITY_POSITION(*uParam1, true);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam1, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
  {
    ENTITY::SET_ENTITY_VISIBLE(*uParam2, true, false);
    ENTITY::SET_ENTITY_COLLISION(*uParam2, false, false);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam2, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
  {
    ENTITY::SET_ENTITY_VISIBLE(*uParam3, true, false);
    ENTITY::SET_ENTITY_COLLISION(*uParam3, false, false);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0, false))
  {
    ENTITY::SET_ENTITY_DYNAMIC(*uParam0, false);
    ENTITY::SET_ENTITY_VISIBLE(*uParam0, true, false);
    ENTITY::SET_ENTITY_COLLISION(*uParam0, false, false);
    ENTITY::FREEZE_ENTITY_POSITION(*uParam0, true);
    ENTITY::SET_ENTITY_INVINCIBLE(*uParam0, true);
  }
}