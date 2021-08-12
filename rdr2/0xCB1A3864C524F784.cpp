// beat_bear_trap.ysc @ L4420
int func_124(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return 0;
  }
  iVar0 = (ENTITY::GET_ENTITY_MODEL(iParam0) + SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
  PED::_0xCB1A3864C524F784(iParam0, iVar0);
  return iVar0;
}