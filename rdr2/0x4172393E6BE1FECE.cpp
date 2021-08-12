// act_caunc_rustling.ysc @ L50003
bool func_1346()
{
  vector3 vVar0;

  if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_1269, 1.5f, 1.5f, 2.5f, false, true, 0))
  {
    func_65(4);
    if (PED::IS_PED_IN_GROUP(iLocal_22))
    {
      PED::REMOVE_PED_FROM_GROUP(iLocal_22);
    }
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_22, true, false) };
    func_652(iLocal_22, vLocal_1269, fLocal_1268, 2, 1073741824 /* Float: 2f */);
    PED::_SET_PED_CROUCH_MOVEMENT(iLocal_22, true, 0, false);
  }
  else
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(iLocal_22, vLocal_1265, -1, 1, 0f, 0, 0, iLocal_1264, 0, 1, 0);
    return true;
  }
  return false;
}