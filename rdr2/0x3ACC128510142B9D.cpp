// bounty1.ysc @ L64605
bool func_1742()
{
  if (func_424(iLocal_111, 0) && func_424(Global_35, 0))
  {
    return 150f < (TASK::_0x3ACC128510142B9D(sLocal_31, ENTITY::GET_ENTITY_COORDS(iLocal_111, true, false)) - TASK::_0x3ACC128510142B9D(sLocal_31, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)));
  }
  return false;
}