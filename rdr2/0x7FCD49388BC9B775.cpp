// beat_bear_trap.ysc @ L1672
bool func_37()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_851))
  {
    return true;
  }
  if (func_108(&iLocal_851, joaat("P_LANTERN09X")))
  {
    OBJECT::_0x7FCD49388BC9B775(iLocal_851, 0);
    return true;
  }
  return false;
}