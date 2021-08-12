// abigail2_1.ysc @ L79711
void func_2340(int iParam0)
{
  if (func_2502(iParam0, 0))
  {
    return;
  }
  ENTITY::SET_ENTITY_INVINCIBLE(iParam0, true);
  PED::SET_PED_CONFIG_FLAG(iParam0, 179, true);
  ENTITY::SET_ENTITY_PROOFS(iParam0, 127, false);
  if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
  {
    FIRE::STOP_ENTITY_FIRE(iParam0, 0);
    ENTITY::_SET_ENTITY_HEALTH(iParam0, ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false), 0);
  }
}